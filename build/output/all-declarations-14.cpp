#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

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

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 524)) ;
  GALGAS_uint var_idx_17073 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = object ;
  if (temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)).isValid ()) {
    uint32_t variant_17084 = temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)).uintValue () ;
    bool loop_17084 = true ;
    while (loop_17084) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = object ;
      loop_17084 = GALGAS_bool (kIsStrictInf, var_idx_17073.objectCompare (temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 527)))).isValid () ;
      if (loop_17084) {
        loop_17084 = GALGAS_bool (kIsStrictInf, var_idx_17073.objectCompare (temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 527)))).boolValue () ;
      }
      if (loop_17084 && (0 == variant_17084)) {
        loop_17084 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)) ;
      }
      if (loop_17084) {
        variant_17084 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        temp_2.addAssign_operation (GALGAS_uint ((uint32_t) 53248U)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    BRA $+2"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        var_idx_17073.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 530)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = object ;
  GALGAS_string var_s_17541 = GALGAS_string ("MOVLW ((").add_operation (temp_0.getter_mLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (temp_1.getter_mOffset (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (temp_2.getter_mRightShift (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_17541  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 542)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_MOV_LABEL_W generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  GALGAS_uint var_address_18049 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = object ;
  constinArgument_inDataAddressMap.method_searchKey (temp_0.getter_mLabel (HERE), var_address_18049, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 552)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = object ;
  GALGAS_uint var_code_18067 = var_address_18049.add_operation (temp_1.getter_mOffset (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).right_shift_operation (temp_2.getter_mRightShift (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)) ;
  GALGAS_uint var_code_5F_MOVLW_18146 = GALGAS_uint ((uint32_t) 3584U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_3 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_4 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_5 = object ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  temp_6.addAssign_operation (var_code_18067.operator_or (var_code_5F_MOVLW_18146 COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    MOVLW ((_data_").add_operation (temp_3.getter_mLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (temp_4.getter_mOffset (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (temp_5.getter_mRightShift (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 555)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_BLANK instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = object ;
  GALGAS_string var_s_18644 = GALGAS_string ("BLANK ").add_operation (temp_0.getter_mBlankValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_18644  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 568)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_BLANK generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = object ;
  GALGAS_uint var_code_19070 = GALGAS_uint ((uint32_t) 61440U).operator_or (temp_0.getter_mBlankValue (HERE) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 578)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  temp_1.addAssign_operation (var_code_19070  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_19070.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 579)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FNOP instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = object ;
  GALGAS_string var_s_19513 = GALGAS_string ("FNOP ").add_operation (temp_0.getter_mBlankValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_19513  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 592)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FNOP generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = object ;
  GALGAS_uint var_code_19937 = GALGAS_uint ((uint32_t) 61440U).operator_or (temp_0.getter_mBlankValue (HERE) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 602)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  temp_1.addAssign_operation (var_code_19937  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_19937.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 603)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_compare_register instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = object ;
  GALGAS_string var_s_20388 = temp_0.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
  switch (temp_1.getter_mCompareInstruction (HERE).enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_20388.plusAssign_operation(GALGAS_string ("!= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 617)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_20388.plusAssign_operation(GALGAS_string ("<= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 618)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_20388.plusAssign_operation(GALGAS_string (">= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 619)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_20388.plusAssign_operation(GALGAS_string ("!= 0"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 620)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = object ;
  var_s_20388.plusAssign_operation(GALGAS_string (" \? ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_2.getter_mEmbeddedInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_20388  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 623)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                           extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  GALGAS_uint var_code_21035 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = object ;
  switch (temp_0.getter_mCompareInstruction (HERE).enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_code_21035 = GALGAS_uint ((uint32_t) 25088U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_code_21035 = GALGAS_uint ((uint32_t) 25600U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_code_21035 = GALGAS_uint ((uint32_t) 24576U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_code_21035 = GALGAS_uint ((uint32_t) 26112U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = object ;
    test_1 = temp_2.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 641)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_21035 = var_code_21035.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 642)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = object ;
  var_code_21035 = var_code_21035.operator_or (temp_3.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) ;
  GALGAS_string var_s_21377 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = object ;
  switch (temp_4.getter_mCompareInstruction (HERE).enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_21377.plusAssign_operation(GALGAS_string ("CPFSEQ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 648)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_21377.plusAssign_operation(GALGAS_string ("CPFSGT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 649)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_21377.plusAssign_operation(GALGAS_string ("CPFSLT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 650)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_21377.plusAssign_operation(GALGAS_string ("TSTFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 651)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = object ;
  var_s_21377.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_7 = object ;
    test_6 = temp_7.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 654)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_21377.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 655)) ;
    }
  }
  GALGAS_uintlist temp_8 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  temp_8.addAssign_operation (var_code_21035  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s_21377, temp_8  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 658)) ;
  GALGAS_codeList var_c_21869 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_9 = object ;
  callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) temp_9.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 662)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_21869, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 661)) ;
  outArgument_outCode.plusAssign_operation(var_c_21869, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 667)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                     extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                   const GALGAS_uint constinArgument_inAddress,
                                                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                                   GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                                   GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_22341 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_22607 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) temp_1.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 682)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_22607, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 681)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_22341.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = object ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (temp_3.getter_mInstructionLocation (HERE), var_outModifiedEmbeddedInstruction_22607, temp_4.getter_mCompareInstruction (HERE), temp_5.getter_mRegisterDescription (HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 690)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_BitTestSkip instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_string var_s_23194 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.getter_mSkipIfSet (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_23194.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 707)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = object ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = object ;
  var_s_23194.plusAssign_operation(temp_2.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (temp_3.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = object ;
  GALGAS_stringlist var_x_23358 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.getter_mEmbeddedInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 711)) ;
  var_s_23194.plusAssign_operation(var_x_23358.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_23194  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 713)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                           extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint constinArgument_inAddress,
                                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code_23792 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.getter_mSkipIfSet (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_23792 = GALGAS_uint ((uint32_t) 40960U) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_23792 = GALGAS_uint ((uint32_t) 45056U) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = object ;
    test_2 = temp_3.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 729)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_23792 = var_code_23792.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 730)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = object ;
  var_code_23792 = var_code_23792.operator_or (temp_4.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = object ;
  var_code_23792 = var_code_23792.operator_or (temp_5.getter_mBitNumber (HERE).left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) ;
  GALGAS_string var_s_24103 = GALGAS_string ("    ") ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_7 = object ;
    test_6 = temp_7.getter_mSkipIfSet (HERE).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_24103.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 737)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_s_24103.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 739)) ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_8 = object ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_9 = object ;
  var_s_24103.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (temp_9.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)) ;
  GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  temp_10.addAssign_operation (var_code_23792  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s_24103, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) ;
  GALGAS_codeList var_c_24464 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_11 = object ;
  callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) temp_11.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 747)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_24464, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 746)) ;
  outArgument_outCode.plusAssign_operation(var_c_24464, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                     extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                           GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_24931 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_25197 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) temp_1.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 767)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_25197, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 766)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_24931.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = object ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (temp_3.getter_mInstructionLocation (HERE), var_outModifiedEmbeddedInstruction_25197, temp_4.getter_mSkipIfSet (HERE), temp_5.getter_mRegisterDescription (HERE), temp_6.getter_mBitNumber (HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 775)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_FDA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_string var_s_25777 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.getter_mInstruction_5F_FDA_5F_base_5F_code (HERE).enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_s_25777 = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_s_25777 = GALGAS_string ("DCFSNZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_s_25777 = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_s_25777 = GALGAS_string ("INFSNZ") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
  var_s_25777.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = object ;
    test_2 = temp_3.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_25777.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 800)) ;
    }
  }
  var_s_25777.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 802)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = object ;
  GALGAS_stringlist var_x_26084 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.getter_mEmbeddedInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 803)) ;
  var_s_25777.plusAssign_operation(var_x_26084.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_25777  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 805)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_uint var_binCode_26513 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.getter_mInstruction_5F_FDA_5F_base_5F_code (HERE).enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_binCode_26513 = GALGAS_uint ((uint32_t) 11264U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_binCode_26513 = GALGAS_uint ((uint32_t) 19456U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_binCode_26513 = GALGAS_uint ((uint32_t) 15360U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_binCode_26513 = GALGAS_uint ((uint32_t) 18432U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = object ;
    test_1 = temp_2.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 822)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_binCode_26513 = var_binCode_26513.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 823)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = object ;
  var_binCode_26513 = var_binCode_26513.operator_or (temp_3.getter_mRegisterDescription (HERE).getter_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) ;
  GALGAS_string var_assemblyCode_26896 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = object ;
  switch (temp_4.getter_mInstruction_5F_FDA_5F_base_5F_code (HERE).enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_assemblyCode_26896.plusAssign_operation(GALGAS_string ("DECFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 829)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_assemblyCode_26896.plusAssign_operation(GALGAS_string ("DCFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 830)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_assemblyCode_26896.plusAssign_operation(GALGAS_string ("INCFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 831)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_assemblyCode_26896.plusAssign_operation(GALGAS_string ("INFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 832)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = object ;
  var_assemblyCode_26896.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_7 = object ;
    test_6 = temp_7.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_assemblyCode_26896.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 836)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_binCode_26513 = var_binCode_26513.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 838)) ;
    var_assemblyCode_26896.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 839)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_9 = object ;
    test_8 = temp_9.getter_mRegisterDescription (HERE).getter_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 841)).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_binCode_26513 = var_binCode_26513.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)) ;
      var_assemblyCode_26896.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 843)) ;
    }
  }
  GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  temp_10.addAssign_operation (var_binCode_26513  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_26896, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)) ;
  GALGAS_codeList var_c_27635 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_11 = object ;
  callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) temp_11.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 850)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_27635, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 849)) ;
  outArgument_outCode.plusAssign_operation(var_c_27635, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 855)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                   const GALGAS_uint constinArgument_inAddress,
                                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                   GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                   GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_28094 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_28360 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) temp_1.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 870)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_28360, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 869)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_28094.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = object ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (temp_3.getter_mInstructionLocation (HERE), var_outModifiedEmbeddedInstruction_28360, temp_4.getter_mInstruction_5F_FDA_5F_base_5F_code (HERE), temp_5.getter_mRegisterDescription (HERE), temp_6.getter_m_5F_W_5F_isDestination (HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 878)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  switch (temp_0.getter_mKind (HERE).enumValue ()) {
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
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                   const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  switch (temp_0.getter_mKind (HERE).enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = object ;
        test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_2.getter_mTargetLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_3.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (void) {
  enterExtensionMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                          extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                            GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = object ;
  switch (temp_1.getter_mKind (HERE).enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_3.getter_mTargetLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 932)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_5 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (temp_4.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (temp_5.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_6 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = object ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (temp_6.getter_mInstructionLocation (HERE), temp_7.getter_mTargetLabel (HERE), GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 934))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 934)) ;
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_9 = object ;
        test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.getter_mTargetLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_11 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_10.getter_mInstructionLocation (HERE), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_11.getter_mTargetLabel (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)).add_operation (GALGAS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).add_operation (temp_12.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_string var_s_30996 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  switch (temp_0.getter_mKind (HERE).enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = object ;
      var_s_30996 = GALGAS_string ("JSR ").add_operation (temp_1.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = object ;
      var_s_30996 = GALGAS_string ("RCALL ").add_operation (temp_2.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
      var_s_30996 = GALGAS_string ("CALL ").add_operation (temp_3.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)) ;
    }
    break ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_30996  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 955)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                              const GALGAS_uint constinArgument_inAddress,
                                                                              const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_uint var_targetAddress_31602 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_targetAddress_31602, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 965)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = object ;
  switch (temp_1.getter_mKind (HERE).enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = object ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_31602, temp_2.getter_mTargetLabel (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 968)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_31602, temp_3.getter_mTargetLabel (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 970)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (temp_2.getter_mTargetInstructions (HERE).getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)).substract_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_string var_s_32514 = GALGAS_string ("COMPUTED ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = object ;
    test_0 = temp_1.getter_mUsesRCALL (HERE).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 994)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_32514.plusAssign_operation(GALGAS_string ("(uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 995)) ;
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_32514  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32672 (temp_2.getter_mTargetInstructions (HERE), kENUMERATION_UP) ;
  while (enumerator_32672.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_32724 (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32672.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 999)), kENUMERATION_UP) ;
    while (enumerator_32724.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GALGAS_string ("   ").add_operation (enumerator_32724.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000)) ;
      enumerator_32724.gotoNextObject () ;
    }
    enumerator_32672.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = object ;
  GALGAS_uint temp_1 ;
  const enumGalgasBool test_2 = temp_0.getter_mUsesRCALL (HERE).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address_33119 = constinArgument_inAddress.add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1012)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_33208 (temp_3.getter_mTargetInstructions (HERE), kENUMERATION_UP) ;
  while (enumerator_33208.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_33208.current_mInstruction (HERE).ptr (), var_address_33119, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
    var_address_33119 = var_address_33119.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1020)) ;
    enumerator_33208.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = object ;
    test_4 = temp_5.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).boolEnum () ;
        if (kBoolTrue == test_6) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1024)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (void) {
  enterExtensionMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                          extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_unusedConversionCount_34046 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_unusedListing_34074 = GALGAS_string::makeEmptyString () ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = object ;
  GALGAS_uint temp_2 ;
  const enumGalgasBool test_3 = temp_1.getter_mUsesRCALL (HERE).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address_34095 = constinArgument_inAddress.add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34184 (temp_4.getter_mTargetInstructions (HERE), kENUMERATION_UP) ;
  while (enumerator_34184.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction joker_34410 ; // Joker input parameter
    callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_34184.current_mInstruction (HERE).ptr (), var_address_34095, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount_34046, var_unusedListing_34074, joker_34410, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1044)) ;
    var_address_34095 = var_address_34095.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
    enumerator_34184.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_6 = object ;
    test_5 = temp_6.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)).add_operation (GALGAS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = object ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (temp_8.getter_mInstructionLocation (HERE), temp_9.getter_mTargetInstructions (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1058)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = object ;
  GALGAS_lstring var_target_35264 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_goto_4"), temp_0.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1073)) ;
  GALGAS_uint var_computetedGoto_34_Address_35399 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_35264, var_computetedGoto_34_Address_35399, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1075)) ;
  GALGAS_uint var_currentInstructionAddress_35435 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = object ;
    test_1 = temp_2.getter_mUsesRCALL (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_currentInstructionAddress_35435 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1079)) ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_35399, var_target_35264, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1080)) ;
    }
  }
  if (kBoolFalse == test_1) {
    var_currentInstructionAddress_35435 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1082)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_35399, var_target_35264, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1083)) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = object ;
  GALGAS_uint var_instructionFollowingComputedRcallAddress_35783 = var_currentInstructionAddress_35435.add_operation (temp_3.getter_mTargetInstructions (HERE).getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).multiply_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = object ;
  GALGAS_lstring var_nextInstructionLabel_35882 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)) ;
  GALGAS_uint var_idx_35975 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_36017 (temp_5.getter_mTargetInstructions (HERE), kENUMERATION_UP) ;
  while (enumerator_36017.hasCurrentObject ()) {
    var_idx_35975.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1089)) ;
    GALGAS_codeList var_instructionCode_36177 ;
    callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_36017.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_35435, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_36177, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
    outArgument_outCode.plusAssign_operation(var_instructionCode_36177, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)) ;
    var_currentInstructionAddress_35435 = var_currentInstructionAddress_35435.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_7 = object ;
      test_6 = GALGAS_bool (kIsStrictInf, var_idx_35975.objectCompare (temp_7.getter_mTargetInstructions (HERE).getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1098)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_35435, var_instructionFollowingComputedRcallAddress_35783, var_nextInstructionLabel_35882, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)) ;
        var_currentInstructionAddress_35435 = var_currentInstructionAddress_35435.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
      }
    }
    enumerator_36017.gotoNextObject () ;
  }
  outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_35882, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                                 const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                    const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.getter_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                          const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                          GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.getter_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                    const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                   const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = object ;
  cEnumerator_lstringlist enumerator_4414 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_4414.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4414.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 151)) ;
    enumerator_4414.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = object ;
  cEnumerator_lstringlist enumerator_4710 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_4710.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4710.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 162)) ;
    enumerator_4710.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = object ;
  cEnumerator_lstringlist enumerator_5007 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_5007.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_5007.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 173)) ;
    enumerator_5007.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.getter_mRepeatedInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 191)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = object ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5623 (temp_1.getter_mWhilePartList (HERE), kENUMERATION_UP) ;
  while (enumerator_5623.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_5623.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 193)) ;
    }
    enumerator_5623.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.getter_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 211)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.getter_mThenInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 220)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_1.getter_mElseInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 221)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_macro addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_macro * object = (const cPtr_pic_31__38_Instruction_5F_macro *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_macro) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_6932 ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_0 = object ;
  GALGAS_lstringlist joker_6910 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (temp_0.getter_mMacroName (HERE), joker_6910, var_instructionList_6932, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 230)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (var_instructionList_6932, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 231)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 264)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                     const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = object ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9689 (temp_0.getter_mBlockList (HERE), kENUMERATION_UP) ;
  while (enumerator_9689.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_9689.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 330)) ;
    }
    enumerator_9689.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10062 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_10062.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_10062.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 342)) ;
    enumerator_10062.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const GALGAS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                              const GALGAS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                              const GALGAS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                              const GALGAS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 356)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_10796 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_10796.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_10796.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 359)) ;
    }
    enumerator_10796.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11036 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_11036.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11036.current_mRoutineName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 367)) ;
    enumerator_11036.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11189 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_11189.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11189.current_mRoutineName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    enumerator_11189.gotoNextObject () ;
  }
  GALGAS_stringset var_s_11293 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 374)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 375)).isValid ()) {
    uint32_t variant_11323 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 375)).uintValue () ;
    bool loop_11323 = true ;
    while (loop_11323) {
      loop_11323 = GALGAS_bool (kIsNotEqual, var_s_11293.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11323) {
        loop_11323 = GALGAS_bool (kIsNotEqual, var_s_11293.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11323 && (0 == variant_11323)) {
        loop_11323 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 375)) ;
      }
      if (loop_11323) {
        variant_11323 -- ;
        var_s_11293 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11457 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_11457.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11457.current_mRoutineName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11457.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 380)) ;
              }
            }
          }
          enumerator_11457.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_block_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                             const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                             const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                             GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  GALGAS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1103 = GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 33)) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = object ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1136 (temp_0.getter_mBlockList (HERE), kENUMERATION_UP) ;
  while (enumerator_1136.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_1342 ;
    {
    routine_performInlineFromInstructionList (enumerator_1136.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1342, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1103.addAssign_operation (enumerator_1136.current_mBlockName (HERE), var_instructionList_1342, enumerator_1136.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1136.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1136.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_1 = object ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_3 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_block::constructor_new (temp_1.getter_mInstructionLocation (HERE), temp_2.getter_mStartBlockName (HERE), var_inlinedBlockList_1103, temp_3.getter_mEndOfBlockInstruction (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                               GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_2168 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.getter_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2168, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_1 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (temp_1.getter_mInstructionLocation (HERE), var_instructionList_2168, temp_2.getter_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                   const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                   const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                   GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_2846 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.getter_mRepeatedInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2846, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList_2870 = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 91)) ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = object ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_2938 (temp_1.getter_mWhilePartList (HERE), kENUMERATION_UP) ;
  while (enumerator_2938.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_3144 ;
    {
    routine_performInlineFromInstructionList (enumerator_2938.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3144, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_2870.addAssign_operation (enumerator_2938.current_mCondition (HERE), var_instructionList_3144, enumerator_2938.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_2938.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_3 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (temp_2.getter_mInstructionLocation (HERE), var_repeatedInstructionList_2846, temp_3.getter_mEndOfRepeatedInstructionList (HERE), var_whilePartList_2870  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_3920 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.getter_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3920, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = object ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_3 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (temp_1.getter_mInstructionLocation (HERE), temp_2.getter_mRegister (HERE), var_instructionList_3920, temp_3.getter_mEndOfSaveBankInstruction (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                        const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                        const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                        GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_4620 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.getter_mThenInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4620, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_4828 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = object ;
  routine_performInlineFromInstructionList (temp_1.getter_mElseInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4828, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = object ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (temp_2.getter_mInstructionLocation (HERE), temp_3.getter_mIfCondition (HERE), var_thenInstructionList_4620, var_elseInstructionList_4828, temp_4.getter_mEndOfElsePartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                           const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                           const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                           GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  GALGAS_bool var_inlineDone_5367 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_1 = object ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = object ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_3 = object ;
    test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (temp_1.getter_mTargetLabel (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (temp_2.getter_mTargetLabel (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (temp_3.getter_mTargetLabel (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_luint var_requiredBank_5658 ;
      GALGAS_bool var_isNoReturn_5750 ;
      GALGAS_pic_31__38_InstructionList var_instructionList_5799 ;
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = object ;
      GALGAS_luint joker_5666 ; // Joker input parameter
      GALGAS_bool joker_5698 ; // Joker input parameter
      constinArgument_inDeclaredRoutineMap.method_searchKey (temp_4.getter_mTargetLabel (HERE), var_requiredBank_5658, joker_5666, joker_5698, var_isNoReturn_5750, var_instructionList_5799, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isNoReturn_5750.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("pic18_routine_inlining.galgas", 179)), GALGAS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray7  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
          var_inlineDone_5367.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_5658.getter_uint (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const GALGAS_pic_31__38_Instruction_5F_JSR temp_9 = object ;
            ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (temp_9.getter_mInstructionLocation (HERE), var_requiredBank_5658.getter_uint (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
          }
        }
        GALGAS_stringset var_currentlyInlinedRoutineSet_6136 = constinArgument_inCurrentlyInlinedRoutineSet ;
        const GALGAS_pic_31__38_Instruction_5F_JSR temp_10 = object ;
        var_currentlyInlinedRoutineSet_6136.addAssign_operation (temp_10.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
        cEnumerator_pic_31__38_InstructionList enumerator_6308 (var_instructionList_5799, kENUMERATION_UP) ;
        while (enumerator_6308.hasCurrentObject ()) {
          callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6308.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6136, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
          enumerator_6308.gotoNextObject () ;
        }
        var_inlineDone_5367 = GALGAS_bool (true) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    var_inlineDone_5367 = GALGAS_bool (false) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_inlineDone_5367.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_12 = object ;
      ioArgument_ioInstructionList.addAssign_operation (temp_12  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                               GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 213)) ;
  cEnumerator_pic_31__38_InstructionList enumerator_7064 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_7064.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_7064.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_7064.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                              GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                              GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7601 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 233)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7683 (ioArgument_ioInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_7683.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_7881 ;
    {
    routine_performInlineFromInstructionList (enumerator_7683.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_7881, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7601.addAssign_operation (enumerator_7683.current_mInterruptName (HERE), enumerator_7683.current_mFastReturn (HERE), var_instructionList_7881, enumerator_7683.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7683.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7601 ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_8123 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 250)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8201 (ioArgument_ioRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_8201.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8399 ;
    {
    routine_performInlineFromInstructionList (enumerator_8201.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8399, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_8123.addAssign_operation (enumerator_8201.current_mRoutineName (HERE), enumerator_8201.current_mRequiredBank (HERE), enumerator_8201.current_mReturnedBank (HERE), enumerator_8201.current_mPreservesBank (HERE), enumerator_8201.current_mIsNoReturn (HERE), var_instructionList_8399, enumerator_8201.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8201.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_8123 ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayBlockList (const GALGAS_string constinArgument_inTitle,
                               GALGAS_string & ioArgument_ioListFileContents,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1391 (constinArgument_inGeneratedBlockList, kENUMERATION_UP) ;
  GALGAS_uint index_1363 ((uint32_t) 0) ;
  while (enumerator_1391.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1433 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, index_1363.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_1433 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1363.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).getter_mLabel (HERE).getter_string (HERE) ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_1433 = GALGAS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1391.current_mBlock (HERE), var_nextBlockLabel_1433, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1391.gotoNextObject () ;
    index_1363.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                              const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                              GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                              const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                              GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                              GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_withNoOperand * object = (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_1 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (temp_0.getter_mInstructionLocation (HERE), temp_1.getter_mKind (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 155)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                    const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                    const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FDA * object = (const cPtr_pic_31__38_Instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FDA) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6673 ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_1 = object ;
  GALGAS_bitSliceTable joker_6679 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.getter_mRegisterExpression (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.getter_m_5F_W_5F_isDestination (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 178)), var_IPICregisterDescription_6673, joker_6679, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 173)) ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_3 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_4 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (temp_2.getter_mInstructionLocation (HERE), temp_3.getter_mInstruction_5F_FDA_5F_base_5F_code (HERE), var_IPICregisterDescription_6673, temp_4.getter_m_5F_W_5F_isDestination (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 183)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                   const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                   const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                   const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                   const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                   GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FA * object = (const cPtr_pic_31__38_Instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FA) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7611 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_0 = object ;
  GALGAS_bitSliceTable joker_7617 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.getter_mRegisterExpression (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_7611, joker_7617, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 203)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7688 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_1 = object ;
  switch (temp_1.getter_mFAinstruction (HERE).enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_7688 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_7688 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_7688 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_7688 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_7688 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 219)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)), GALGAS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)) ;
      var_code_7688.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FA temp_3 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_3.getter_mInstructionLocation (HERE), var_code_7688, var_IPICregisterDescription_7611  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 223)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                      GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_MOVFF * object = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_9011 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) temp_0.getter_mSourceRegisterName (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_sourceIPICregisterDescription_9011, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 241)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9281 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_1 = object ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) temp_1.getter_mDestinationRegisterName (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_destinationIPICregisterDescription_9281, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 248)) ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_2 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_2.getter_mInstructionLocation (HERE), var_sourceIPICregisterDescription_9011, var_destinationIPICregisterDescription_9281  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 255)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                    const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                    const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FBA * object = (const cPtr_pic_31__38_Instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FBA) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10169 ;
  GALGAS_bitSliceTable var_bitSliceTable_10207 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.getter_mRegisterExpression (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_10169, var_bitSliceTable_10207, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 273)) ;
  GALGAS_uint var_bitNumber_10371 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.getter_mBitNumber (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10207, var_bitNumber_10371, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 283)) ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_3 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (temp_2.getter_mInstructionLocation (HERE), temp_3.getter_mBitOrientedOp (HERE), var_IPICregisterDescription_10169, var_bitNumber_10371  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 290)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                                 const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                                 const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                 const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                 GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                 const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                 GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_literalOperation * object = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
  GALGAS_sint_36__34_ var_result_11104 ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mImmediatExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11104, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 309)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_11104.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_11104.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_11104.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_4 = object ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_5 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5.getter_mLiteralInstruction (HERE), var_result_11104.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 315)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                     const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                     const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                     const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                     GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                     const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                     GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_fnop * object = (const cPtr_pic_31__38_Instruction_5F_fnop *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_fnop) ;
  GALGAS_sint_36__34_ var_result_12042 ;
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mImmediatExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12042, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 333)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_12042.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_12042.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_fnop temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_12042.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_4 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (temp_4.getter_mInstructionLocation (HERE), var_result_12042.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 341))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 339)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                     const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                     const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                     const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                     GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                     const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                     GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LFSR * object = (const cPtr_pic_31__38_Instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LFSR) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_LFSR temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_mFSRindex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_2 = object ;
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mFSRindex (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), GALGAS_string ("the LFSR register idx (").add_operation (temp_3.getter_mFSRindex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)) ;
    }
  }
  GALGAS_sint_36__34_ var_result_13088 ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_5 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_5.getter_mImmediatExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13088, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictSup, var_result_13088.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_13088.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mInstructionLocation (HERE), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_13088.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_10 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (temp_9.getter_mInstructionLocation (HERE), temp_10.getter_mFSRindex (HERE), var_result_13088.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 365)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                    const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                    const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                    const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  GALGAS_bool var_isNoReturn_13981 ;
  GALGAS_uint var_requiredBank_14005 ;
  GALGAS_uint var_returnedBank_14029 ;
  GALGAS_bool var_preservesBank_14054 ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_isNoReturn_13981, var_requiredBank_14005, var_returnedBank_14029, var_preservesBank_14054, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_14005.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_14005.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = object ;
      GALGAS_string var_errorMessage_14153 = GALGAS_string ("the routine '").add_operation (temp_2.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (var_requiredBank_14005.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)) ;
      var_errorMessage_14153.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_14153.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_14153.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)), var_errorMessage_14153, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_13981.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)), GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_14054.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 398)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_14029 ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = constinArgument_inShouldPreserveBSR.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_11 = object ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)), GALGAS_string ("the routine call should preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_13 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_15 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (temp_13.getter_mInstructionLocation (HERE), temp_14.getter_mTargetLabel (HERE), temp_15.getter_mKind (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 405)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checkbank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                         const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_checkbank * object = (const cPtr_pic_31__38_Instruction_5F_checkbank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_checkbank) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_checkbank temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_mBankIndex (HERE).objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checkbank temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 455)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_8 = object ;
        test_7 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.getter_mBankIndex (HERE))).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_9 = object ;
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.getter_mInstructionLocation (HERE), GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (temp_10.getter_mBankIndex (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_checkbank temp_12 = object ;
  ioArgument_ioCurrentBank = temp_12.getter_mBankIndex (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checkbank_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checknobank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_checknobank * object = (const cPtr_pic_31__38_Instruction_5F_checknobank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_checknobank) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checknobank temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 484)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checknobank_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18PiccoloSimpleInstruction analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                         const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_PiccoloSimpleInstruction * object = (const cPtr_pic_31__38_PiccoloSimpleInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
  GALGAS_ipic_31__38_SequentialInstruction var_instruction_18784 ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction temp_0 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18784, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 506)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction_18784, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction.mSlotID,
                                extensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_PiccoloSimpleInstruction_analyze (defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.getter_mInstructionLocation (HERE), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 540)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 543)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_19811 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_4 = object ;
  GALGAS_lstring var_loopLabel_19863 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_5 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 551)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_5.getter_mInstructionLocation (HERE), var_loopLabel_19863, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 554)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 555)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 559)) ;
  ioArgument_ioBlockLabel = var_loopLabel_19863 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_6 = object ;
  routine_analyzeInstructionList (temp_6.getter_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 561)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfInstructionList (HERE), GALGAS_string ("\"forever\" instruction list execution is endless"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_10 = object ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_10.getter_mInstructionLocation (HERE), var_loopLabel_19863, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 587)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 588)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19811)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEndOfInstructionList (HERE), GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 594)) ;
    }
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 597)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                         const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_nobanksel * object = (const cPtr_pic_31__38_Instruction_5F_nobanksel *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_nobanksel temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
    }
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 621)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_savebank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
                                                                        const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                        const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  GALGAS_registerExpression var_BSRregister_23142 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23477 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister_23142.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_BSR_5F_IPICregisterDescription_23477, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 650)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23771 ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) temp_0.getter_mRegister (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_save_5F_IPICregisterDescription_23771, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_1.getter_mInstructionLocation (HERE), var_BSR_5F_IPICregisterDescription_23477, var_save_5F_IPICregisterDescription_23771  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 671)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)) ;
  GALGAS_uint var_finalBank_24098 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = object ;
  routine_analyzeInstructionList (temp_2.getter_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24098, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 675)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_savebank temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mEndOfSaveBankInstruction (HERE), GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 694)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_6 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_save_5F_IPICregisterDescription_23771, var_BSR_5F_IPICregisterDescription_23477  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_savebank_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
                                                                                  const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                  const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  GALGAS_sint_36__34_ var_lowerBound_25703 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLowerBoundExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25703, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  GALGAS_sint_36__34_ var_upperBound_25813 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mUpperBoundExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25813, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 726)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_lowerBound_25703.objectCompare (var_upperBound_25813)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("lower bound (").add_operation (var_lowerBound_25703.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (var_upperBound_25813.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_upperBound_25813.substract_operation (var_lowerBound_25703, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mInstructionLocation (HERE), GALGAS_string ("repeat count (").add_operation (var_upperBound_25813.substract_operation (var_lowerBound_25703, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_26250 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_26288 = constinArgument_inConstantMap ;
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = object ;
  var_tempConstantMap_26288.setter_insertKey (temp_8.getter_mConstantName (HERE), var_lowerBound_25703, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = object ;
  routine_analyzeInstructionList (temp_9.getter_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26288, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26250, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.getter_mEndOfInstruction (HERE), GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 756)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_finalBank_26250.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.getter_mEndOfInstruction (HERE), GALGAS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 759)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_27106 = var_lowerBound_25703.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  if (var_upperBound_25813.substract_operation (var_lowerBound_25703, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).isValid ()) {
    uint32_t variant_27130 = var_upperBound_25813.substract_operation (var_lowerBound_25703, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).uintValue () ;
    bool loop_27130 = true ;
    while (loop_27130) {
      GALGAS_bool test_16 = GALGAS_bool (kIsInfOrEqual, var_idx_27106.objectCompare (var_upperBound_25813)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_27130 = test_16.isValid () ;
      if (loop_27130) {
        loop_27130 = test_16.boolValue () ;
      }
      if (loop_27130 && (0 == variant_27130)) {
        loop_27130 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
      }
      if (loop_27130) {
        variant_27130 -- ;
        GALGAS_constantMap var_constantMap_27243 = constinArgument_inConstantMap ;
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = object ;
        var_constantMap_27243.setter_insertKey (temp_17.getter_mConstantName (HERE), var_idx_27106, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = object ;
        routine_analyzeInstructionList (temp_18.getter_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27243, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 766)) ;
        }
        var_idx_27106.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_banksel_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                       const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_banksel * object = (const cPtr_pic_31__38_Instruction_5F_banksel *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_banksel) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 807)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_Instruction_5F_banksel temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mBankIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 809)).objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mBankIndex (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)), GALGAS_string ("selected bank idx should be lower or equal to 15"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 811)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_8 = object ;
      test_7 = GALGAS_bool (kIsNotEqual, temp_8.getter_mBankIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 812)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_9 = object ;
        ioArgument_ioCurrentBank = temp_9.getter_mBankIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 813)) ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_10 = object ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_11 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (temp_10.getter_mInstructionLocation (HERE), temp_11.getter_mBankIndex (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_13 = object ;
        test_12 = temp_13.getter_mWarningOnUselessBanksel (HERE).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_pic_31__38_Instruction_5F_banksel temp_14 = object ;
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (temp_14.getter_mBankIndex (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_banksel_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * object = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
    }
  }
  GALGAS_uint var_registerAddress_30235 ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = object ;
  callExtensionMethod_getRegisterAddress ((const cPtr_registerExpression *) temp_3.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30235, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 842)) ;
  GALGAS_uint var_newBank_30348 = var_registerAddress_30235.right_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30348)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30348 ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = object ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (temp_5.getter_mInstructionLocation (HERE), GALGAS_luint::constructor_new (var_newBank_30348, temp_6.getter_mRegisterExpression (HERE).getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 855)).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 855))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 857)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_8 = object ;
      test_7 = temp_8.getter_mWarningOnUselessBanksel (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (temp_9.getter_mRegisterExpression (HERE).getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_30348.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                      GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_TBLRD * object = (const cPtr_pic_31__38_Instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_1 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (temp_0.getter_mInstructionLocation (HERE), temp_1.getter_mOption (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 877)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                      GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_TBLWT * object = (const cPtr_pic_31__38_Instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_1 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (temp_0.getter_mInstructionLocation (HERE), temp_1.getter_mOption (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 895)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_MNOP_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                    const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_MNOP * object = (const cPtr_pic_31__38_Instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 919)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.getter_mOccurrenceFactor (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_4 = object ;
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5.getter_mOccurrenceFactor (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 927)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_MNOP_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_NOPBRA * object = (const cPtr_pic_31__38_Instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 950)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.getter_mOccurrenceFactor (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_4 = object ;
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5.getter_mOccurrenceFactor (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 958)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                       const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LTBLPTR * object = (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
  GALGAS_sint_36__34_ var_result_34878 ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mImmediatExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34878, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_34878.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_34878.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_34878.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
    }
  }
  GALGAS_uint var_address_35109 = var_result_34878.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = object ;
  GALGAS_registerExpression var_TBLPTRU_35155 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35526 ;
  GALGAS_bitSliceTable joker_35532 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_35155.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35526, joker_35532, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)) ;
  GALGAS_uint var_upper_35577 = var_address_35109.right_shift_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsEqual, var_upper_35577.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_6.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1006)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsEqual, var_upper_35577.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_8.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.getter_mInstructionLocation (HERE), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1022)), var_upper_35577  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_10.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1029)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = object ;
  GALGAS_registerExpression var_TBLPTRH_36567 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_11.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1036)) ;
  GALGAS_bitSliceTable joker_36900 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_36567.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35526, joker_36900, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1041)) ;
  GALGAS_uint var_high_36944 = var_address_35109.right_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_high_36944.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_13.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  if (kBoolFalse == test_12) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsEqual, var_high_36944.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_15.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)) ;
      }
    }
    if (kBoolFalse == test_14) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_16.getter_mInstructionLocation (HERE), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)), var_high_36944  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = object ;
  GALGAS_registerExpression var_TBLPTRL_37938 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1085)) ;
  GALGAS_bitSliceTable joker_38270 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_37938.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35526, joker_38270, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  GALGAS_uint var_low_38313 = var_address_35109.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsEqual, var_low_38313.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_20.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1104)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1107)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsEqual, var_low_38313.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1112)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1115)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)) ;
      }
    }
    if (kBoolFalse == test_21) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_23.getter_mInstructionLocation (HERE), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1120)), var_low_38313  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_24.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)), var_outIPICregisterDescription_35526  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * object = (const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
  GALGAS_uintlist var_data_40017 ;
  GALGAS_bool var_isData_38__40030 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_0 = object ;
  constinArgument_inDataMap.method_searchKey (temp_0.getter_mDataName (HERE), var_data_40017, var_isData_38__40030, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1154)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__40030.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)), GALGAS_string ("this data is a byte array; use ldata8ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_5 = object ;
    test_4 = GALGAS_bool (kIsSupOrEqual, temp_5.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)).objectCompare (var_data_40017.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mDataIndex (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), GALGAS_string ("index should be < ").add_operation (var_data_40017.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_8 = object ;
  GALGAS_registerExpression var_TBLPTRU_40292 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_8.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_40664 ;
  GALGAS_bitSliceTable joker_40670 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_40292.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40664, joker_40670, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_10 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_9.getter_mInstructionLocation (HERE), temp_10.getter_mDataName (HERE), temp_11.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1184)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_12 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_12.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1188)), var_outIPICregisterDescription_40664  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1191)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_13 = object ;
  GALGAS_registerExpression var_TBLPTRH_41124 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_13.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)) ;
  GALGAS_bitSliceTable joker_41456 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_41124.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40664, joker_41456, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_15 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_16 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_14.getter_mInstructionLocation (HERE), temp_15.getter_mDataName (HERE), temp_16.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_17 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription_40664  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_18 = object ;
  GALGAS_registerExpression var_TBLPTRL_41908 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1228))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1225)) ;
  GALGAS_bitSliceTable joker_42241 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_41908.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40664, joker_42241, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1230)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_19 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_21 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_19.getter_mInstructionLocation (HERE), temp_20.getter_mDataName (HERE), temp_21.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_22 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)), var_outIPICregisterDescription_40664  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * object = (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
  GALGAS_uintlist var_data_43412 ;
  GALGAS_bool var_isData_38__43425 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_0 = object ;
  constinArgument_inDataMap.method_searchKey (temp_0.getter_mDataName (HERE), var_data_43412, var_isData_38__43425, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__43425.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)), GALGAS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_5 = object ;
    test_4 = GALGAS_bool (kIsSupOrEqual, temp_5.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).objectCompare (var_data_43412.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mDataIndex (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), GALGAS_string ("index should be < ").add_operation (var_data_43412.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_8 = object ;
  GALGAS_registerExpression var_TBLPTRU_43711 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_8.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1288))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_44083 ;
  GALGAS_bitSliceTable joker_44089 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_43711.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44083, joker_44089, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1290)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_10 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_9.getter_mInstructionLocation (HERE), temp_10.getter_mDataName (HERE), temp_11.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1306)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_12 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_12.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)), var_outIPICregisterDescription_44083  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_13 = object ;
  GALGAS_registerExpression var_TBLPTRH_44539 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_13.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1316)) ;
  GALGAS_bitSliceTable joker_44871 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_44539.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44083, joker_44871, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_15 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_16 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_14.getter_mInstructionLocation (HERE), temp_15.getter_mDataName (HERE), temp_16.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1334)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_17 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), var_outIPICregisterDescription_44083  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1344)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_18 = object ;
  GALGAS_registerExpression var_TBLPTRL_45319 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1347)) ;
  GALGAS_bitSliceTable joker_45652 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_45319.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44083, joker_45652, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1352)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_19 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_21 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_19.getter_mInstructionLocation (HERE), temp_20.getter_mDataName (HERE), temp_21.getter_mDataIndex (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1365)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_22 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.getter_mInstructionLocation (HERE), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)), var_outIPICregisterDescription_44083  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1375)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JUMP_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                    const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  GALGAS_bool var_isNoReturn_46859 ;
  GALGAS_uint var_requiredBank_46883 ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_0 = object ;
  GALGAS_uint joker_46885 ; // Joker input parameter
  GALGAS_bool joker_46888 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_isNoReturn_46859, var_requiredBank_46883, joker_46885, joker_46888, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_46883.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_46883.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_2 = object ;
      GALGAS_string var_errorMessage_46988 = GALGAS_string ("the routine '").add_operation (temp_2.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (var_requiredBank_46883.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
      var_errorMessage_46988.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1401)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1402)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_46988.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_46988.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)), var_errorMessage_46988, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_46859.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_10 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_9.getter_mInstructionLocation (HERE), temp_10.getter_mTargetLabel (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1418)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1421)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMP_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                 const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  GALGAS_bool var_allPreserveBank_48612 = GALGAS_bool (true) ;
  GALGAS_bool var_someReturnsBank_48643 = GALGAS_bool (false) ;
  GALGAS_uint var_returnedBankSelection_48681 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = object ;
  cEnumerator_lstringlist enumerator_48729 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_48729.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_48790 ;
    GALGAS_uint var_requiredBank_48814 ;
    GALGAS_uint var_returnedBank_48838 ;
    GALGAS_bool var_preservesBank_48863 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_48729.current_mValue (HERE), var_isNoReturn_48790, var_requiredBank_48814, var_returnedBank_48838, var_preservesBank_48863, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_48814.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_48814.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_48966 = GALGAS_string ("the routine '").add_operation (enumerator_48729.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)).add_operation (var_requiredBank_48814.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
        var_errorMessage_48966.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1452)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_48966.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_48966.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)) ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_48729.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1458)), var_errorMessage_48966, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1458)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isNoReturn_48790.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_48729.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_48729.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)) ;
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_48863.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_48729.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)), GALGAS_string ("the '").add_operation (enumerator_48729.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).operator_and (var_preservesBank_48863.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).boolEnum () ;
        if (kBoolTrue == test_8) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_someReturnsBank_48643.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_returnedBankSelection_48681 = var_returnedBank_48838 ;
              var_someReturnsBank_48643 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection_48681.objectCompare (var_returnedBank_48838)).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_string var_errorMessage_49876 = GALGAS_string ("the '").add_operation (enumerator_48729.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)) ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GALGAS_bool (kIsEqual, var_returnedBank_48838.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)))).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    var_errorMessage_49876.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1472)) ;
                  }
                }
                if (kBoolFalse == test_11) {
                  var_errorMessage_49876.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank_48838.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)) ;
                }
                var_errorMessage_49876.plusAssign_operation(GALGAS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1476)) ;
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, var_returnedBankSelection_48681.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    var_errorMessage_49876.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1478)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  var_errorMessage_49876.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_48681.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)) ;
                }
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_48729.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)), var_errorMessage_49876, fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484)).operator_and (var_preservesBank_48863 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484)).boolEnum () ;
          if (kBoolTrue == test_14) {
          }
        }
      }
    }
    enumerator_48729.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_48681 ;
  GALGAS_sint_36__34_ var_size_50622 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_15 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_15.getter_mSizeExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_50622, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1490)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsStrictInf, var_size_50622.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_17 = object ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_50622.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)), fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)) ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsStrictSup, var_size_50622.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
      if (kBoolTrue == test_19) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_20 = object ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_50622.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)) ;
      }
    }
    if (kBoolFalse == test_19) {
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_23 = object ;
        test_22 = GALGAS_bool (kIsNotEqual, var_size_50622.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).objectCompare (temp_23.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_24 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_25 = object ;
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_24.getter_mInstructionLocation (HERE), GALGAS_string ("the routine name list length (").add_operation (temp_25.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (var_size_50622.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), fixItArray26  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)) ;
        }
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList_51183 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1499)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_27 = object ;
  cEnumerator_lstringlist enumerator_51261 (temp_27.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_51261.hasCurrentObject ()) {
    var_targetInstructionList_51183.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_51261.current_mValue (HERE).getter_location (HERE), enumerator_51261.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501)) ;
    enumerator_51261.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_28 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_29 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (temp_28.getter_mInstructionLocation (HERE), var_targetInstructionList_51183, temp_29.getter_mUsesRelativeCall (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1504)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1510)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1504)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = object ;
  cEnumerator_lstringlist enumerator_52324 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_52324.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_52385 ;
    GALGAS_uint var_requiredBank_52409 ;
    GALGAS_uint joker_52411 ; // Joker input parameter
    GALGAS_bool joker_52414 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_52324.current_mValue (HERE), var_isNoReturn_52385, var_requiredBank_52409, joker_52411, joker_52414, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_52409.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_52409.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_52518 = GALGAS_string ("the routine '").add_operation (enumerator_52324.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)).add_operation (var_requiredBank_52409.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)) ;
        var_errorMessage_52518.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1537)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_52518.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1539)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_52518.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1541)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1541)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1541)) ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_52324.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1543)), var_errorMessage_52518, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1543)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_52385.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_52324.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)), GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_52324.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)) ;
      }
    }
    enumerator_52324.gotoNextObject () ;
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
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mInstructionLocation (HERE), GALGAS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1553)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_53390 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_8 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_8.getter_mSizeExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_53390, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1556)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsStrictInf, var_size_53390.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_53390.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)) ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsStrictSup, var_size_53390.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_13 = object ;
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_53390.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_16 = object ;
        test_15 = GALGAS_bool (kIsNotEqual, var_size_53390.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).objectCompare (temp_16.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_17 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_18 = object ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.getter_mInstructionLocation (HERE), GALGAS_string ("the routine name list length (").add_operation (temp_18.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).add_operation (var_size_53390.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_21 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_22 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1566)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (temp_20.getter_mInstructionLocation (HERE), temp_21.getter_mTargetLabels (HERE), temp_22.getter_mUsesRelativeCall (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1569)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1573)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1576)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1578)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  GALGAS_bool var_allPreserveBankSetting_55056 = GALGAS_bool (true) ;
  GALGAS_bool var_allReturnBank_55085 = GALGAS_bool (true) ;
  GALGAS_uint var_returnedBankValue_55116 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1602)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = object ;
  cEnumerator_lstringlist enumerator_55161 (temp_0.getter_mTargetLabels (HERE), kENUMERATION_UP) ;
  while (enumerator_55161.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_55222 ;
    GALGAS_uint var_requiredBank_55246 ;
    GALGAS_uint var_returnedBank_55270 ;
    GALGAS_bool var_preservesBank_55295 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_55161.current_mValue (HERE), var_isNoReturn_55222, var_requiredBank_55246, var_returnedBank_55270, var_preservesBank_55295, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_55246.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_55246.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_55427 = GALGAS_string ("the routine '").add_operation (enumerator_55161.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)).add_operation (var_requiredBank_55246.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
        var_errorMessage_55427.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_55427.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1610)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_55427.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1612)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1612)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1612)) ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_55161.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1614)), var_errorMessage_55427, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1614)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_preservesBank_55295.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_allReturnBank_55085 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, var_returnedBankValue_55116.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue_55116.objectCompare (var_returnedBank_55270)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_55161.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_55270.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (var_returnedBankValue_55116.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1621)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1621)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1621)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)) ;
        }
      }
      if (kBoolFalse == test_5) {
        var_allPreserveBankSetting_55056 = GALGAS_bool (false) ;
        var_returnedBankValue_55116 = var_returnedBank_55270 ;
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_55222.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_55161.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)), GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_55161.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)) ;
      }
    }
    enumerator_55161.gotoNextObject () ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_allReturnBank_55085.operator_and (var_allPreserveBankSetting_55056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1631)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1631)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBankValue_55116 ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_allReturnBank_55085.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)).operator_and (var_allPreserveBankSetting_55056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_11 = object ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.getter_mInstructionLocation (HERE), GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1634)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_55056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.getter_mInstructionLocation (HERE), GALGAS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1637)) ;
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
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_16 = object ;
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.getter_mInstructionLocation (HERE), GALGAS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1644)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_57235 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_18 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_18.getter_mSizeExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_57235, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1647)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsStrictInf, var_size_57235.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_57235.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GALGAS_bool (kIsStrictSup, var_size_57235.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_23 = object ;
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_57235.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)) ;
      }
    }
    if (kBoolFalse == test_22) {
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_26 = object ;
        test_25 = GALGAS_bool (kIsNotEqual, var_size_57235.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).objectCompare (temp_26.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)))).boolEnum () ;
        if (kBoolTrue == test_25) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_27 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_28 = object ;
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (temp_27.getter_mInstructionLocation (HERE), GALGAS_string ("the routine name list length (").add_operation (temp_28.getter_mTargetLabels (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).add_operation (var_size_57235.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)), fixItArray29  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_30 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_31 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_32 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1657)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (temp_30.getter_mInstructionLocation (HERE), temp_31.getter_mTargetLabels (HERE), temp_32.getter_mUsesRelativeCall (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1660)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1664)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1667)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1669)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                 const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.getter_mInstructionLocation (HERE), GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1693)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1695)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_59288 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_4 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_4.getter_mSizeExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_59288, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1698)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictInf, var_size_59288.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_59288.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_size_59288.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.getter_mInstructionLocation (HERE), GALGAS_string ("the computed range (").add_operation (var_size_59288.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_12 = object ;
        test_11 = GALGAS_bool (kIsNotEqual, var_size_59288.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).objectCompare (temp_12.getter_mImmediateExpressionList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_13 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_14 = object ;
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_13.getter_mInstructionLocation (HERE), GALGAS_string ("the constant list length (").add_operation (temp_14.getter_mImmediateExpressionList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).add_operation (var_size_59288.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)) ;
        }
      }
    }
  }
  GALGAS_uintlist var_literalValues_59862 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_16 = object ;
  cEnumerator_immediatExpressionList enumerator_59928 (temp_16.getter_mImmediateExpressionList (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_59891 ((uint32_t) 0) ;
  while (enumerator_59928.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v_60005 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_59928.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_60005, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsStrictSup, var_v_60005.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v_60005.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_18 = object ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.getter_mInstructionLocation (HERE), GALGAS_string ("immediate value with idx ").add_operation (index_59891.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)).add_operation (var_v_60005.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)) ;
      }
    }
    var_literalValues_59862.addAssign_operation (var_v_60005.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713)) ;
    enumerator_59928.gotoNextObject () ;
    index_59891.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_21 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1717)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (temp_20.getter_mInstructionLocation (HERE), var_literalValues_59862, temp_21.getter_mUsesRelativeCall (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1720)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1724)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1727)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1729)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  GALGAS_bool var_isNoReturn_61450 ;
  GALGAS_uint var_requiredBank_61474 ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_0 = object ;
  GALGAS_uint joker_61476 ; // Joker input parameter
  GALGAS_bool joker_61479 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_isNoReturn_61450, var_requiredBank_61474, joker_61476, joker_61479, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_61474.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_61474.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_2 = object ;
      GALGAS_string var_errorMessage_61579 = GALGAS_string ("the routine '").add_operation (temp_2.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)).add_operation (var_requiredBank_61474.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
      var_errorMessage_61579.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1753)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_61579.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1755)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_61579.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1759)), var_errorMessage_61579, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1759)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_61450.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1762)), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1762)) ;
    }
  }
  GALGAS_conditionalBranchMode var_mode_62101 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_10 = object ;
    test_9 = temp_10.getter_mIsBcc (HERE).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_mode_62101 = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1767)) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_mode_62101 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1769)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_11 = object ;
  GALGAS_lstring var_label_30__62269 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)), temp_11.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1773)) ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_12 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_13 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_14 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1776)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_12.getter_mInstructionLocation (HERE), temp_13.getter_mConditionalBranch (HERE), temp_14.getter_mTargetLabel (HERE), var_mode_62101, var_label_30__62269, var_mode_62101  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1779)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1786)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1789)) ;
  ioArgument_ioBlockLabel = var_label_30__62269 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_63788 ;
  GALGAS_bitSliceTable var_bitSliceTable_63826 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.getter_mRegisterExpression (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_63788, var_bitSliceTable_63826, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1813)) ;
  GALGAS_uint var_bitNumber_63990 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.getter_mBitNumber (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_63826, var_bitNumber_63990, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1823)) ;
  GALGAS_uint var_currentBank_64048 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_64343 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_2 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_64048, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_64343, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1832)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_currentBank_64048.objectCompare (var_currentBank_64048)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mEmbeddedInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1845)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1845)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_6 = object ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_7 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_embeddedInstruction_64343, temp_7.getter_mSkipIfSet (HERE), var_IPICregisterDescription_63788, var_bitNumber_63990  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1848)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1855)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1848)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_65527 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = object ;
  switch (temp_0.getter_mOpCode (HERE).enumValue ()) {
  case GALGAS_if_5F_semi_5F_colon_5F_op::kNotBuilt:
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSEQ:
    {
      var_baseCode_65527 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1879)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode_65527 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1880)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode_65527 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1881)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode_65527 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1882)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_66129 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_1 = object ;
  GALGAS_bitSliceTable joker_66135 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_1.getter_mRegisterExpression (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_66129, joker_66135, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1884)) ;
  GALGAS_uint var_currentBank_66216 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_66511 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_2 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_66216, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_66511, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1896)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_currentBank_66216.objectCompare (var_currentBank_66216)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mEmbeddedInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1909)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1909)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_6 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_embeddedInstruction_66511, var_baseCode_65527, var_IPICregisterDescription_66129  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1918)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_67661 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_1 = object ;
    const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_2 = object ;
    test_0 = temp_1.getter_mIncrement (HERE).operator_and (temp_2.getter_mSkipIfZero (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_67661 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_4 = object ;
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_5 = object ;
      test_3 = temp_4.getter_mIncrement (HERE).operator_and (temp_5.getter_mSkipIfZero (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_baseCode_67661 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_7 = object ;
        const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_8 = object ;
        test_6 = temp_7.getter_mIncrement (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)).operator_and (temp_8.getter_mSkipIfZero (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_baseCode_67661 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1947)) ;
        }
      }
      if (kBoolFalse == test_6) {
        var_baseCode_67661 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1949)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_68287 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_9 = object ;
  GALGAS_bitSliceTable joker_68293 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_9.getter_mRegisterExpression (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_68287, joker_68293, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1952)) ;
  GALGAS_uint var_currentBank_68374 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_68669 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_10 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_10.getter_mEmbeddedInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_68374, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_68669, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_currentBank_68374.objectCompare (var_currentBank_68374)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEmbeddedInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_15 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (temp_14.getter_mInstructionLocation (HERE), var_embeddedInstruction_68669, var_baseCode_67661, var_IPICregisterDescription_68287, temp_15.getter_m_5F_W_5F_isDestination (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1980)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1980)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze, NULL) ;

