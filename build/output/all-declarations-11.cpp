#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     GALGAS_string & ioArgument_ioString,
                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.getter_mIncrement (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(temp_2.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = object ;
    test_3 = temp_4.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
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
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = object ;
    test_5 = temp_6.getter_mBranchIfZero (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_localLabel_3005 = GALGAS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (var_localLabel_3005, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_7.getter_mTargetLabel (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
      ioArgument_ioString.plusAssign_operation(var_localLabel_3005.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = object ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_8.getter_mTargetLabel (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = object ;
  switch (temp_0.getter_mBit_31__31_ (HERE).enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = object ;
  switch (temp_1.getter_mBit_31__32_ (HERE).enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_2.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_0.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = object ;
  switch (temp_0.getter_mBit_31__31_ (HERE).enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = object ;
  switch (temp_1.getter_mBit_31__32_ (HERE).enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_2.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = object ;
  switch (temp_3.getter_mBit_31__31_ (HERE).enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = object ;
  switch (temp_4.getter_mBit_31__32_ (HERE).enumValue ()) {
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_0.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                              GALGAS_string & ioArgument_ioString,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                GALGAS_string & ioArgument_ioString,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.getter_mLiteralInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (temp_1.getter_mLiteralValue (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.getter_mOccurrenceFactor (HERE).getter_location (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
    }
  }
  GALGAS_uint var_idx_6990 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = object ;
  if (temp_4.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).isValid ()) {
    uint32_t variant_7001 = temp_4.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).uintValue () ;
    bool loop_7001 = true ;
    while (loop_7001) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = object ;
      loop_7001 = GALGAS_bool (kIsStrictInf, var_idx_6990.objectCompare (temp_5.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).isValid () ;
      if (loop_7001) {
        loop_7001 = GALGAS_bool (kIsStrictInf, var_idx_6990.objectCompare (temp_5.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).boolValue () ;
      }
      if (loop_7001 && (0 == variant_7001)) {
        loop_7001 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_7001) {
        variant_7001 -- ;
        ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6990.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'midrange_build_assembly_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_midrange_5F_build_5F_assembly_5F_code (const GALGAS_string constinArgument_inProcessorName,
                                                    const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                    const GALGAS_registerTable constinArgument_inAllRegisters,
                                                    const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inInstructionList,
                                                    const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                    GALGAS_string & outArgument_outAssemblyCode,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAssemblyCode.drop () ; // Release 'out' argument
  outArgument_outAssemblyCode = GALGAS_string ("  errorlevel -302 ; No Warning on registers not in bank 0\n") ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 304)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 307)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  ORG 0\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 308)) ;
  GALGAS_uint var_bccLabelIndex_9170 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9205 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_9205.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9205.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_9170, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9205.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9421 (constinArgument_inPredefinedRegisters, kENUMERATION_UP) ;
  while (enumerator_9421.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_9448 ;
    enumerator_9421.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9448, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssign_operation(enumerator_9421.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9448.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9421.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9731 (constinArgument_inAllRegisters, kENUMERATION_UP) ;
  while (enumerator_9731.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9731.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_uint var_firstRegister_9822 ;
        enumerator_9731.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9822, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
        outArgument_outAssemblyCode.plusAssign_operation(enumerator_9731.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9822.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
      }
    }
    enumerator_9731.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("W EQU 1\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Configuration\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
      cEnumerator_actualConfigurationMap enumerator_10294 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
      while (enumerator_10294.hasCurrentObject ()) {
        outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_10294.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10294.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
        enumerator_10294.gotoNextObject () ;
      }
    }
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";---\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 341)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  END\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 342)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeCodeAtWordAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitMidrangeCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                            GALGAS_uint & ioArgument_ioWordAddress,
                                            const GALGAS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 15)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeDirectCodeAtWordAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitMidrangeDirectCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                                  GALGAS_uint & ioArgument_ioWordAddress,
                                                  const GALGAS_string constinArgument_inInstructionDescriptionString,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 28)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 29)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitNoMidrangeCodeAtWordAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitNoMidrangeCodeAtWordAddress (const GALGAS_uint constinArgument_inWordAddress,
                                              const GALGAS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.getter_mLabel (HERE), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 68)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                            extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                           GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioAddress = temp_0.getter_mOrigin (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                            extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_actualInstruction * object = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = object ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                            extensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                          const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                          GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                   const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                   const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                   const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                   const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioAddress = temp_0.getter_mOrigin (HERE) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = object ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = object ;
  routine_setEmitAddress (temp_1.getter_mOrigin (HERE).add_operation (temp_2.getter_mOrigin (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)) ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_3 = object ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 126)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                       const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                       const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                       const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                                       GALGAS_uint & ioArgument_ioAddress,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = object ;
  GALGAS_uint var_code_5753 = extensionGetter_basecode (temp_0.getter_mInstruction_5F_FD_5F_base_5F_code (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 160)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_2 = object ;
    test_1 = temp_2.getter_m_5F_W_5F_isDestination (HERE).operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_5753 = var_code_5753.operator_or (GALGAS_uint ((uint32_t) 128U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 162)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = object ;
  var_code_5753 = var_code_5753.operator_or (temp_3.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 164)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_4 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_5753, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 165)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  GALGAS_uint var_code_6664 = extensionGetter_baseCode (temp_0.getter_mFinstruction (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 187)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = object ;
  var_code_6664 = var_code_6664.operator_or (temp_1.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 188)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_2 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_6664, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 189)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                       const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                       const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                       const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                                       GALGAS_uint & ioArgument_ioAddress,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  GALGAS_uint var_code_7485 = extensionGetter_baseCode (temp_0.getter_mBitOrientedOp (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 212)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = object ;
  var_code_7485 = var_code_7485.operator_or (temp_1.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 213)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = object ;
  var_code_7485 = var_code_7485.operator_or (temp_2.getter_mBitNumber (HERE).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_3 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_7485, ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 215)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                                const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code_8142 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.getter_mSkipIfSet (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_8142 = GALGAS_uint ((uint32_t) 7168U) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_8142 = GALGAS_uint ((uint32_t) 6144U) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = object ;
  var_code_8142 = var_code_8142.operator_or (temp_2.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 234)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = object ;
  var_code_8142 = var_code_8142.operator_or (temp_3.getter_mBitNumber (HERE).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_4 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_8142, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 236)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction_nocheck'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (const GALGAS_string constinArgument_inTargetLabel,
                                                             const GALGAS_uint constinArgument_inTargetAddress,
                                                             GALGAS_uint & ioArgument_ioAddress,
                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_8676 = GALGAS_uint ((uint32_t) 10240U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_8676, ioArgument_ioAddress, GALGAS_string ("GOTO ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction (const GALGAS_location constinArgument_inIntructionLocation,
                                                  GALGAS_uint & ioArgument_ioAddress,
                                                  const GALGAS_string constinArgument_inTargetLabel,
                                                  const GALGAS_uint constinArgument_inTargetAddress,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("GOTO (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 261)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction_nocheck'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (const GALGAS_string constinArgument_inTargetLabel,
                                                             const GALGAS_uint constinArgument_inTargetAddress,
                                                             GALGAS_uint & ioArgument_ioAddress,
                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_9649 = GALGAS_uint ((uint32_t) 8192U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_9649, ioArgument_ioAddress, GALGAS_string ("CALL ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction (const GALGAS_location constinArgument_inIntructionLocation,
                                                  GALGAS_uint & ioArgument_ioAddress,
                                                  const GALGAS_string constinArgument_inTargetLabel,
                                                  const GALGAS_uint constinArgument_inTargetAddress,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("CALL (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 286)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                          const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                          const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_stringset var_usedRegisters_10753 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 299)) ;
  GALGAS_uint var_targetAddress_10798 ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_targetAddress_10798, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 301)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_10925 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 306))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_11136 ;
  GALGAS_bitSliceTable joker_11318 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_10925.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 311)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_11136, joker_11318, var_usedRegisters_10753, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 309)) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = object ;
  switch (temp_1.getter_mBit_31__31_ (HERE).enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)).operator_or (var_PCLATH_5F_IPICregisterDescription_11136.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 322)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 321)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)).operator_or (var_PCLATH_5F_IPICregisterDescription_11136.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 329)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 328)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = object ;
  switch (temp_2.getter_mBit_31__32_ (HERE).enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)).operator_or (var_PCLATH_5F_IPICregisterDescription_11136.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 339)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 338)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)).operator_or (var_PCLATH_5F_IPICregisterDescription_11136.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 346)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 345)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_3 = object ;
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (temp_3.getter_mTargetLabel (HERE).getter_string (HERE), var_targetAddress_10798, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 354)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                          const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  GALGAS_uint var_targetAddress_12847 ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_targetAddress_12847, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 368)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_1 = object ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_2 = object ;
  routine_emit_5F_midrange_5F_GOTOinstruction (temp_1.getter_mInstructionLocation (HERE), ioArgument_ioAddress, temp_2.getter_mTargetLabel (HERE).getter_string (HERE), var_targetAddress_12847, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 370)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  GALGAS_stringset var_usedRegisters_13437 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 382)) ;
  GALGAS_uint var_targetAddress_13487 ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_targetAddress_13487, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_13614 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 389))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 389))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 389)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 390))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 387)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_13832 ;
  GALGAS_bitSliceTable joker_14014 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_13614.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 395)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_13832, joker_14014, var_usedRegisters_13437, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 393)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = object ;
  switch (temp_1.getter_mBit_31__31_ (HERE).enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 406)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 405)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 413)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 412)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = object ;
  switch (temp_2.getter_mBit_31__32_ (HERE).enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 423)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 422)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 430)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 429)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = object ;
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (temp_3.getter_mTargetLabel (HERE).getter_string (HERE), var_targetAddress_13487, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 437)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = object ;
  switch (temp_4.getter_mBit_31__31_ (HERE).enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 441)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 440)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 448)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 447)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_5 = object ;
  switch (temp_5.getter_mBit_31__32_ (HERE).enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 458)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 457)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)).operator_or (var_PCLATH_5F_IPICregisterDescription_13832.getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 465)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 464)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                          const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  GALGAS_uint var_targetAddress_16498 ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_targetAddress_16498, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 485)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_1 = object ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_2 = object ;
  routine_emit_5F_midrange_5F_CALLinstruction (temp_1.getter_mInstructionLocation (HERE), ioArgument_ioAddress, temp_2.getter_mTargetLabel (HERE).getter_string (HERE), var_targetAddress_16498, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 487)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                               const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_code_17100 ;
  GALGAS_string var_s_17112 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.getter_mIncrement (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_17100 = GALGAS_uint ((uint32_t) 3840U) ;
      var_s_17112 = GALGAS_string ("INCFSZ") ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_17100 = GALGAS_uint ((uint32_t) 2816U) ;
    var_s_17112 = GALGAS_string ("DECFSZ") ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = object ;
    test_2 = temp_3.getter_m_5F_W_5F_isDestination (HERE).operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 506)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_17100 = var_code_17100.operator_or (GALGAS_uint ((uint32_t) 128U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 507)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = object ;
  var_code_17100 = var_code_17100.operator_or (temp_4.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 509)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 509)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 509)) ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = object ;
  var_s_17112.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("midrange_build_binary_code.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 510)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_17100, ioArgument_ioAddress, var_s_17112, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
    test_6 = temp_7.getter_mBranchIfZero (HERE).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = object ;
      routine_emit_5F_midrange_5F_GOTOinstruction (temp_8.getter_mInstructionLocation (HERE), ioArgument_ioAddress, GALGAS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 514)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 514)) ;
      }
    }
  }
  GALGAS_uint var_targetAddress_17706 ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (temp_9.getter_mTargetLabel (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 518))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 518)), var_targetAddress_17706, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 518)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_10 = object ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = object ;
  routine_emit_5F_midrange_5F_GOTOinstruction (temp_10.getter_mInstructionLocation (HERE), ioArgument_ioAddress, temp_11.getter_mTargetLabel (HERE), var_targetAddress_17706, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 519)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 100U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 531)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                         const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 256U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 543)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                        const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_uint & ioArgument_ioAddress,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 555)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 8U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 567)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 9U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 579)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                          const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 99U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 591)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                     const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                     const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                                     const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  GALGAS_uint var_code_21690 = extensionGetter_baseCode (temp_0.getter_mLiteralInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 618)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  var_code_21690 = var_code_21690.operator_or (temp_1.getter_mLiteralValue (HERE) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 619)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_21690, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 620)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress_22305 ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.getter_mLabel (HERE), var_targetAddress_22305, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 632)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_targetAddress_22305.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = object ;
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mLabel (HERE).getter_location (SOURCE_FILE ("midrange_build_binary_code.galgas", 634)), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.getter_mLabel (HERE).getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 634)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 634)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 635)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 635)).add_operation (var_targetAddress_22305.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 635)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 636)), fixItArray4  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 634)) ;
    }
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_5 = object ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 638)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                         const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 650)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.getter_mOccurrenceFactor (HERE).getter_location (SOURCE_FILE ("midrange_build_binary_code.galgas", 651)), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 651)) ;
    }
  }
  GALGAS_uint var_idx_23158 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = object ;
  if (temp_4.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 654)).isValid ()) {
    uint32_t variant_23169 = temp_4.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 654)).uintValue () ;
    bool loop_23169 = true ;
    while (loop_23169) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = object ;
      loop_23169 = GALGAS_bool (kIsStrictInf, var_idx_23158.objectCompare (temp_5.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 655)))).isValid () ;
      if (loop_23169) {
        loop_23169 = GALGAS_bool (kIsStrictInf, var_idx_23158.objectCompare (temp_5.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 655)))).boolValue () ;
      }
      if (loop_23169 && (0 == variant_23169)) {
        loop_23169 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_build_binary_code.galgas", 654)) ;
      }
      if (loop_23169) {
        variant_23169 -- ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, GALGAS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 657)) ;
        }
        var_idx_23158.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 658)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_ipic_binary_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                          const GALGAS_uint constinArgument_inTotalBankCount,
                                                          const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                          const GALGAS_uint constinArgument_inROMsize,
                                                          const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                          GALGAS_uint & outArgument_outUsedROMsize,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GALGAS_midrange_5F_symbolTable var_symbolTable_24186 = GALGAS_midrange_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("midrange_build_binary_code.galgas", 678)) ;
  GALGAS_uint var_currentAddress_24243 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24287 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_24287.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24287.current_mInstruction (HERE).ptr (), var_symbolTable_24186, var_currentAddress_24243, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
    enumerator_24287.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_24398 = var_currentAddress_24243 ;
  outArgument_outUsedROMsize = var_currentAddress_24243 ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 689)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 690)) ;
  }
  var_currentAddress_24243 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 692)) ;
  }
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24914 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_24914.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24914.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable_24186, ioArgument_ioListFileContents, var_currentAddress_24243, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 694)) ;
    {
    routine_checkCurrentEmitAddress (var_currentAddress_24243.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
    }
    enumerator_24914.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_24398.objectCompare (var_currentAddress_24243)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_24243.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (var_lastAddressForFirstPass_24398.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 707)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 708)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_24398.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24398.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 711)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 712)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
      }
    }
  }
  cEnumerator_actualConfigurationMap enumerator_25807 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
  while (enumerator_25807.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_25807.current_mRegisterAddress (HERE).add_operation (enumerator_25807.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 716)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 716)) ;
    }
    {
    routine_emitCode (enumerator_25807.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 717)) ;
    }
    enumerator_25807.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                  const GALGAS_string constinArgument_inSourceFileName,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_773 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_773.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 18)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 18)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 19)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_773, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
    }
  }
  GALGAS_string var_listFileContents_1125 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1220 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 25)), var_piccoloDeviceModel_1220, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 25)) ;
  }
  switch (var_piccoloDeviceModel_1220.getter_mProcessorType (SOURCE_FILE ("midrange_semantics.galgas", 26)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 28)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 28)), GALGAS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 29)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 29)), GALGAS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 29)) ;
    }
    break ;
  }
  GALGAS_bool var_hasInterrupt_1690 = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1753 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 33)), kENUMERATION_UP) ;
  while (enumerator_1753.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_hasInterrupt_1690.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1753.current_mInterruptLocation (HERE), GALGAS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 35)) ;
      }
    }
    var_hasInterrupt_1690 = GALGAS_bool (true) ;
    enumerator_1753.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_1995 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_1220.getter_mConfigRegisterMap (SOURCE_FILE ("midrange_semantics.galgas", 42)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 43)), var_listFileContents_1125, var_actualConfigurationMap_1995, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 41)) ;
  }
  GALGAS_constantMap var_constantMap_2235 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 48)) ;
  GALGAS_stringset var_usedRegisters_2267 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 49)) ;
  GALGAS_registerTable var_registerTable_2303 = var_piccoloDeviceModel_1220.getter_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 50)) ;
  GALGAS_lstring var_romSizeString_2390 = GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 52))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 52)) ;
  {
  var_constantMap_2235.setter_insertKey (var_romSizeString_2390, var_piccoloDeviceModel_1220.getter_mRomSize (HERE).getter_uint (HERE).getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 53)) ;
  }
  cEnumerator_constantDefinitionList enumerator_2589 (constinArgument_inPiccoloModel.getter_mConstantDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 55)), kENUMERATION_UP) ;
  while (enumerator_2589.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_2662 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_2589.current_mExpression (HERE).ptr (), var_registerTable_2303, var_constantMap_2235, var_result_2662, var_usedRegisters_2267, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_registerTable_2303.getter_hasKey (enumerator_2589.current_mConstantName (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 57)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 57)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2589.current_mConstantName (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 58)), GALGAS_string ("'").add_operation (enumerator_2589.current_mConstantName (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      var_constantMap_2235.setter_insertKey (enumerator_2589.current_mConstantName (HERE), var_result_2662, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 60)) ;
      }
    }
    enumerator_2589.gotoNextObject () ;
  }
  GALGAS_ramBankTable var_ramBank_2998 = var_piccoloDeviceModel_1220.getter_mRamBankTable (SOURCE_FILE ("midrange_semantics.galgas", 64)) ;
  GALGAS_declaredByteMap var_declaredByteMap_3304 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.getter_mRamDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 67)), var_constantMap_2235, var_usedRegisters_2267, var_ramBank_2998, var_piccoloDeviceModel_1220.getter_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 71)), var_listFileContents_1125, var_registerTable_2303, var_declaredByteMap_3304, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 65)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3759 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (var_piccoloDeviceModel_1220.getter_mRomSize (HERE).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 78)).add_operation (GALGAS_uint ((uint32_t) 2047U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 78)).divide_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 78)), var_piccoloDeviceModel_1220.getter_mBankCount (SOURCE_FILE ("midrange_semantics.galgas", 79)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 79)), var_constantMap_2235, var_piccoloDeviceModel_1220.getter_mSharedBankName (HERE), var_registerTable_2303, constinArgument_inPiccoloModel, var_hasInterrupt_1690, var_generatedInstructionList_3759, var_listFileContents_1125, var_usedRegisters_2267, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 77)) ;
  }
  GALGAS_stringset var_usedRoutineSet_3897 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (HERE), constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 91)) ;
  GALGAS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_4047 = GALGAS_midrange_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 95)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_4139 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_4139.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_4047.setter_insertKey (enumerator_4139.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 97)) ;
    }
    enumerator_4139.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_4291 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 100)) ;
  cEnumerator_lstringlist enumerator_4361 (constinArgument_inPiccoloModel.getter_mUnusedRoutineList (HERE), kENUMERATION_UP) ;
  while (enumerator_4361.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_declaredRoutineMap_4047.getter_hasKey (enumerator_4361.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4361.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 103)), GALGAS_string ("the '").add_operation (enumerator_4361.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4291.getter_hasKey (enumerator_4361.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4361.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 105)), GALGAS_string ("the '").add_operation (enumerator_4361.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = var_usedRoutineSet_3897.getter_hasKey (enumerator_4361.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 106)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4361.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 107)), GALGAS_string ("the '").add_operation (enumerator_4361.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4291.addAssign_operation (enumerator_4361.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 109)) ;
    enumerator_4361.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4889 (var_declaredRoutineMap_4047, kENUMERATION_UP) ;
  while (enumerator_4889.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_usedRoutineSet_3897.getter_hasKey (enumerator_4889.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_and (var_unusedRoutineDeclarationUnicity_4291.getter_hasKey (enumerator_4889.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4889.current_lkey (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 113)), GALGAS_string ("the '").add_operation (enumerator_4889.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)) ;
      }
    }
    enumerator_4889.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedByteDeclarationUnicity_5209 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 117)) ;
  cEnumerator_lstringlist enumerator_5280 (constinArgument_inPiccoloModel.getter_mUnusedRegisterList (HERE), kENUMERATION_UP) ;
  while (enumerator_5280.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_registerTable_2303.getter_hasKey (enumerator_5280.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 119)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5280.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 120)), GALGAS_string ("the '").add_operation (enumerator_5280.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)) ;
      }
    }
    if (kBoolFalse == test_16) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5209.getter_hasKey (enumerator_5280.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 121)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5280.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 122)), GALGAS_string ("the '").add_operation (enumerator_5280.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
        }
      }
      if (kBoolFalse == test_18) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_usedRegisters_2267.getter_hasKey (enumerator_5280.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 123)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5280.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 124)), GALGAS_string ("the '").add_operation (enumerator_5280.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5209.addAssign_operation (enumerator_5280.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 126)) ;
    enumerator_5280.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5784 (var_declaredByteMap_3304, kENUMERATION_UP) ;
  while (enumerator_5784.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_usedRegisters_2267.getter_hasKey (enumerator_5784.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 129)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 129)).operator_and (var_unusedByteDeclarationUnicity_5209.getter_hasKey (enumerator_5784.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 129)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 129)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 129)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5784.current_lkey (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 130)), GALGAS_string ("the '").add_operation (enumerator_5784.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 130)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 130)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 130)) ;
      }
    }
    enumerator_5784.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 134)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations (var_generatedInstructionList_3759, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 135)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 138)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP (var_generatedInstructionList_3759, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 139)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_26) {
      GALGAS_uint var_usedROMsize_6569 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (var_registerTable_2303, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 148)), var_piccoloDeviceModel_1220.getter_mBankCount (SOURCE_FILE ("midrange_semantics.galgas", 149)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 149)), var_generatedInstructionList_3759, var_piccoloDeviceModel_1220.getter_mRomSize (HERE).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 151)), var_actualConfigurationMap_1995, var_listFileContents_1125, var_usedROMsize_6569, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 146)) ;
      }
      GALGAS_string var_contents_6859 ;
      {
      routine_getGeneratedContents (var_contents_6859, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 157)) ;
      }
      GALGAS_string var_destinationFile_6926 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 158)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
      GALGAS_bool joker_7052 ; // Joker input parameter
      var_contents_6859.method_writeToFileWhenDifferentContents (var_destinationFile_6926, joker_7052, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_27) {
          GALGAS_string var_baseName_7139 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 161)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation (var_baseName_7139, var_contents_6859, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
          }
          var_destinationFile_6926 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
          GALGAS_bool joker_7414 ; // Joker input parameter
          var_contents_6859.method_writeToFileWhenDifferentContents (var_destinationFile_6926, joker_7414, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 164)) ;
          {
          routine_get_5F_C_5F_ArrayHeader (var_baseName_7139, var_contents_6859, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 165)) ;
          }
          var_destinationFile_6926 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 166)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 166)) ;
          GALGAS_bool joker_7612 ; // Joker input parameter
          var_contents_6859.method_writeToFileWhenDifferentContents (var_destinationFile_6926, joker_7612, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 167)) ;
        }
      }
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 170)).boolEnum () ;
        if (kBoolTrue == test_28) {
          GALGAS_string var_verboseMessage_7727 = GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1220.getter_mRomSize (HERE).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 171)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 171)).add_operation (GALGAS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 171)) ;
          var_verboseMessage_7727.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_6569.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)) ;
          var_verboseMessage_7727.plusAssign_operation(var_usedROMsize_6569.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)).divide_operation (var_piccoloDeviceModel_1220.getter_mRomSize (HERE).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 173)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)) ;
          cEnumerator_ramBankTable enumerator_7997 (var_ramBank_2998, kENUMERATION_UP) ;
          while (enumerator_7997.hasCurrentObject ()) {
            GALGAS_uint var_bankSize_8023 = enumerator_7997.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_7997.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)) ;
            GALGAS_uint var_usedSize_8084 = enumerator_7997.current_mFirstFreeAddress (HERE).substract_operation (enumerator_7997.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)) ;
            var_verboseMessage_7727.plusAssign_operation(GALGAS_string ("  Bank '").add_operation (enumerator_7997.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).add_operation (GALGAS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)) ;
            var_verboseMessage_7727.plusAssign_operation(var_usedSize_8084.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 178)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 178)) ;
            var_verboseMessage_7727.plusAssign_operation(var_bankSize_8023.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 179)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
            var_verboseMessage_7727.plusAssign_operation(var_usedSize_8084.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 180)).divide_operation (var_bankSize_8023, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 180)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 180)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 180)) ;
            enumerator_7997.gotoNextObject () ;
          }
          inCompiler->printMessage (var_verboseMessage_7727  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 182)) ;
        }
      }
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        test_29 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_29) {
          GALGAS_string var_assemblyCode_8551 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code (var_piccoloDeviceModel_1220.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 188)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 188)), var_piccoloDeviceModel_1220.getter_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 189)), var_registerTable_2303, var_generatedInstructionList_3759, var_actualConfigurationMap_1995, var_assemblyCode_8551, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 187)) ;
          }
          GALGAS_string var_asmDestinationFile_8836 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 195)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 195)) ;
          GALGAS_bool joker_8971 ; // Joker input parameter
          var_assemblyCode_8551.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8836, joker_8971, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 196)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_26) {
    GALGAS_string var_hexDestinationFile_9065 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 199)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 199)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = var_hexDestinationFile_9065.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 200)).boolEnum () ;
      if (kBoolTrue == test_30) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_9065, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 201)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_9255 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 203)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 203)) ;
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_asmDestinationFile_9255.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 204)).boolEnum () ;
      if (kBoolTrue == test_31) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_9255, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 205)) ;
        }
      }
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    test_32 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_string var_listFile_9546 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 210)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 210)) ;
      GALGAS_bool joker_9674 ; // Joker input parameter
      var_listFileContents_1125.method_writeToFileWhenDifferentContents (var_listFile_9546, joker_9674, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 211)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze (const GALGAS_pic_31__38_AST constinArgument_inPiccoloModel,
                                     const GALGAS_string constinArgument_inSourceFileName,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_567 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_567.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 15)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 15)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 16)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_567, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
    }
  }
  GALGAS_string var_listFileContents_919 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1014 ;
  GALGAS_uint var_accessBankSplitOffset_1044 ;
  GALGAS_ramBankTable var_ramBank_1068 ;
  GALGAS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1121 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1329 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1497 ;
  GALGAS_luint var_bootloaderReservedROMsize_1532 ;
  GALGAS_registerTable var_registerTable_1662 ;
  GALGAS_string var_piccoloDeviceName_1690 ;
  switch (constinArgument_inPiccoloModel.getter_mProgramKind (HERE).enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
    {
      var_piccoloDeviceName_1690 = constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (HERE).getter_string (HERE) ;
      {
      routine_parseDeviceDefinition (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 35)), var_piccoloDeviceModel_1014, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel_1014.getter_mProcessorType (SOURCE_FILE ("pic18_semantics.galgas", 36)).enumValue ()) {
      case GALGAS_processorType::kNotBuilt:
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1044 = GALGAS_uint ((uint32_t) 96U) ;
        }
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1044 = GALGAS_uint ((uint32_t) 128U) ;
        }
        break ;
      case GALGAS_processorType::kEnum_midrange:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 39)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 39)), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1044.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_processorType::kEnum_baseline:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 40)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 40)), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset_1044.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1068 = var_piccoloDeviceModel_1014.getter_mRamBankTable (SOURCE_FILE ("pic18_semantics.galgas", 42)) ;
      var_bootloaderReservedRAMmap_1121 = GALGAS_bootloaderReservedRAMmap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 43)) ;
      var_registerTable_1662 = var_piccoloDeviceModel_1014.getter_mRegisterTable (HERE) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 45)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1329 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 46)) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 47)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1497 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 48)) ;
      var_bootloaderReservedROMsize_1532 = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)) ;
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 51)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1497 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 52)) ;
      var_piccoloDeviceModel_1014.drop () ;
      var_piccoloDeviceName_1690.drop () ;
      var_accessBankSplitOffset_1044.drop () ;
      var_ramBank_1068.drop () ;
      var_registerTable_1662.drop () ;
      var_bootloaderReservedRAMmap_1121.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1329.drop () ;
      var_bootloaderReservedROMsize_1532.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 53)), var_piccoloDeviceModel_1014, var_piccoloDeviceName_1690, var_accessBankSplitOffset_1044, var_ramBank_1068, var_registerTable_1662, var_bootloaderReservedRAMmap_1121, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249, var_userRoutineDeclarationListForBootloaderImplementation_1329, var_bootloaderReservedROMsize_1532  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      cEnumerator_ramBankTable enumerator_3678 (var_ramBank_1068, kENUMERATION_UP) ;
      while (enumerator_3678.hasCurrentObject ()) {
        {
        var_ramBank_1068.setter_setMFirstFreeAddressForKey (enumerator_3678.current_mFirstAddress (HERE), enumerator_3678.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 64)) ;
        }
        enumerator_3678.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_userProgram:
    {
      var_piccoloDeviceModel_1014.drop () ;
      var_piccoloDeviceName_1690.drop () ;
      var_accessBankSplitOffset_1044.drop () ;
      var_ramBank_1068.drop () ;
      var_registerTable_1662.drop () ;
      var_bootloaderReservedRAMmap_1121.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1497.drop () ;
      var_bootloaderReservedROMsize_1532.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 67)), var_piccoloDeviceModel_1014, var_piccoloDeviceName_1690, var_accessBankSplitOffset_1044, var_ramBank_1068, var_registerTable_1662, var_bootloaderReservedRAMmap_1121, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416, var_userRoutineDeclarationListForUserProgramImplementation_1497, var_bootloaderReservedROMsize_1532  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 67)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 77)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1329 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 78)) ;
    }
    break ;
  }
  GALGAS_pic_31__38_MacroMap var_macroMap_4535 = GALGAS_pic_31__38_MacroMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 81)) ;
  cEnumerator_pic_31__38_MacroDefinitionList enumerator_4588 (constinArgument_inPiccoloModel.getter_mMacroDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_4588.hasCurrentObject ()) {
    {
    var_macroMap_4535.setter_insertKey (enumerator_4588.current_mMacroName (HERE), enumerator_4588.current_mConstantNameList (HERE), enumerator_4588.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 83)) ;
    }
    enumerator_4588.gotoNextObject () ;
  }
  GALGAS_stringset var_usedRoutineSet_4764 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (HERE), constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), var_macroMap_4535, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249, var_userRoutineDeclarationListForUserProgramImplementation_1497, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 86)) ;
  GALGAS_declaredRoutineMap var_declaredRoutineMap_5050 = GALGAS_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 93)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_5133 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_5133.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5050.setter_insertKey (enumerator_5133.current_mRoutineName (HERE), enumerator_5133.current_mRequiredBank (HERE), enumerator_5133.current_mReturnedBank (HERE), enumerator_5133.current_mPreservesBank (HERE), enumerator_5133.current_mIsNoReturn (HERE), enumerator_5133.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 95)) ;
    }
    enumerator_5133.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_5396 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 105)) ;
  cEnumerator_lstringlist enumerator_5466 (constinArgument_inPiccoloModel.getter_mUnusedRoutineList (HERE), kENUMERATION_UP) ;
  while (enumerator_5466.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5050.getter_hasKey (enumerator_5466.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 107)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 107)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5466.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 108)), GALGAS_string ("the '").add_operation (enumerator_5466.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5396.getter_hasKey (enumerator_5466.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5466.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 110)), GALGAS_string ("the '").add_operation (enumerator_5466.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_usedRoutineSet_4764.getter_hasKey (enumerator_5466.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5466.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 112)), GALGAS_string ("the '").add_operation (enumerator_5466.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5396.addAssign_operation (enumerator_5466.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
    enumerator_5466.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_5980 (var_declaredRoutineMap_5050, kENUMERATION_UP) ;
  while (enumerator_5980.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_usedRoutineSet_4764.getter_hasKey (enumerator_5980.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_and (var_unusedDeclarationUnicity_5396.getter_hasKey (enumerator_5980.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_5980.current_lkey (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 118)), GALGAS_string ("the '").add_operation (enumerator_5980.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)) ;
      }
    }
    enumerator_5980.gotoNextObject () ;
  }
  GALGAS_stringset var_inlinedRoutineSet_6241 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 122)) ;
  cEnumerator_lstringlist enumerator_6312 (constinArgument_inPiccoloModel.getter_mInlinedRoutineList (HERE), kENUMERATION_UP) ;
  while (enumerator_6312.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5050.getter_hasKey (enumerator_6312.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 124)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6312.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 125)), GALGAS_string ("the '").add_operation (enumerator_6312.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_usedRoutineSet_4764.getter_hasKey (enumerator_6312.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6312.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 127)), GALGAS_string ("useless declaration, the '").add_operation (enumerator_6312.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
        }
      }
      if (kBoolFalse == test_14) {
        var_inlinedRoutineSet_6241.addAssign_operation (enumerator_6312.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
      }
    }
    enumerator_6312.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6706 = constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (HERE) ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_6800 = constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE) ;
  {
  routine_pic_31__38_PerformRoutineInline (var_inlinedRoutineSet_6241, var_declaredRoutineMap_5050, var_interruptDefinitionList_6706, var_routineDefinitionList_6800, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 134)) ;
  }
  cEnumerator_checkpicList enumerator_7085 (constinArgument_inPiccoloModel.getter_mCheckpicList (HERE), kENUMERATION_UP) ;
  while (enumerator_7085.hasCurrentObject ()) {
    GALGAS_bool var_found_7104 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7138 (enumerator_7085.current_mValueList (HERE), kENUMERATION_UP) ;
    bool bool_16 = var_found_7104.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
    if (enumerator_7138.hasCurrentObject () && bool_16) {
      while (enumerator_7138.hasCurrentObject () && bool_16) {
        var_found_7104 = GALGAS_bool (kIsEqual, enumerator_7138.current_mValue (HERE).getter_string (HERE).objectCompare (var_piccoloDeviceName_1690)) ;
        enumerator_7138.gotoNextObject () ;
        if (enumerator_7138.hasCurrentObject ()) {
          bool_16 = var_found_7104.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_found_7104.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 146)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7085.current_mErrorLocation (HERE), GALGAS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1690, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)) ;
      }
    }
    enumerator_7085.gotoNextObject () ;
  }
  GALGAS_bool var_hasHighInterrupt_7411 = GALGAS_bool (false) ;
  GALGAS_bool var_highInterruptIsFast_7447 = GALGAS_bool (false) ;
  GALGAS_bool var_hasLowInterrupt_7479 = GALGAS_bool (false) ;
  GALGAS_bool var_lowInterruptIsFast_7514 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7559 (var_interruptDefinitionList_6706, kENUMERATION_UP) ;
  while (enumerator_7559.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 156)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 156)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7559.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 157)), GALGAS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 157)) ;
      }
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsEqual, enumerator_7559.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 159)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        var_highInterruptIsFast_7447 = enumerator_7559.current_mFastReturn (HERE) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7411.boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7559.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 162)), GALGAS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 162)) ;
          }
        }
        var_hasHighInterrupt_7411 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_21) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_7559.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 165)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_lowInterruptIsFast_7514 = enumerator_7559.current_mFastReturn (HERE) ;
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7479.boolEnum () ;
            if (kBoolTrue == test_25) {
              TC_Array <C_FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7559.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 168)), GALGAS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 168)) ;
            }
          }
          var_hasLowInterrupt_7479 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_24) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7559.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 172)), GALGAS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 172)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7447.operator_and (var_lowInterruptIsFast_7514 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7559.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 175)), GALGAS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 175)) ;
      }
    }
    enumerator_7559.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_8562 ;
  enumGalgasBool test_30 = kBoolTrue ;
  if (kBoolTrue == test_30) {
    test_30 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 180)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 180)))).boolEnum () ;
    if (kBoolTrue == test_30) {
      cEnumerator_configDefinitionList enumerator_8685 (constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 181)), kENUMERATION_UP) ;
      while (enumerator_8685.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8685.current_mDefinitionLocation (HERE), GALGAS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 182)) ;
        enumerator_8685.gotoNextObject () ;
      }
      var_actualConfigurationMap_8562 = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
    }
  }
  if (kBoolFalse == test_30) {
    {
    routine_buildConfig (var_piccoloDeviceModel_1014.getter_mConfigRegisterMap (SOURCE_FILE ("pic18_semantics.galgas", 187)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 188)), var_listFileContents_919, var_actualConfigurationMap_8562, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 186)) ;
    }
  }
  GALGAS_uint var_RAMsize_9105 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ramBankTable enumerator_9129 (var_ramBank_1068, kENUMERATION_UP) ;
  while (enumerator_9129.hasCurrentObject ()) {
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      test_32 = GALGAS_bool (kIsStrictSup, enumerator_9129.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9105)).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_RAMsize_9105 = enumerator_9129.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9129.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_9304 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 201)) ;
  {
  var_constantMap_9304.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 203))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 203)), var_piccoloDeviceModel_1014.getter_mRomSize (HERE).getter_uint (HERE).getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 203)) ;
  }
  {
  var_constantMap_9304.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("RAM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 204))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 204)), var_RAMsize_9105.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 204)) ;
  }
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (kIsNotEqual, constinArgument_inPiccoloModel.getter_mProgramKind (HERE).objectCompare (GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("pic18_semantics.galgas", 206)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      GALGAS_lstring var_bootloaderSizeString_9707 = GALGAS_lstring::constructor_new (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 207))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 207)) ;
      {
      var_constantMap_9304.setter_insertKey (var_bootloaderSizeString_9707, var_bootloaderReservedROMsize_1532.getter_uint (SOURCE_FILE ("pic18_semantics.galgas", 208)).getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 208)) ;
      }
    }
  }
  GALGAS_stringset var_usedRegisters_9916 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 211)) ;
  cEnumerator_constantDefinitionList enumerator_9992 (constinArgument_inPiccoloModel.getter_mConstantDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_9992.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_10085 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_9992.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_1014.getter_mRegisterTable (HERE), var_constantMap_9304, var_result_10085, var_usedRegisters_9916, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 213)) ;
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_1014.getter_mRegisterTable (HERE).getter_hasKey (enumerator_9992.current_mConstantName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 214)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 214)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_9992.current_mConstantName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 215)), GALGAS_string ("'").add_operation (enumerator_9992.current_mConstantName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_constantMap_9304.setter_insertKey (enumerator_9992.current_mConstantName (HERE), var_result_10085, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
      }
    }
    enumerator_9992.gotoNextObject () ;
  }
  GALGAS_declaredByteMap var_declaredByteMap_10684 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.getter_mRamDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 223)), var_constantMap_9304, var_usedRegisters_9916, var_ramBank_1068, var_piccoloDeviceModel_1014.getter_mRegisterTable (HERE), var_listFileContents_919, var_registerTable_1662, var_declaredByteMap_10684, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 221)) ;
  }
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    test_36 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 233)).objectCompare (GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 233)))).boolEnum () ;
    if (kBoolTrue == test_36) {
      cEnumerator_ramBankTable enumerator_10904 (var_ramBank_1068, kENUMERATION_UP) ;
      while (enumerator_10904.hasCurrentObject ()) {
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1121.getter_hasKey (enumerator_10904.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 235)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 235)).boolEnum () ;
          if (kBoolTrue == test_37) {
            GALGAS_luint var_bootloaderReservedSize_11008 ;
            var_bootloaderReservedRAMmap_1121.method_searchKey (enumerator_10904.current_lkey (HERE), var_bootloaderReservedSize_11008, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 237)) ;
            enumGalgasBool test_38 = kBoolTrue ;
            if (kBoolTrue == test_38) {
              test_38 = GALGAS_bool (kIsStrictSup, enumerator_10904.current_mFirstFreeAddress (HERE).substract_operation (enumerator_10904.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 238)).objectCompare (var_bootloaderReservedSize_11008.getter_uint (SOURCE_FILE ("pic18_semantics.galgas", 238)))).boolEnum () ;
              if (kBoolTrue == test_38) {
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)), GALGAS_string ("for '").add_operation (enumerator_10904.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)).add_operation (enumerator_10904.current_mFirstFreeAddress (HERE).substract_operation (enumerator_10904.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 240)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 240)).add_operation (var_bootloaderReservedSize_11008.getter_uint (SOURCE_FILE ("pic18_semantics.galgas", 242)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GALGAS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_37) {
          enumGalgasBool test_40 = kBoolTrue ;
          if (kBoolTrue == test_40) {
            test_40 = GALGAS_bool (kIsStrictSup, enumerator_10904.current_mFirstFreeAddress (HERE).objectCompare (enumerator_10904.current_mFirstAddress (HERE))).boolEnum () ;
            if (kBoolTrue == test_40) {
              TC_Array <C_FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 246)), GALGAS_string ("for '").add_operation (enumerator_10904.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 246)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 246)).add_operation (enumerator_10904.current_mFirstFreeAddress (HERE).substract_operation (enumerator_10904.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 247)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 246)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 247)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 246)) ;
            }
          }
        }
        enumerator_10904.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (constinArgument_inSourceFileName, var_piccoloDeviceModel_1014.getter_mRomSize (HERE).getter_uint (HERE).getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 255)), var_macroMap_4535, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249, var_userRoutineDeclarationListForBootloaderImplementation_1329, var_bootloaderReservedROMsize_1532, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416, var_userRoutineDeclarationListForUserProgramImplementation_1497, var_accessBankSplitOffset_1044, var_registerTable_1662, var_declaredByteMap_10684, var_routineDefinitionList_6800, constinArgument_inPiccoloModel.getter_mProgramKind (HERE), var_constantMap_9304, var_usedRegisters_9916, constinArgument_inPiccoloModel.getter_mDataList (HERE), var_interruptDefinitionList_6706, constinArgument_inPiccoloModel.getter_mUnusedRegisterList (HERE), var_ramBank_1068, var_hasHighInterrupt_7411, var_hasLowInterrupt_7479, var_piccoloDeviceModel_1014.getter_mDeviceName (HERE).getter_string (HERE), var_piccoloDeviceModel_1014.getter_mRegisterTable (HERE), var_actualConfigurationMap_8562, constinArgument_inPiccoloModel.getter_mEndOfProgram (HERE), var_listFileContents_919, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 253)) ;
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_42) {
      var_listFileContents_919.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 283)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 283)) ;
      GALGAS_string var_listFile_13013 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 284)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 284)) ;
      GALGAS_bool joker_13141 ; // Joker input parameter
      var_listFileContents_919.method_writeToFileWhenDifferentContents (var_listFile_13013, joker_13141, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'pic18BootloaderSpecificationAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis (const GALGAS_string constinArgument_inSourceFileName,
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
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outListFileContents.drop () ; // Release 'out' argument
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  GALGAS_string var_sourceFileBaseName_747 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_747.objectCompare (constinArgument_inBootloaderName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 21)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inBootloaderName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)), GALGAS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName_747, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
    }
  }
  outArgument_outListFileContents = GALGAS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 27)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.getter_mProcessorType (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 28)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint ((uint32_t) 96U) ;
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint ((uint32_t) 128U) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsSupOrEqual, constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).objectCompare (outArgument_outPiccoloDeviceModel.getter_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReservedRomSize.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)), GALGAS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GALGAS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.getter_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GALGAS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GALGAS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
    }
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GALGAS_string (" bytes.\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.getter_mRamBankTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 46)) ;
  cEnumerator_bootloaderReservedRAMmap enumerator_2515 (constinArgument_inBootloaderReservedRAMmap, kENUMERATION_UP) ;
  while (enumerator_2515.hasCurrentObject ()) {
    GALGAS_uint var_firstAddress_2541 ;
    GALGAS_uint var_firstFreeAddress_2568 ;
    GALGAS_uint var_lastAddressPlusOne_2607 ;
    GALGAS_uintlist var_mirrorOffsetList_2638 ;
    outArgument_outRamBank.method_searchKey (enumerator_2515.current_lkey (HERE), var_firstAddress_2541, var_firstFreeAddress_2568, var_lastAddressPlusOne_2607, var_mirrorOffsetList_2638, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)) ;
    var_firstFreeAddress_2568 = var_firstFreeAddress_2568.add_operation (enumerator_2515.current_mReservedSize (HERE).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 53)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress_2568.objectCompare (var_lastAddressPlusOne_2607)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2515.current_mReservedSize (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), GALGAS_string ("reserved size is greater than size of '").add_operation (enumerator_2515.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_lastAddressPlusOne_2607.substract_operation (var_firstAddress_2541, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2568, enumerator_2515.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 58)) ;
      }
      outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_2515.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (enumerator_2515.current_mReservedSize (HERE).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (var_firstAddress_2541.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (var_firstFreeAddress_2568.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GALGAS_string (").\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)) ;
    }
    enumerator_2515.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)) ;
  GALGAS_stringset var_routineNameSet_3735 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
  GALGAS_uint var_entryPointAddress_3784 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_3838 (constinArgument_inBootloaderRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3838.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_routineNameSet_3735.getter_hasKey (enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3838.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)), GALGAS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
      }
    }
    var_routineNameSet_3735.addAssign_operation (enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (var_entryPointAddress_3784.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)) ;
    var_entryPointAddress_3784 = var_entryPointAddress_3784.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 76)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsEqual, var_entryPointAddress_3784.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_entryPointAddress_3784 = GALGAS_uint ((uint32_t) 12U) ;
      }
    }
    if (kBoolFalse == test_10) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsEqual, var_entryPointAddress_3784.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
        if (kBoolTrue == test_11) {
          var_entryPointAddress_3784 = GALGAS_uint ((uint32_t) 28U) ;
        }
      }
    }
    enumerator_3838.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
  var_entryPointAddress_3784 = constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 89)) ;
  cEnumerator_routineDeclarationList enumerator_4868 (constinArgument_inUserRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_4868.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_routineNameSet_3735.getter_hasKey (enumerator_4868.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4868.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)), GALGAS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
      }
    }
    var_routineNameSet_3735.addAssign_operation (enumerator_4868.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_4868.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (var_entryPointAddress_3784.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)) ;
    var_entryPointAddress_3784 = var_entryPointAddress_3784.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 96)) ;
    enumerator_4868.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 98)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.getter_mRegisterTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 100)) ;
  GALGAS_stringset joker_5456 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 105)) ;
  {
  GALGAS_declaredByteMap joker_5573 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 104)), joker_5456, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.getter_mRegisterTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 107)), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5573, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 101)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 112)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 112)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_switch_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                      const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_switch * object = (const cPtr_pic_31__38_Instruction_5F_switch *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_switch) ;
  GALGAS_caseConstantMap var_caseConstantMap_2325 = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18-switch-instruction.galgas", 61)) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = object ;
  GALGAS_lstring var_exitLabel_2382 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), temp_0.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 64)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_2538 = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence_2617 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_2655 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_2696 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 71)) ;
  GALGAS_bool var_finalBankSettingDefined_2745 = GALGAS_bool (false) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = object ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2786 (temp_1.getter_mCaseList (HERE), kENUMERATION_UP) ;
  while (enumerator_2786.hasCurrentObject ()) {
    const GALGAS_pic_31__38_Instruction_5F_switch temp_2 = object ;
    GALGAS_lstring var_conditionTrueLabel_2829 = GALGAS_lstring::constructor_new (GALGAS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), temp_2.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_2982 (enumerator_2786.current_mCaseExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_2982.hasCurrentObject ()) {
      GALGAS_string var_conditionLabel_3010 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 79)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 80)) ;
      callExtensionMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_2982.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_2829, var_conditionLabel_3010, ioArgument_ioUsedRegisters, var_caseConstantMap_2325, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2538, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 81)) ;
      enumerator_2982.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_3457 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_2829 ;
    GALGAS_uint var_branchFinalBank_3536 = var_initialBankSetting_2655 ;
    {
    routine_analyzeInstructionList (enumerator_2786.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3536, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 98)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_continuesInSequence_2617 = GALGAS_bool (true) ;
        const GALGAS_pic_31__38_Instruction_5F_switch temp_4 = object ;
        ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_4.getter_mInstructionLocation (HERE), var_exitLabel_2382, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 122))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 122)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 123)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118)) ;
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2745.boolEnum () ;
      if (kBoolTrue == test_5) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2696.objectCompare (var_branchFinalBank_3536)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_branchFinalBank_3536.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = var_branchFinalBank_3536.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)) ;
            }
            GALGAS_string temp_9 ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_finalBankSetting_2696.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              temp_9 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_10) {
              temp_9 = var_finalBankSetting_2696.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)) ;
            }
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_2786.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 131)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)), fixItArray11  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_5) {
      var_finalBankSettingDefined_2745 = GALGAS_bool (true) ;
      var_finalBankSetting_2696 = var_branchFinalBank_3536 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 139)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3457 ;
    enumerator_2786.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_5081 = var_initialBankSetting_2655 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_12 = object ;
  routine_analyzeInstructionList (temp_12.getter_mElseInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5081, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 144)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_5534 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5534.boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_14 = object ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_14.getter_mInstructionLocation (HERE), var_exitLabel_2382, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 168))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 168)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 169)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 173)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2696.objectCompare (var_branchFinalBank_5081)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_16 = object ;
      GALGAS_string temp_17 ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, var_branchFinalBank_5081.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_18) {
        temp_17 = var_branchFinalBank_5081.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)) ;
      }
      GALGAS_string temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, var_finalBankSetting_2696.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_20) {
        temp_19 = var_finalBankSetting_2696.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)) ;
      }
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_16.getter_mElseBranchStartLocation (HERE), GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 178)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)), fixItArray21  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)) ;
    }
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_2696 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_continuesInSequence_2617.boolEnum () ;
    if (kBoolTrue == test_22) {
      ioArgument_ioBlockLabel = var_exitLabel_2382 ;
    }
  }
  if (kBoolFalse == test_22) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18-switch-instruction.galgas", 187)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_switch_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                               const GALGAS_string constinArgument_inIndexForLabels,
                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                               GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                               GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                               GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                               GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_SimpleConstantCaseItem * object = (const cPtr_pic_31__38_SimpleConstantCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_SimpleConstantCaseItem) ;
  GALGAS_sint_36__34_ var_result_7899 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mCaseExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_7899, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 225)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_7899.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_7899.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 227)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mCaseExpressionLocation (HERE), GALGAS_string ("case value is evaluated as ").add_operation (var_result_7899.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_7899.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mCaseExpressionLocation (HERE), GALGAS_string ("the '").add_operation (var_result_7899.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)) ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_7899.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), GALGAS_string ("the '").add_operation (var_result_7899.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_pic_31__38_SimpleConstantCaseItem temp_8 = object ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (var_result_7899.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), temp_8.getter_mCaseExpressionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)) ;
    }
  }
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_9 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.getter_mCaseExpressionLocation (HERE), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_7899, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 243)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_7899 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_10 = object ;
  GALGAS_lstring var_conditionFalseLabel_8856 = GALGAS_lstring::constructor_new (GALGAS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)), temp_10.getter_mCaseExpressionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)) ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_11 = object ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_9036 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_11.getter_mCaseExpressionLocation (HERE), GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas", 252)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 254)), var_conditionFalseLabel_8856, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 256))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 250)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9036, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 263)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 266)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_8856 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                         const GALGAS_string constinArgument_inIndexForLabels,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                         GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                         GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_IntervalCaseItem * object = (const cPtr_pic_31__38_IntervalCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_IntervalCaseItem) ;
  GALGAS_sint_36__34_ var_minBound_10142 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mMinExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10142, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 284)) ;
  GALGAS_sint_36__34_ var_maxBound_10243 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mMaxExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10243, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 285)) ;
  GALGAS_bool var_ok_10276 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_minBound_10142.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound_10142.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 288)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mCaseExpressionLocation (HERE), GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_10142.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)) ;
      var_ok_10276 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictSup, var_maxBound_10243.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound_10243.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mCaseExpressionLocation (HERE), GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_10243.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)) ;
      var_ok_10276 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsInfOrEqual, var_maxBound_10243.objectCompare (var_minBound_10142)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.getter_mCaseExpressionLocation (HERE), GALGAS_string ("max bound (").add_operation (var_maxBound_10243.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (var_minBound_10142.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)) ;
      var_ok_10276 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (kIsEqual, var_maxBound_10243.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_and (GALGAS_bool (kIsEqual, var_minBound_10142.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 299)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_IntervalCaseItem temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.getter_mCaseExpressionLocation (HERE), GALGAS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 300)) ;
        var_ok_10276 = GALGAS_bool (false) ;
      }
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_ok_10276.boolEnum () ;
    if (kBoolTrue == test_14) {
      cEnumerator_range enumerator_11081 (GALGAS_range::constructor_new (var_minBound_10142.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), var_maxBound_10243.substract_operation (var_minBound_10142, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), kENUMERATION_UP) ;
      while (enumerator_11081.hasCurrentObject ()) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11081.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_pic_31__38_IntervalCaseItem temp_16 = object ;
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.getter_mCaseExpressionLocation (HERE), GALGAS_string ("the '").add_operation (enumerator_11081.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)) ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11081.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), GALGAS_string ("the '").add_operation (enumerator_11081.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)) ;
          }
        }
        if (kBoolFalse == test_15) {
          {
          const GALGAS_pic_31__38_IntervalCaseItem temp_19 = object ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_11081.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), temp_19.getter_mCaseExpressionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)) ;
          }
        }
        enumerator_11081.gotoNextObject () ;
      }
      const GALGAS_pic_31__38_IntervalCaseItem temp_20 = object ;
      GALGAS_lstring var_firstConditionAcceptedLabel_11529 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)), temp_20.getter_mCaseExpressionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_21 = object ;
      GALGAS_lstring var_firstConditionRejectedLabel_11655 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)), temp_21.getter_mCaseExpressionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_22 = object ;
      GALGAS_lstring var_intervalRejectedLabel_11775 = GALGAS_lstring::constructor_new (GALGAS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)), temp_22.getter_mCaseExpressionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_23 = object ;
      GALGAS_ipic_31__38_SequentialInstruction var_secondTestInstruction_11961 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_23.getter_mCaseExpressionLocation (HERE), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 320)), var_maxBound_10243.substract_operation (var_minBound_10142, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 318)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_24 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_24.getter_mCaseExpressionLocation (HERE), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 326)), ioArgument_ioLastComparisonValue.add_operation (GALGAS_sint_36__34_ ((int64_t) 255LL), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).substract_operation (var_maxBound_10243, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 329)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_25 = object ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_12490 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_25.getter_mCaseExpressionLocation (HERE), GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 334)), var_firstConditionAcceptedLabel_11529, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 336)), var_firstConditionRejectedLabel_11655, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 338))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 332)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12490, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 346)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_26 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      temp_26.addAssign_operation (var_secondTestInstruction_11961, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_27 = object ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 351)), var_firstConditionRejectedLabel_11655, temp_26, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_27.getter_mCaseExpressionLocation (HERE), var_intervalRejectedLabel_11775, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 354))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 354)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 355)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_28 = object ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__13290 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_28.getter_mCaseExpressionLocation (HERE), GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 361)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 363)), var_intervalRejectedLabel_11775, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 365))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 359)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_29 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      temp_29.addAssign_operation (var_secondTestInstruction_11961, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 369)), var_firstConditionAcceptedLabel_11529, temp_29, var_t_32__13290, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 373)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368)) ;
      ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 377)) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11775 ;
      ioArgument_ioLastComparisonValue = var_minBound_10142 ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_switch * object = (const cPtr_pic_31__38_Instruction_5F_switch *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_switch) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = object ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14137 (temp_0.getter_mCaseList (HERE), kENUMERATION_UP) ;
  while (enumerator_14137.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_14137.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 391)) ;
    }
    enumerator_14137.gotoNextObject () ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_1.getter_mElseInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 393)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBCC'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool function_pic_31__38__5F_checkBCC (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                              const GALGAS_lstring & constinArgument_inTargetLabel,
                                              const GALGAS_uint & constinArgument_inCurrentAddress,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress_15670 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_15670, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)) ;
  GALGAS_sint var_displacement_15696 = var_targetAddress_15670.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_15696.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_15696.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)) ;
//---
  return result_outDisplacementOK ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBCC [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBCC (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBCC ("pic18_checkBCC",
                                                                         functionWithGenericHeader_pic_31__38__5F_checkBCC,
                                                                         & kTypeDescriptor_GALGAS_bool,
                                                                         3,
                                                                         functionArgs_pic_31__38__5F_checkBCC) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBRA_RCALL'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                       const GALGAS_lstring & constinArgument_inTargetLabel,
                                                       const GALGAS_uint & constinArgument_inCurrentAddress,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress_16193 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_16193, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)) ;
  GALGAS_sint var_displacement_16219 = var_targetAddress_16193.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_16219.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_16219.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)) ;
//---
  return result_outDisplacementOK ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBRA_5F_RCALL [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBRA_5F_RCALL ("pic18_checkBRA_RCALL",
                                                                                  functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL,
                                                                                  & kTypeDescriptor_GALGAS_bool,
                                                                                  3,
                                                                                  functionArgs_pic_31__38__5F_checkBRA_5F_RCALL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_RCALL_displacement'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                                  const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                  const GALGAS_uint & constinArgument_inCurrentAddress,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_outDisplacement ; // Returned variable
  GALGAS_uint var_targetAddress_16683 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_16683, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)) ;
  result_outDisplacement = var_targetAddress_16683.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)) ;
//---
  return result_outDisplacement ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_RCALL_5F_displacement ("pic18_BRA_RCALL_displacement",
                                                                                             functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement,
                                                                                             & kTypeDescriptor_GALGAS_sint,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_Bcc_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inConditionalBranchInstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    const GALGAS_conditional_5F_branch & constinArgument_inConditionalBranch,
                                                                    const GALGAS_bool & constinArgument_inComplemented,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_17226 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_17226.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_17226.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 521)), GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 521)) ;
    }
  }
  GALGAS_conditional_5F_branch var_conditionalBranch_17521 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inComplemented.boolEnum () ;
    if (kBoolTrue == test_2) {
      switch (constinArgument_inConditionalBranch.enumValue ()) {
      case GALGAS_conditional_5F_branch::kNotBuilt:
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bz:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 527)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnz:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bn:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnn:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bc:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 531)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnc:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 532)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bov:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 533)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnov:
        {
          var_conditionalBranch_17521 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 534)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    var_conditionalBranch_17521 = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode_18146 ;
  GALGAS_string var_mnemonic_18165 ;
  switch (var_conditionalBranch_17521.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 57344U) ;
      var_mnemonic_18165 = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 57600U) ;
      var_mnemonic_18165 = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 58880U) ;
      var_mnemonic_18165 = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 59136U) ;
      var_mnemonic_18165 = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 57856U) ;
      var_mnemonic_18165 = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 58112U) ;
      var_mnemonic_18165 = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 58368U) ;
      var_mnemonic_18165 = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode_18146 = GALGAS_uint ((uint32_t) 58624U) ;
      var_mnemonic_18165 = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic_18165, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)), GALGAS_uintlist::constructor_listWithValue (var_baseCode_18146.operator_or (var_displacement_17226.operator_and (GALGAS_sint ((int32_t) 255L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)) ;
//---
  return result_outCode ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code [6] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_conditional_5F_branch,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_Bcc_5F_instruction_5F_code ("pic18_Bcc_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           5,
                                                                                           functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_RCALL_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                      const GALGAS_uint & constinArgument_inTargetAddress,
                                                                      const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_19011 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_19011.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_19011.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_19011.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 55296U).operator_or (var_displacement_19011.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 569)) ;
//---
  return result_outCode ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_RCALL_5F_instruction_5F_code ("pic18_RCALL_instruction_code",
                                                                                             functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code,
                                                                                             & kTypeDescriptor_GALGAS_codeList,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_19749 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_19749.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_19749.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_19749.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 53248U).operator_or (var_displacement_19749.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 586)) ;
//---
  return result_outCode ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_instruction_5F_code ("pic18_BRA_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           3,
                                                                                           functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_CALL_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode_20437 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 597)) ;
  var_binaryCode_20437.addAssign_operation (GALGAS_uint ((uint32_t) 60416U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) ;
  var_binaryCode_20437.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 601)), var_binaryCode_20437  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 600)) ;
//---
  return result_outCode ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_CALL_5F_instruction_5F_code ("pic18_CALL_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_GOTO_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode_20871 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 611)) ;
  var_binaryCode_20871.addAssign_operation (GALGAS_uint ((uint32_t) 61184U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) ;
  var_binaryCode_20871.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 615)), var_binaryCode_20871  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 614)) ;
//---
  return result_outCode ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_GOTO_5F_instruction_5F_code ("pic18_GOTO_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_definition_label'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_definition_5F_label (const GALGAS_lstring & constinArgument_inTargetLabel,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  result_outCode = GALGAS_codeList::constructor_listWithValue (constinArgument_inTargetLabel.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 625)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 624)) ;
//---
  return result_outCode ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_definition_5F_label [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_definition_5F_label (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_definition_5F_label ("pic18_definition_label",
                                                                                    functionWithGenericHeader_pic_31__38__5F_definition_5F_label,
                                                                                    & kTypeDescriptor_GALGAS_codeList,
                                                                                    1,
                                                                                    functionArgs_pic_31__38__5F_definition_5F_label) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETURN") ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ReturnTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ReturnTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                 const GALGAS_uint /* constinArgument_inAddress */,
                                                                                 const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RETURN"), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 18U)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  result_outResult = GALGAS_string ("RETFIE") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_RetfieTerminator temp_1 = object ;
    test_0 = temp_1.getter_mFastReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_RetfieTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_RetfieTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                 const GALGAS_uint /* constinArgument_inAddress */,
                                                                                 const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                 const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = object ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_1 = object ;
  GALGAS_uint temp_2 ;
  const enumGalgasBool test_3 = temp_1.getter_mFastReturn (HERE).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 17U) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 16U) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GALGAS_uintlist::constructor_listWithValue (temp_2  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = object ;
  result_outResult = GALGAS_string ("RETLW ").add_operation (temp_0.getter_mLiteralValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_RetlwTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                               const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_RetlwTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                const GALGAS_uint /* constinArgument_inAddress */,
                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = object ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_1 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 3072U).operator_or (temp_1.getter_mLiteralValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_RetlwTerminator var_t_4553 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (NULL == var_t_4553.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_RetlwTerminator temp_1 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_1.getter_mLiteralValue (HERE).objectCompare (var_t_4553.getter_mLiteralValue (SOURCE_FILE ("ipic18_terminators.galgas", 146)))) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_JumpTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                              const GALGAS_string constinArgument_inNextBlockLabel,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mLabel (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 0U) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    switch (temp_2.getter_mKind (HERE).enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        result_outSize = GALGAS_uint ((uint32_t) 2U) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        result_outSize = GALGAS_uint ((uint32_t) 4U) ;
      }
      break ;
    }
  }
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_JumpTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mLabel (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
      switch (temp_2.getter_mKind (HERE).enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_JumpTerminator temp_4 = object ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.getter_mLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 185)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 185)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_ipic_31__38_JumpTerminator temp_5 = object ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_5.getter_mLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 186)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.getter_mLabel (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = object ;
      switch (temp_3.getter_mKind (HERE).enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
        {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            const GALGAS_ipic_31__38_JumpTerminator temp_5 = object ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.getter_mLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
            if (kBoolTrue == test_4) {
              ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_6 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_7 = object ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_6.getter_mLabel (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_7.getter_mLabel (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_8 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_9 = object ;
              outArgument_outModifiedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_8.getter_mInstructionLocation (HERE), temp_9.getter_mLabel (HERE), GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 210))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 210)) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            const GALGAS_ipic_31__38_JumpTerminator temp_11 = object ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.getter_mLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 213)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 213)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const GALGAS_ipic_31__38_JumpTerminator temp_12 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_13 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_14 = object ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_12.getter_mInstructionLocation (HERE), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_13.getter_mLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)).add_operation (GALGAS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (temp_14.getter_mLabel (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  GALGAS_string var_name_7312 ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = object ;
  switch (temp_0.getter_mKind (HERE).enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      var_name_7312 = GALGAS_string ("JUMP ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_name_7312 = GALGAS_string ("BRA ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_name_7312 = GALGAS_string ("GOTO ") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.getter_mLabel (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = object ;
      result_outResult = GALGAS_string ("(").add_operation (var_name_7312, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (temp_3.getter_mLabel (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_4 = object ;
    result_outResult = var_name_7312.add_operation (temp_4.getter_mLabel (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 237)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mLabel (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_terminators.galgas", 249)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_targetAddress_8034 ;
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.getter_mLabel (HERE), var_targetAddress_8034, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 251)) ;
    const GALGAS_ipic_31__38_JumpTerminator temp_3 = object ;
    switch (temp_3.getter_mKind (HERE).enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_4 = object ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8034, temp_4.getter_mLabel (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 254)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_5 = object ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8034, temp_5.getter_mLabel (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 256)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_JumpTerminator var_t_8751 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (NULL == var_t_8751.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_1.getter_mLabel (HERE).getter_string (HERE).objectCompare (var_t_8751.getter_mLabel (SOURCE_FILE ("ipic18_terminators.galgas", 273)).getter_string (HERE))).operator_and (GALGAS_bool (kIsEqual, temp_2.getter_mKind (HERE).objectCompare (var_t_8751.getter_mKind (SOURCE_FILE ("ipic18_terminators.galgas", 273)))) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 273)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = object ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 288)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                      const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = object ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 301)) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = object ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 308)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 326)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                       extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize (defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  result_outResult = temp_0.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 336)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 336)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
  switch (temp_1.getter_mComparison (HERE).enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      result_outResult.plusAssign_operation(GALGAS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 339)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      result_outResult.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 341)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      result_outResult.plusAssign_operation(GALGAS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 343)) ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" W \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 345)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 347)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                          extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_uint var_n_11798 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_12101 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_12101, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 362)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12390 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12390, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 371)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_11798)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_12101.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_12101.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_12101.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_12101.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 385)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12390.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12390.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12390.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12390.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 386)) ;
      }
    }
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = object ;
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = object ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5, temp_6, temp_7.getter_mRegisterDescription (HERE), temp_8.getter_mComparison (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 383)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                                  extensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_uint var_binCode_13090 ;
  GALGAS_string var_assemblyCode_13113 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  switch (temp_0.getter_mComparison (HERE).enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      var_binCode_13090 = GALGAS_uint ((uint32_t) 25088U) ;
      var_assemblyCode_13113 = GALGAS_string ("    CPFSEQ") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      var_binCode_13090 = GALGAS_uint ((uint32_t) 25600U) ;
      var_assemblyCode_13113 = GALGAS_string ("    CPFSGT") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      var_binCode_13090 = GALGAS_uint ((uint32_t) 24576U) ;
      var_assemblyCode_13113 = GALGAS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
  var_assemblyCode_13113.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = object ;
  var_binCode_13090 = var_binCode_13090.operator_or (temp_2.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 414)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
    test_3 = temp_4.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 415)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_binCode_13090 = var_binCode_13090.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 416)) ;
      var_assemblyCode_13113.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_13113, GALGAS_uintlist::constructor_listWithValue (var_binCode_13090  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 421))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 419)) ;
  GALGAS_codeList var_falseTerminatorCode_13913 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_5 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_13913, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 423)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_13913, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 429)) ;
  GALGAS_codeList var_trueTerminatorCode_14198 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = object ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_14198, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 430)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_14198, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 436)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                               extensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_pic_31__38_RegisterComparisonTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_RegisterComparisonTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 446)) ;
        }
      }
      GALGAS_pic_31__38_RegisterComparisonTerminator var_t_14599 = temp_1 ;
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), var_t_14599.getter_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 447)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), var_t_14599.getter_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 449)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.getter_mComparison (HERE).objectCompare (var_t_14599.getter_mComparison (SOURCE_FILE ("ipic18_terminators.galgas", 452)))) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.getter_mRegisterDescription (HERE), var_t_14599.getter_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 455)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                            extensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 469)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                       extensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_terminatorSize (defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  result_outResult = temp_0.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 479)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 480)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 482)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                          extensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay (defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_uint var_n_16610 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16913 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16913, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 497)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_17202 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_17202, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 506)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_16610)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16913.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16913.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16913.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16913.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 520)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_17202.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_17202.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_17202.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_17202.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 521)) ;
      }
    }
    const GALGAS_pic_31__38_TestRegisterTerminator temp_7 = object ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5, temp_6, temp_7.getter_mRegisterDescription (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 518)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                                  extensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_uint var_binCode_17866 = GALGAS_uint ((uint32_t) 26112U) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  GALGAS_string var_assemblyCode_17898 = GALGAS_string ("    TSTFSZ ").add_operation (temp_0.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 534)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  var_binCode_17866 = var_binCode_17866.operator_or (temp_1.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 535)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = object ;
    test_2 = temp_3.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 536)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_binCode_17866 = var_binCode_17866.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 537)) ;
      var_assemblyCode_17898.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_17898, GALGAS_uintlist::constructor_listWithValue (var_binCode_17866  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 542))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 540)) ;
  GALGAS_codeList var_falseTerminatorCode_18484 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_18484, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 544)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_18484, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 550)) ;
  GALGAS_codeList var_trueTerminatorCode_18769 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_5 = object ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18769, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 551)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_18769, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 557)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                               extensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (defineExtensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_TestRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_pic_31__38_TestRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_TestRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 567)) ;
        }
      }
      GALGAS_pic_31__38_TestRegisterTerminator var_t_19152 = temp_1 ;
      const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), var_t_19152.getter_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 568)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), var_t_19152.getter_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 570)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.getter_mRegisterDescription (HERE), var_t_19152.getter_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 573)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                            extensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator (defineExtensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
  result_outResult = temp_0.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (temp_1.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 589)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                          extensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_BitTestTerminator_terminatorDisplay (defineExtensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                                    const GALGAS_string constinArgument_inBlockLabel,
                                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                    const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                    GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  GALGAS_uint var_n_20709 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_21012 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_21012, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 604)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21301 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21301, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 613)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_20709)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_21012.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_21012.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_21012.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_21012.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 627)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21301.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21301.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21301.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21301.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 628)) ;
      }
    }
    const GALGAS_pic_31__38_BitTestTerminator temp_7 = object ;
    const GALGAS_pic_31__38_BitTestTerminator temp_8 = object ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5, temp_6, temp_7.getter_mRegisterDescription (HERE), temp_8.getter_mBitNumber (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 625)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                                  extensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                 const GALGAS_uint constinArgument_inAddress,
                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                 const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 642)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_binCode_22137 = GALGAS_uint ((uint32_t) 45056U) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = object ;
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
      GALGAS_string var_assemblyCode_22171 = GALGAS_string ("    BTFSC ").add_operation (temp_2.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (temp_3.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
      var_binCode_22137 = var_binCode_22137.operator_or (temp_4.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 646)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_5 = object ;
      var_binCode_22137 = var_binCode_22137.operator_or (temp_5.getter_mBitNumber (HERE).left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_BitTestTerminator temp_7 = object ;
        test_6 = temp_7.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 648)).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_binCode_22137 = var_binCode_22137.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
          var_assemblyCode_22171.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22171, GALGAS_uintlist::constructor_listWithValue (var_binCode_22137  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 654))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 652)) ;
      GALGAS_codeList var_falseTerminatorCode_22800 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_8 = object ;
      callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 656)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22800, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_22800, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_binCode_22938 = GALGAS_uint ((uint32_t) 40960U) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_9 = object ;
    const GALGAS_pic_31__38_BitTestTerminator temp_10 = object ;
    GALGAS_string var_assemblyCode_22972 = GALGAS_string ("    BTFSS ").add_operation (temp_9.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (temp_10.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_11 = object ;
    var_binCode_22938 = var_binCode_22938.operator_or (temp_11.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 666)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_12 = object ;
    var_binCode_22938 = var_binCode_22938.operator_or (temp_12.getter_mBitNumber (HERE).left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_BitTestTerminator temp_14 = object ;
      test_13 = temp_14.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 668)).boolEnum () ;
      if (kBoolTrue == test_13) {
        var_binCode_22938 = var_binCode_22938.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
        var_assemblyCode_22972.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22972, GALGAS_uintlist::constructor_listWithValue (var_binCode_22938  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 674))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 672)) ;
    GALGAS_codeList var_trueTerminatorCode_23585 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_15 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_23585, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 675)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_23585, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 681)) ;
    GALGAS_codeList var_falseTerminatorCode_23898 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_16 = object ;
    const GALGAS_pic_31__38_BitTestTerminator temp_17 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23898, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 682)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_23898, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 688)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                               extensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (defineExtensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_BitTestTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 699)) ;
        }
      }
      GALGAS_pic_31__38_BitTestTerminator var_t_24277 = temp_1 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), var_t_24277.getter_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 700)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), var_t_24277.getter_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 702)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_BitTestTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.getter_mBitNumber (HERE).objectCompare (var_t_24277.getter_mBitNumber (SOURCE_FILE ("ipic18_terminators.galgas", 705)))) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_BitTestTerminator temp_8 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.getter_mRegisterDescription (HERE), var_t_24277.getter_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 708)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                            extensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_BitTestTerminator_isEqualToTerminator (defineExtensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
    test_0 = temp_1.getter_mIncrement (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult = GALGAS_string ("INCF ") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_string ("DECF ") ;
  }
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(temp_2.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 727)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 727)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
    test_3 = temp_4.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_3) {
    result_outResult.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 731)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 733)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 735)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                            GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  GALGAS_uint var_n_26097 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26400 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26400, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 750)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26689 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26689, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 759)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_26097)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26400.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26400.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26400.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26400.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 773)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26689.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26689.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26689.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26689.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 774)) ;
      }
    }
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_7 = object ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = object ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = object ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5, temp_6, temp_7.getter_mRegisterDescription (HERE), temp_8.getter_mIncrement (HERE), temp_9.getter_m_5F_W_5F_isDestination (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 771)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         GALGAS_codeList & outArgument_outCode,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 788)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = temp_2.getter_mIncrement (HERE).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_uint ((uint32_t) 15360U) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_uint ((uint32_t) 11264U) ;
      }
      GALGAS_uint var_binCode_27571 = temp_3 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = object ;
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = temp_5.getter_mIncrement (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("    INCFSZ") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string ("    DECFSZ") ;
      }
      GALGAS_string var_assemblyCode_27654 = temp_6 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = object ;
      var_assemblyCode_27654.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 792)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = object ;
      var_binCode_27571 = var_binCode_27571.operator_or (temp_9.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 793)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_11 = object ;
        test_10 = temp_11.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_assemblyCode_27654.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
        }
      }
      if (kBoolFalse == test_10) {
        var_binCode_27571 = var_binCode_27571.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 797)) ;
        var_assemblyCode_27654.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 798)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_13 = object ;
        test_12 = temp_13.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 800)).boolEnum () ;
        if (kBoolTrue == test_12) {
          var_binCode_27571 = var_binCode_27571.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
          var_assemblyCode_27654.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_27654, GALGAS_uintlist::constructor_listWithValue (var_binCode_27571  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 806))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 804)) ;
      GALGAS_codeList var_falseTerminatorCode_28422 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_14 = object ;
      callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 808)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28422, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_28422, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_15 = object ;
    GALGAS_uint temp_16 ;
    const enumGalgasBool test_17 = temp_15.getter_mIncrement (HERE).boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_uint ((uint32_t) 18432U) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_uint ((uint32_t) 19456U) ;
    }
    GALGAS_uint var_binCode_28560 = temp_16 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_18 = object ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.getter_mIncrement (HERE).boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string ("    INFSNZ") ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string ("    DCFSNZ") ;
    }
    GALGAS_string var_assemblyCode_28643 = temp_19 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_21 = object ;
    var_assemblyCode_28643.plusAssign_operation(GALGAS_string (" ").add_operation (temp_21.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_22 = object ;
    var_binCode_28560 = var_binCode_28560.operator_or (temp_22.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 819)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_24 = object ;
      test_23 = temp_24.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
      if (kBoolTrue == test_23) {
        var_assemblyCode_28643.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
      }
    }
    if (kBoolFalse == test_23) {
      var_binCode_28560 = var_binCode_28560.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 823)) ;
      var_assemblyCode_28643.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_26 = object ;
      test_25 = temp_26.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 826)).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_binCode_28560 = var_binCode_28560.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
        var_assemblyCode_28643.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_28643, GALGAS_uintlist::constructor_listWithValue (var_binCode_28560  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 832))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 830)) ;
    GALGAS_codeList var_trueTerminatorCode_29395 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_27 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_29395, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 833)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_29395, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 839)) ;
    GALGAS_codeList var_falseTerminatorCode_29708 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_28 = object ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_29 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29708, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 840)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_29708, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 846)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 857)) ;
        }
      }
      GALGAS_ipic_31__38_IncDecRegisterTerminator var_t_30111 = temp_1 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), var_t_30111.getter_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 858)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), var_t_30111.getter_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 860)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.getter_mIncrement (HERE).objectCompare (var_t_30111.getter_mIncrement (SOURCE_FILE ("ipic18_terminators.galgas", 863)))) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_8.getter_m_5F_W_5F_isDestination (HERE).objectCompare (var_t_30111.getter_m_5F_W_5F_isDestination (SOURCE_FILE ("ipic18_terminators.galgas", 866)))) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_10 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.getter_mRegisterDescription (HERE), var_t_30111.getter_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 869)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (temp_2.getter_mLiteralValues (HERE).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED RETLW") ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = object ;
  cEnumerator_uintlist enumerator_31505 (temp_0.getter_mLiteralValues (HERE), kENUMERATION_UP) ;
  while (enumerator_31505.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31505.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)) ;
    enumerator_31505.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                           GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
    test_1 = temp_2.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 914)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 914)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 914)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 915)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)) ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_4 = object ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_5 = object ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5.getter_mLiteralValues (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 917)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                  GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 931)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 931)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 931)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 932)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GALGAS_codeList & outArgument_outCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  GALGAS_lstring var_goto_32_label_33269 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 944)) ;
  GALGAS_uint var_targetAddress_33364 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_33269, var_targetAddress_33364, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 945)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33364, var_goto_32_label_33269, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 947)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33364, var_goto_32_label_33269, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 949)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
  cEnumerator_uintlist enumerator_33591 (temp_2.getter_mLiteralValues (HERE), kENUMERATION_UP) ;
  while (enumerator_33591.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GALGAS_string ("    RETLW ").add_operation (enumerator_33591.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 953)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 3072U).operator_or (enumerator_33591.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 952)) ;
    enumerator_33591.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 965)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedRETLWTerminator var_t_34059 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.getter_mLiteralValues (HERE).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 966)).objectCompare (var_t_34059.getter_mLiteralValues (SOURCE_FILE ("ipic18_terminators.galgas", 966)).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 966)))) ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_3 = object ;
      cEnumerator_uintlist enumerator_34222 (temp_3.getter_mLiteralValues (HERE), kENUMERATION_UP) ;
      cEnumerator_uintlist enumerator_34252 (var_t_34059.getter_mLiteralValues (SOURCE_FILE ("ipic18_terminators.galgas", 967)), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_34222.hasCurrentObject () && enumerator_34252.hasCurrentObject () && bool_4) {
        while (enumerator_34222.hasCurrentObject () && enumerator_34252.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_34222.current_mValue (HERE).objectCompare (enumerator_34252.current_mValue (HERE))) ;
          enumerator_34222.gotoNextObject () ;
          enumerator_34252.gotoNextObject () ;
          if (enumerator_34222.hasCurrentObject () && enumerator_34252.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED GOTO ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 984)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult.plusAssign_operation(GALGAS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 986)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
  cEnumerator_lstringlist enumerator_34823 (temp_2.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_34823.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_34823.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 989)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)) ;
    enumerator_34823.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (temp_2.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                          const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
    test_1 = temp_2.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1018)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1018)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1018)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1019)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)).add_operation (GALGAS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)) ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_4 = object ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_5 = object ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5.getter_mTargetLabels (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1021)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1035)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1035)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1035)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1036)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_uint constinArgument_inAddress,
                                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GALGAS_codeList & outArgument_outCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  GALGAS_lstring var_goto_34_label_36898 = GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1048)) ;
  GALGAS_uint var_targetAddress_36993 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36898, var_targetAddress_36993, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1049)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36993, var_goto_34_label_36898, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36993, var_goto_34_label_36898, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1053)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
  cEnumerator_lstringlist enumerator_37219 (temp_2.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_37219.hasCurrentObject ()) {
    GALGAS_uint var_targetLabelAddress_37289 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_37219.current_mValue (HERE), var_targetLabelAddress_37289, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1056)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37289, enumerator_37219.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)) ;
    enumerator_37219.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1068)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedGotoTerminator var_t_37717 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1069)).objectCompare (var_t_37717.getter_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1069)).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1069)))) ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_3 = object ;
      cEnumerator_lstringlist enumerator_37876 (temp_3.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_37905 (var_t_37717.getter_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1070)), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37876.hasCurrentObject () && enumerator_37905.hasCurrentObject () && bool_4) {
        while (enumerator_37876.hasCurrentObject () && enumerator_37905.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_37876.current_mValue (HERE).getter_string (HERE).objectCompare (enumerator_37905.current_mValue (HERE).getter_string (HERE))) ;
          enumerator_37876.gotoNextObject () ;
          enumerator_37905.gotoNextObject () ;
          if (enumerator_37876.hasCurrentObject () && enumerator_37905.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (temp_2.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED BRA") ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = object ;
  cEnumerator_lstringlist enumerator_38710 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_38710.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_38710.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)) ;
    enumerator_38710.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = object ;
  cEnumerator_lstringlist enumerator_39214 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_39214.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_39214.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1115)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1115)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_39214.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)).add_operation (GALGAS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (enumerator_39214.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1117)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1118)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)) ;
      }
    }
    enumerator_39214.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_4 = object ;
  outArgument_outModifiedTerminator = temp_4 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_6 = object ;
    test_5 = temp_6.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1123)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1123)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1123)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1124)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)) ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_8 = object ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_9 = object ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (temp_8.getter_mInstructionLocation (HERE), temp_9.getter_mTargetLabels (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1126)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_uint var_address_40295 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1141)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1141)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1141)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1142)) ;
        }
      }
      var_address_40295 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1144)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_address_40295 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1146)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = object ;
  cEnumerator_lstringlist enumerator_40584 (temp_3.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_40584.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40584.current_mValue (HERE), var_address_40295, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1149)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1149)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, enumerator_40584.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1150)) ;
      }
    }
    var_address_40295 = var_address_40295.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1152)) ;
    enumerator_40584.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_lstring var_goto_32_label_41068 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1163)) ;
  GALGAS_uint var_targetAddress_41163 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_41068, var_targetAddress_41163, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
  GALGAS_uint var_address_41180 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_41163, var_goto_32_label_41068, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1167)) ;
      var_address_41180 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1168)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_41163, var_goto_32_label_41068, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1170)) ;
    var_address_41180 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1171)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
  cEnumerator_lstringlist enumerator_41461 (temp_2.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_41461.hasCurrentObject ()) {
    GALGAS_uint var_labelAddress_41525 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41461.current_mValue (HERE), var_labelAddress_41525, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1174)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_41180, var_labelAddress_41525, enumerator_41461.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)) ;
    var_address_41180 = var_address_41180.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1176)) ;
    enumerator_41461.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedBraTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1187)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedBraTerminator var_t_41978 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1188)).objectCompare (var_t_41978.getter_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1188)).getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1188)))) ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = object ;
      cEnumerator_lstringlist enumerator_42136 (temp_3.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_42165 (var_t_41978.getter_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1189)), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_42136.hasCurrentObject () && enumerator_42165.hasCurrentObject () && bool_4) {
        while (enumerator_42136.hasCurrentObject () && enumerator_42165.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_42136.current_mValue (HERE).getter_string (HERE).objectCompare (enumerator_42165.current_mValue (HERE).getter_string (HERE))) ;
          enumerator_42136.gotoNextObject () ;
          enumerator_42165.gotoNextObject () ;
          if (enumerator_42136.hasCurrentObject () && enumerator_42165.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = object ;
  switch (temp_0.getter_mConditionalBranch (HERE).enumValue ()) {
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
  result_outResult.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1300)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = object ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_3.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
    result_outResult.plusAssign_operation(temp_4.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1304)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1306)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_7.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
    result_outResult.plusAssign_operation(temp_8.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1310)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                             const GALGAS_uint constinArgument_inAddress,
                                                                                                             const GALGAS_string constinArgument_inBlockLabel,
                                                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                             GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = object ;
  GALGAS_conditionalBranchMode var_branchModeOnFalseLabel_48015 = temp_0.getter_mBranchModeOnFalseLabel (HERE) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
  GALGAS_conditionalBranchMode var_branchModeOnTrueLabel_48093 = temp_1.getter_mBranchModeOnTrueLabel (HERE) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = object ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
      switch (temp_4.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1329)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_branchModeOnFalseLabel_48015 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1330)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (temp_7.getter_mTargetLabelWhenFalse (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1331)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1334)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_branchModeOnFalseLabel_48015 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1335)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (temp_10.getter_mTargetLabelWhenFalse (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)) ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_12 = object ;
      test_11 = GALGAS_bool (kIsEqual, temp_12.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = object ;
        switch (temp_13.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = object ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1343)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1343)).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_branchModeOnTrueLabel_48093 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (temp_16.getter_mTargetLabelWhenFalse (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1345)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = object ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1348)).boolEnum () ;
              if (kBoolTrue == test_17) {
                var_branchModeOnTrueLabel_48093 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1349)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = object ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (temp_19.getter_mTargetLabelWhenTrue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1350)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)) ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = object ;
      switch (temp_20.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = object ;
          switch (temp_21.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = object ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1359)).boolEnum () ;
                if (kBoolTrue == test_22) {
                  var_branchModeOnFalseLabel_48015 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1360)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (temp_24.getter_mTargetLabelWhenFalse (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1361)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)) ;
                }
              }
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = object ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1363)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_branchModeOnTrueLabel_48093 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1364)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (temp_27.getter_mTargetLabelWhenTrue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1365)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)) ;
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
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = object ;
          switch (temp_28.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_29 = kBoolTrue ;
              if (kBoolTrue == test_29) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = object ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1372)).boolEnum () ;
                if (kBoolTrue == test_29) {
                  var_branchModeOnTrueLabel_48093 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1373)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (temp_31.getter_mTargetLabelWhenTrue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1374)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)) ;
                }
              }
              enumGalgasBool test_32 = kBoolTrue ;
              if (kBoolTrue == test_32) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = object ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1376)).boolEnum () ;
                if (kBoolTrue == test_32) {
                  var_branchModeOnFalseLabel_48015 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1377)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (temp_34.getter_mTargetLabelWhenFalse (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1378)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = object ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1381)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_branchModeOnFalseLabel_48015 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1382)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (temp_37.getter_mTargetLabelWhenFalse (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)) ;
                }
              }
              enumGalgasBool test_38 = kBoolTrue ;
              if (kBoolTrue == test_38) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = object ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1385)).boolEnum () ;
                if (kBoolTrue == test_38) {
                  var_branchModeOnTrueLabel_48093 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1386)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (temp_40.getter_mTargetLabelWhenTrue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1387)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = object ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1390)).boolEnum () ;
                if (kBoolTrue == test_41) {
                  var_branchModeOnFalseLabel_48015 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1391)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (temp_43.getter_mTargetLabelWhenFalse (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = object ;
          switch (temp_44.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_45 = kBoolTrue ;
              if (kBoolTrue == test_45) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = object ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1398)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1398)).boolEnum () ;
                if (kBoolTrue == test_45) {
                  var_branchModeOnTrueLabel_48093 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1399)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (temp_47.getter_mTargetLabelWhenTrue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_48 = kBoolTrue ;
              if (kBoolTrue == test_48) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_49 = object ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1403)).boolEnum () ;
                if (kBoolTrue == test_48) {
                  var_branchModeOnTrueLabel_48093 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1404)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_50 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (temp_50.getter_mTargetLabelWhenTrue (HERE).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)) ;
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
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_52 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_53 = object ;
    test_51 = GALGAS_bool (kIsEqual, var_branchModeOnFalseLabel_48015.objectCompare (temp_52.getter_mBranchModeOnFalseLabel (HERE))).operator_and (GALGAS_bool (kIsEqual, var_branchModeOnTrueLabel_48093.objectCompare (temp_53.getter_mBranchModeOnTrueLabel (HERE))) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1411)).boolEnum () ;
    if (kBoolTrue == test_51) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_54 = object ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (kBoolFalse == test_51) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_55 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_56 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_57 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_58 = object ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_55.getter_mInstructionLocation (HERE), temp_56.getter_mConditionalBranch (HERE), temp_57.getter_mTargetLabelWhenTrue (HERE), var_branchModeOnTrueLabel_48093, temp_58.getter_mTargetLabelWhenFalse (HERE), var_branchModeOnFalseLabel_48015  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1414)) ;
    ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1421)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                                    const GALGAS_string constinArgument_inBlockLabel,
                                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                    const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                    GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
      switch (temp_2.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
            test_3 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_4.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1436)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1436)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = object ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_5.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1437)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
            test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_7.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1440)).boolEnum () ;
            if (kBoolTrue == test_6) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_8.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1441)) ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
      test_9 = GALGAS_bool (kIsEqual, temp_10.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = object ;
        switch (temp_11.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = object ;
              test_12 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_13.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1448)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1448)).boolEnum () ;
              if (kBoolTrue == test_12) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = object ;
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_14.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1449)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
              test_15 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_16.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1452)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1452)).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = object ;
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_17.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1453)) ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = object ;
      switch (temp_18.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = object ;
          switch (temp_19.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_20 = kBoolTrue ;
              if (kBoolTrue == test_20) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = object ;
                test_20 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_21.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1462)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1462)).boolEnum () ;
                if (kBoolTrue == test_20) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_22.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1463)) ;
                }
              }
              enumGalgasBool test_23 = kBoolTrue ;
              if (kBoolTrue == test_23) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = object ;
                test_23 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_24.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1465)).boolEnum () ;
                if (kBoolTrue == test_23) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_25.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1466)) ;
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
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = object ;
          switch (temp_26.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = object ;
                test_27 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_28.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1473)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1473)).boolEnum () ;
                if (kBoolTrue == test_27) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_29.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)) ;
                }
              }
              enumGalgasBool test_30 = kBoolTrue ;
              if (kBoolTrue == test_30) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = object ;
                test_30 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_31.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1476)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1476)).boolEnum () ;
                if (kBoolTrue == test_30) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_32.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_33 = kBoolTrue ;
              if (kBoolTrue == test_33) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = object ;
                test_33 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_34.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1480)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1480)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1480)).boolEnum () ;
                if (kBoolTrue == test_33) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_35.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)) ;
                }
              }
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = object ;
                test_36 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_37.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1483)).boolEnum () ;
                if (kBoolTrue == test_36) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_38.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1484)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_39 = kBoolTrue ;
              if (kBoolTrue == test_39) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = object ;
                test_39 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_40.getter_mTargetLabelWhenFalse (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1487)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1487)).boolEnum () ;
                if (kBoolTrue == test_39) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_41.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1488)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = object ;
          switch (temp_42.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_43 = kBoolTrue ;
              if (kBoolTrue == test_43) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = object ;
                test_43 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_44.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1494)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1494)).boolEnum () ;
                if (kBoolTrue == test_43) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_45.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1495)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_46 = kBoolTrue ;
              if (kBoolTrue == test_46) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = object ;
                test_46 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_47.getter_mTargetLabelWhenTrue (HERE), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1498)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1498)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1498)).boolEnum () ;
                if (kBoolTrue == test_46) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_48.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1499)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
      switch (temp_2.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          result_outSize = GALGAS_uint ((uint32_t) 2U) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          result_outSize = GALGAS_uint ((uint32_t) 4U) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          result_outSize = GALGAS_uint ((uint32_t) 6U) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
      test_3 = GALGAS_bool (kIsEqual, temp_4.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = object ;
        switch (temp_5.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            result_outSize = GALGAS_uint ((uint32_t) 2U) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            result_outSize = GALGAS_uint ((uint32_t) 4U) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            result_outSize = GALGAS_uint ((uint32_t) 6U) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
      switch (temp_6.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
          switch (temp_7.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint ((uint32_t) 4U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
          switch (temp_8.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint ((uint32_t) 4U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint ((uint32_t) 8U) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
          switch (temp_9.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint ((uint32_t) 8U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint ((uint32_t) 10U) ;
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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          GALGAS_codeList & outArgument_outCode,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  GALGAS_uint var_trueTargetAddress_59030 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.getter_mTargetLabelWhenTrue (HERE), var_trueTargetAddress_59030, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1554)) ;
  GALGAS_uint var_falseTargetAddress_59116 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.getter_mTargetLabelWhenFalse (HERE), var_falseTargetAddress_59116, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1555)) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
  GALGAS_lstring var_Zlabel_59130 = GALGAS_lstring::constructor_new (GALGAS_string ("_Bcc_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1556)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)), temp_2.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = object ;
      switch (temp_5.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59116, temp_6.getter_mTargetLabelWhenFalse (HERE), temp_7.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)), var_Zlabel_59130, temp_8.getter_mConditionalBranch (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), var_falseTargetAddress_59116, temp_9.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1566)), var_Zlabel_59130, temp_10.getter_mConditionalBranch (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1566)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = object ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59116, temp_11.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = object ;
      test_12 = GALGAS_bool (kIsEqual, temp_13.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE).objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = object ;
        switch (temp_14.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = object ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59030, temp_15.getter_mTargetLabelWhenTrue (HERE), temp_16.getter_mConditionalBranch (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = object ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)), var_Zlabel_59130, temp_17.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = object ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), var_trueTargetAddress_59030, temp_18.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = object ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1579)), var_Zlabel_59130, temp_19.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1579)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = object ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59030, temp_20.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1581)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1581)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = object ;
      switch (temp_21.getter_mBranchModeOnFalseLabel (HERE).enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = object ;
          switch (temp_22.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59116, temp_23.getter_mTargetLabelWhenFalse (HERE), temp_24.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), var_trueTargetAddress_59030, temp_25.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59116, temp_26.getter_mTargetLabelWhenFalse (HERE), temp_27.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1591)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59030, temp_28.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = object ;
          switch (temp_29.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59030, temp_30.getter_mTargetLabelWhenTrue (HERE), temp_31.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), var_falseTargetAddress_59116, temp_32.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)), var_Zlabel_59130, temp_33.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), var_falseTargetAddress_59116, temp_34.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59030, temp_35.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)), var_Zlabel_59130, temp_36.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)), var_falseTargetAddress_59116, temp_37.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59030, temp_38.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = object ;
          switch (temp_39.getter_mBranchModeOnTrueLabel (HERE).enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59030, temp_40.getter_mTargetLabelWhenTrue (HERE), temp_41.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59116, temp_42.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1616)), var_Zlabel_59130, temp_43.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1616)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59116, temp_44.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), var_trueTargetAddress_59030, temp_45.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1621)), var_Zlabel_59130, temp_46.getter_mConditionalBranch (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1621)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59116, temp_47.getter_mTargetLabelWhenFalse (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1622)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1622)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59130, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1623)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1623)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59030, temp_48.getter_mTargetLabelWhenTrue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1624)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1624)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1637)) ;
        }
      }
      GALGAS_ipic_31__38_ConditionalJumpTerminator var_t_64374 = temp_1 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.getter_mConditionalBranch (HERE).objectCompare (var_t_64374.getter_mConditionalBranch (SOURCE_FILE ("ipic18_terminators.galgas", 1638)))) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_4.getter_mTargetLabelWhenTrue (HERE).getter_string (HERE).objectCompare (var_t_64374.getter_mTargetLabelWhenTrue (SOURCE_FILE ("ipic18_terminators.galgas", 1640)).getter_string (HERE))) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.getter_mBranchModeOnTrueLabel (HERE).objectCompare (var_t_64374.getter_mBranchModeOnTrueLabel (SOURCE_FILE ("ipic18_terminators.galgas", 1643)))) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_8.getter_mTargetLabelWhenFalse (HERE).getter_string (HERE).objectCompare (var_t_64374.getter_mTargetLabelWhenFalse (SOURCE_FILE ("ipic18_terminators.galgas", 1646)).getter_string (HERE))) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_10.getter_mBranchModeOnFalseLabel (HERE).objectCompare (var_t_64374.getter_mBranchModeOnFalseLabel (SOURCE_FILE ("ipic18_terminators.galgas", 1649)))) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_condition_skip_instruction instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.getter_mEmbeddedInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                        extensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (defineExtensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = object ;
  callExtensionMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 45)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 44)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (void) {
  enterExtensionMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                          extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18InstructionWithNoOperand instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = object ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (extensionGetter_mnemonic (temp_0.getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                           extensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay (defineExtensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18InstructionWithNoOperand generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  GALGAS_uint var_c_2914 ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = object ;
  switch (temp_0.getter_mKind (HERE).enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      var_c_2914 = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      var_c_2914 = GALGAS_uint ((uint32_t) 7U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      var_c_2914 = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      var_c_2914 = GALGAS_uint ((uint32_t) 6U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      var_c_2914 = GALGAS_uint ((uint32_t) 5U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      var_c_2914 = GALGAS_uint ((uint32_t) 255U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      var_c_2914 = GALGAS_uint ((uint32_t) 3U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  temp_2.addAssign_operation (var_c_2914  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (extensionGetter_mnemonic (temp_1.getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                     extensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_InstructionWithNoOperand_generateCode (defineExtensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FDA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_string var_s_3558 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.getter_mInstruction_5F_FDA_5F_base_5F_code (HERE).enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_s_3558 = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_s_3558 = GALGAS_string ("ADDWFC") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_s_3558 = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_s_3558 = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_s_3558 = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_s_3558 = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_s_3558 = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_s_3558 = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_s_3558 = GALGAS_string ("RLCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_s_3558 = GALGAS_string ("RLNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_s_3558 = GALGAS_string ("RRCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_s_3558 = GALGAS_string ("RRNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_s_3558 = GALGAS_string ("SUBFWB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_s_3558 = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_s_3558 = GALGAS_string ("SUBWFB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_s_3558 = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_s_3558 = GALGAS_string ("XORWF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_1 = object ;
  var_s_3558.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_3 = object ;
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = object ;
    test_2 = temp_3.getter_m_5F_W_5F_isDestination (HERE).operator_and (temp_4.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_3558.plusAssign_operation(GALGAS_string (", W, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 146)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = object ;
      test_5 = temp_6.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 147)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_s_3558.plusAssign_operation(GALGAS_string (", F, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 148)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_8 = object ;
        test_7 = temp_8.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_s_3558.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 150)) ;
        }
      }
      if (kBoolFalse == test_7) {
        var_s_3558.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 152)) ;
      }
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_3558  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 154)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FDA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_uint var_code_4784 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.getter_mInstruction_5F_FDA_5F_base_5F_code (HERE).enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 9216U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 8192U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 5120U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 7168U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 1024U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 10240U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 4096U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 20480U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 13312U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 17408U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 12288U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 16384U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 21504U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 23552U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 22528U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 14336U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_code_4784 = GALGAS_uint ((uint32_t) 6144U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = object ;
    test_1 = temp_2.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 185)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_4784 = var_code_4784.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 186)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = object ;
    test_3 = temp_4.getter_m_5F_W_5F_isDestination (HERE).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 188)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_code_4784 = var_code_4784.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_5 = object ;
  var_code_4784 = var_code_4784.operator_or (temp_5.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = object ;
  GALGAS_uintlist temp_7 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  temp_7.addAssign_operation (var_code_4784  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), temp_7  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_string var_s_5976 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = object ;
  switch (temp_0.getter_mFAinstruction (HERE).enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_s_5976 = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_s_5976 = GALGAS_string ("MOVWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_s_5976 = GALGAS_string ("MULWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_s_5976 = GALGAS_string ("NEGF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_s_5976 = GALGAS_string ("SETF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = object ;
  var_s_5976.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_5976  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 214)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_uint var_code_6583 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = object ;
  switch (temp_0.getter_mFAinstruction (HERE).enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_6583 = GALGAS_uint ((uint32_t) 27136U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_6583 = GALGAS_uint ((uint32_t) 28160U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_6583 = GALGAS_uint ((uint32_t) 512U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_6583 = GALGAS_uint ((uint32_t) 27648U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_6583 = GALGAS_uint ((uint32_t) 26624U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_2 = object ;
    test_1 = temp_2.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 233)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_6583 = var_code_6583.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 234)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_3 = object ;
  var_code_6583 = var_code_6583.operator_or (temp_3.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_4 = object ;
  GALGAS_uintlist temp_5 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  temp_5.addAssign_operation (var_code_6583  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), temp_5  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 237)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = object ;
  GALGAS_string var_s_7548 = GALGAS_string ("MOVFF ").add_operation (temp_0.getter_mSourceRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (temp_1.getter_mDestinationRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_7548  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 258)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  GALGAS_uintlist var_code_8055 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 268)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = object ;
  var_code_8055.addAssign_operation (GALGAS_uint ((uint32_t) 49152U).operator_or (temp_0.getter_mSourceRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = object ;
  var_code_8055.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (temp_1.getter_mDestinationRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_2 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), var_code_8055  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_literalOperation instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = object ;
  GALGAS_string var_s_8686 = extensionGetter_mnemonic (temp_0.getter_mLiteralInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (temp_1.getter_mLiteralValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (temp_2.getter_mLiteralValue (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)) ;
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
  temp_3.addAssign_operation (var_s_8686  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
  result_outResult = temp_3 ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_literalOperation generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                          const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                          const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                          GALGAS_codeList & outArgument_outCode,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code_9155 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  switch (temp_0.getter_mLiteralInstruction (HERE).enumValue ()) {
  case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      var_code_9155 = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_9155 = GALGAS_uint ((uint32_t) 2816U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_9155 = GALGAS_uint ((uint32_t) 2304U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_9155 = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW:
    {
      var_code_9155 = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      var_code_9155 = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_9155 = GALGAS_uint ((uint32_t) 2560U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  var_code_9155 = var_code_9155.operator_or (temp_1.getter_mLiteralValue (HERE) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 304)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = object ;
  GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  temp_3.addAssign_operation (var_code_9155  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = object ;
  GALGAS_string var_s_10061 = GALGAS_string ("LFSR ").add_operation (temp_0.getter_mFSRindex (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (temp_1.getter_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_10061  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 325)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_LFSR generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  GALGAS_uintlist var_code_10514 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = object ;
  var_code_10514.addAssign_operation (GALGAS_uint ((uint32_t) 60928U).operator_or (temp_0.getter_mFSRindex (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).left_shift_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).operator_or (temp_1.getter_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_2 = object ;
  var_code_10514.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (temp_2.getter_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_3 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_3.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), var_code_10514  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FBA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = object ;
  GALGAS_string var_s_11082 = extensionGetter_mnemonic (temp_0.getter_mBitOrientedOp (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (temp_2.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_11082  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 351)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FBA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  GALGAS_uint var_code_11579 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = object ;
  switch (temp_0.getter_mBitOrientedOp (HERE).enumValue ()) {
  case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_11579 = GALGAS_uint ((uint32_t) 36864U) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_11579 = GALGAS_uint ((uint32_t) 32768U) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG:
    {
      var_code_11579 = GALGAS_uint ((uint32_t) 28672U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = object ;
    test_1 = temp_2.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 367)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_11579 = var_code_11579.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 368)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_3 = object ;
  var_code_11579 = var_code_11579.operator_or (temp_3.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_4 = object ;
  var_code_11579 = var_code_11579.operator_or (temp_4.getter_mBitNumber (HERE).left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_5 = object ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  temp_6.addAssign_operation (var_code_11579  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVLB instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = object ;
  GALGAS_string var_s_12324 = GALGAS_string ("MOVLB ").add_operation (temp_0.getter_mBankIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)).getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_12324  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 385)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVLB generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = object ;
  GALGAS_uint var_code_12756 = GALGAS_uint ((uint32_t) 256U).operator_or (temp_0.getter_mBankIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  temp_2.addAssign_operation (var_code_12756  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 396)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLRD instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = object ;
  GALGAS_string var_s_13232 = GALGAS_string ("TBLRD ").add_operation (extensionGetter_mnemonic (temp_0.getter_mOption (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_13232  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 409)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  GALGAS_uint var_code_13649 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = object ;
  switch (temp_0.getter_mOption (HERE).enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_13649 = GALGAS_uint ((uint32_t) 8U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_13649 = GALGAS_uint ((uint32_t) 9U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_13649 = GALGAS_uint ((uint32_t) 10U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_13649 = GALGAS_uint ((uint32_t) 11U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  temp_2.addAssign_operation (var_code_13649  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 426)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLWT instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = object ;
  GALGAS_string var_s_14267 = GALGAS_string ("TBLWT ").add_operation (extensionGetter_mnemonic (temp_0.getter_mOption (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_14267  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 439)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  GALGAS_uint var_code_14684 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = object ;
  switch (temp_0.getter_mOption (HERE).enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_14684 = GALGAS_uint ((uint32_t) 12U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_14684 = GALGAS_uint ((uint32_t) 13U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_14684 = GALGAS_uint ((uint32_t) 14U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_14684 = GALGAS_uint ((uint32_t) 15U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  temp_2.addAssign_operation (var_code_14684  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 456)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  result_outSize = temp_0.getter_mOccurrenceFactor (HERE).getter_uint (HERE).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 470)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  GALGAS_string var_s_15514 = GALGAS_string ("MNOP ").add_operation (temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_15514  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 477)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MNOP generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 488)) ;
  GALGAS_uint var_idx_15967 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  if (temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)).isValid ()) {
    uint32_t variant_15978 = temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)).uintValue () ;
    bool loop_15978 = true ;
    while (loop_15978) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = object ;
      loop_15978 = GALGAS_bool (kIsStrictInf, var_idx_15967.objectCompare (temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 491)))).isValid () ;
      if (loop_15978) {
        loop_15978 = GALGAS_bool (kIsStrictInf, var_idx_15967.objectCompare (temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 491)))).boolValue () ;
      }
      if (loop_15978 && (0 == variant_15978)) {
        loop_15978 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)) ;
      }
      if (loop_15978) {
        variant_15978 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        temp_2.addAssign_operation (GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    NOP"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        var_idx_15967.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 494)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = object ;
  result_outSize = temp_0.getter_mOccurrenceFactor (HERE).getter_uint (HERE).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 506)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = object ;
  GALGAS_string var_s_16661 = GALGAS_string ("NOPBRA ").add_operation (temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)) ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  temp_1.addAssign_operation (var_s_16661  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay, NULL) ;

