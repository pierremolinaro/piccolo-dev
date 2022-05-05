#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_MNOP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 110)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 112)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 114)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = object ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 118)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = object ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_WO_OPERAND print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_TRIS print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_TRIS_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_TRIS * object = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_TRIS_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_TRIS_print (defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_NULL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_length (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_actualInstruction length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_actualInstruction_length (defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JUMP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_1 = object ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JUMP_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_length (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JSR length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JSR_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_1 = object ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JSR_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JSR_length (defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_MNOP length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  result_outLength = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = GALGAS_uint ((uint32_t) 3U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 2U) ;
  }
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = object ;
  ioArgument_ioCurrentWordAdress = temp_0.readProperty_mPage ().multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 27)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                          extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL isLABEL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE isLABEL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE isLABEL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL isNULL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_isNULL (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                              extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_GOTO nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, temp_0.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 126)))) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 143)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 150)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 157)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 164)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                        GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 171)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                     GALGAS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 191)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                      const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                      GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress_7929 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 203)) ;
  GALGAS_bool var_found_8086 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8101 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8101 = true ;
    while (loop_8101) {
      loop_8101 = GALGAS_bool (kIsStrictInf, var_currentAddress_7929.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8086.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8101) {
        loop_8101 = GALGAS_bool (kIsStrictInf, var_currentAddress_7929.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8086.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8101 && (0 == variant_8101)) {
        loop_8101 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8101) {
        variant_8101 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_baseline_5F_intermediate_5F_actualInstruction var_instr_8236 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7929, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) ;
          if (NULL == var_instr_8236.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8236 ;
            var_found_8086 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_currentAddress_7929.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 214)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                             const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                             GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 226)) ;
  GALGAS_uint var_currentAddress_9002 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 230)) ;
  GALGAS_bool var_found_9159 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid ()) {
    uint32_t variant_9174 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)).uintValue () ;
    bool loop_9174 = true ;
    while (loop_9174) {
      loop_9174 = GALGAS_bool (kIsStrictInf, var_currentAddress_9002.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9159.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).isValid () ;
      if (loop_9174) {
        loop_9174 = GALGAS_bool (kIsStrictInf, var_currentAddress_9002.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9159.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).boolValue () ;
      }
      if (loop_9174 && (0 == variant_9174)) {
        loop_9174 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 232)) ;
      }
      if (loop_9174) {
        variant_9174 -- ;
        GALGAS_baseline_5F_intermediate_5F_instruction var_instruction_9312 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_9002, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 235)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_baseline_5F_intermediate_5F_actualInstruction var_instr_9396 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (var_instruction_9312.ptr ())) ;
          if (NULL == var_instr_9396.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_9396 ;
            var_found_9159 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE var_instr_9669 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (var_instruction_9312.ptr ())) ;
            if (NULL == var_instr_9669.ptr ()) {
              test_1 = kBoolFalse ;
            }
            if (kBoolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_9669 ;
              var_found_9159 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var_instr_9855 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_9312.ptr ())) ;
              if (NULL == var_instr_9855.ptr ()) {
                test_2 = kBoolFalse ;
              }
              if (kBoolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_9855 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_9855.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 248)) ;
                var_currentAddress_9002.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 249)) ;
              }
            }
            if (kBoolFalse == test_2) {
              var_currentAddress_9002.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 251)) ;
            }
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations (GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)) ;
  GALGAS_baselineSymbolTableForOptimizations var_symbolTable_21917 = GALGAS_baselineSymbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("baseline_optimizations.galgas", 537)) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21986 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_21972 ((uint32_t) 0) ;
  while (enumerator_21986.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_21986.current_mInstruction (HERE).ptr (), var_symbolTable_21917, index_21972, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
    enumerator_21986.gotoNextObject () ;
    index_21972.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 538)) ;
  }
  GALGAS_bool var_optimizationsDone_22182 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_22211 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 544)).isValid ()) {
    uint32_t variant_22222 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 544)).uintValue () ;
    bool loop_22222 = true ;
    while (loop_22222) {
      loop_22222 = var_optimizationsDone_22182.isValid () ;
      if (loop_22222) {
        loop_22222 = var_optimizationsDone_22182.boolValue () ;
      }
      if (loop_22222 && (0 == variant_22222)) {
        loop_22222 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
      }
      if (loop_22222) {
        variant_22222 -- ;
        var_optimizationsDone_22182 = GALGAS_bool (false) ;
        var_iteration_22211.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_22211.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22447 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_22434 ((uint32_t) 0) ;
        while (enumerator_22447.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE var_inst_22506 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (enumerator_22447.current_mInstruction (HERE).ptr ())) ;
            if (NULL == var_inst_22506.ptr ()) {
              test_0 = kBoolFalse ;
            }
            if (kBoolTrue == test_0) {
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) var_inst_22506.ptr (), index_22434, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22182, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 555)) ;
            }
          }
          if (kBoolFalse == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              GALGAS_baseline_5F_intermediate_5F_GOTO var_inst_22795 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (enumerator_22447.current_mInstruction (HERE).ptr ())) ;
              if (NULL == var_inst_22795.ptr ()) {
                test_1 = kBoolFalse ;
              }
              if (kBoolTrue == test_1) {
                callExtensionMethod_optimizeGOTO ((const cPtr_baseline_5F_intermediate_5F_GOTO *) var_inst_22795.ptr (), var_symbolTable_21917, index_22434, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22182, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 558)) ;
              }
            }
            if (kBoolFalse == test_1) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                GALGAS_baseline_5F_intermediate_5F_JUMP var_inst_23032 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (enumerator_22447.current_mInstruction (HERE).ptr ())) ;
                if (NULL == var_inst_23032.ptr ()) {
                  test_2 = kBoolFalse ;
                }
                if (kBoolTrue == test_2) {
                  callExtensionMethod_optimizeJUMP ((const cPtr_baseline_5F_intermediate_5F_JUMP *) var_inst_23032.ptr (), var_symbolTable_21917, index_22434, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22182, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 561)) ;
                }
              }
              if (kBoolFalse == test_2) {
                enumGalgasBool test_3 = kBoolTrue ;
                if (kBoolTrue == test_3) {
                  GALGAS_baseline_5F_intermediate_5F_CALL var_inst_23269 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_CALL *> (enumerator_22447.current_mInstruction (HERE).ptr ())) ;
                  if (NULL == var_inst_23269.ptr ()) {
                    test_3 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_3) {
                    callExtensionMethod_optimizeCALL ((const cPtr_baseline_5F_intermediate_5F_CALL *) var_inst_23269.ptr (), var_symbolTable_21917, index_22434, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22182, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
                  }
                }
                if (kBoolFalse == test_3) {
                  enumGalgasBool test_4 = kBoolTrue ;
                  if (kBoolTrue == test_4) {
                    GALGAS_baseline_5F_intermediate_5F_JSR var_inst_23506 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JSR *> (enumerator_22447.current_mInstruction (HERE).ptr ())) ;
                    if (NULL == var_inst_23506.ptr ()) {
                      test_4 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_4) {
                      callExtensionMethod_optimizeJSR ((const cPtr_baseline_5F_intermediate_5F_JSR *) var_inst_23506.ptr (), var_symbolTable_21917, index_22434, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22182, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 567)) ;
                    }
                  }
                  if (kBoolFalse == test_4) {
                    enumGalgasBool test_5 = kBoolTrue ;
                    if (kBoolTrue == test_5) {
                      GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition var_inst_23740 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (enumerator_22447.current_mInstruction (HERE).ptr ())) ;
                      if (NULL == var_inst_23740.ptr ()) {
                        test_5 = kBoolFalse ;
                      }
                      if (kBoolTrue == test_5) {
                        callExtensionMethod_optimizeTestDecInc ((const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) var_inst_23740.ptr (), var_symbolTable_21917, index_22434, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22182, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 570)) ;
                      }
                    }
                  }
                }
              }
            }
          }
          enumerator_22447.gotoNextObject () ;
          index_22434.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 551)) ;
        }
        GALGAS_stringset var_referencedLabels_24095 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 575)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24140 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_24140.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24140.current_mInstruction (HERE).ptr (), var_referencedLabels_24095, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
          enumerator_24140.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_24260 (var_symbolTable_21917, kENUMERATION_UP) ;
        while (enumerator_24260.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_referencedLabels_24095.getter_hasKey (enumerator_24260.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
            if (kBoolTrue == test_6) {
              GALGAS_uint var_definitionLine_24400 ;
              var_symbolTable_21917.method_searchKey (enumerator_24260.current_lkey (HERE), var_definitionLine_24400, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_24400.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (enumerator_24260.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 583)), var_definitionLine_24400, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 583)) ;
              }
              {
              GALGAS_uint joker_24674 ; // Joker input parameter
              var_symbolTable_21917.setter_removeKey (enumerator_24260.current_lkey (HERE), joker_24674, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
              }
            }
          }
          enumerator_24260.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_24747 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_24788 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_24841 = GALGAS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24871 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_24857 ((uint32_t) 0) ;
        while (enumerator_24871.hasCurrentObject ()) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_reachable_24747.operator_or (var_previousWasSkippingInstruction_24841 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 592)).boolEnum () ;
            if (kBoolTrue == test_7) {
              var_reachable_24747 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24871.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 593)) ;
              var_previousWasSkippingInstruction_24841 = var_skippingInstruction_24788 ;
              var_skippingInstruction_24788 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24871.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
            }
          }
          if (kBoolFalse == test_7) {
            GALGAS_bool var_isLABEL_25201 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24871.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = var_isLABEL_25201.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24871.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).boolEnum () ;
              if (kBoolTrue == test_8) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_24857.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 600)), index_24857, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 600)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_isLABEL_25201.boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_reachable_24747 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24871.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 602)) ;
                  var_previousWasSkippingInstruction_24841 = GALGAS_bool (false) ;
                  var_skippingInstruction_24788 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_24871.gotoNextObject () ;
          index_24857.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_optimizationsDone_22182.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 608)).boolEnum () ;
          if (kBoolTrue == test_10) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 609)) ;
            GALGAS_uint var_currentAddress_25827 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_25855 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
            while (enumerator_25855.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_25855.current_mInstruction (HERE).ptr (), var_currentAddress_25827, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 613)) ;
              enumerator_25855.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_25827.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)).add_operation (GALGAS_string (" words\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)) ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_0 = object ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FD print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = object ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = object ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 36)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 38)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_F print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = object ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_F_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FB print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = object ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = object ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSS "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSC "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)) ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = object ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_GOTO print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_GOTO_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_GOTO * object = (const cPtr_baseline_5F_assembly_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_GOTO) ;
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_GOTO_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_GOTO_print (defineExtensionMethod_baseline_5F_assembly_5F_GOTO_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_SKIP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_SKIP_print (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO * + 2"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 74)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_SKIP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_SKIP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_SKIP_print (defineExtensionMethod_baseline_5F_assembly_5F_SKIP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_CALL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_CALL_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_CALL * object = (const cPtr_baseline_5F_assembly_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_CALL) ;
  const GALGAS_baseline_5F_assembly_5F_CALL temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_CALL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_CALL_print (defineExtensionMethod_baseline_5F_assembly_5F_CALL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_literalOperation print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  INCFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 94)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  DECFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 96)) ;
  }
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_2 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = object ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 100)) ;
    }
  }
  if (kBoolFalse == test_3) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 102)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_WO_OPERAND print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_TRIS print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_TRIS_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_TRIS * object = (const cPtr_baseline_5F_assembly_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_TRIS) ;
  const GALGAS_baseline_5F_assembly_5F_TRIS temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_TRIS_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_TRIS_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_TRIS_print (defineExtensionMethod_baseline_5F_assembly_5F_TRIS_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ORG length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_BEGINOFROUTINE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ENDOFROUTINE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_LABEL length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_actualInstruction length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_actualInstruction_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_assembly_5F_actualInstruction_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_actualInstruction_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_actualInstruction_length (defineExtensionGetter_baseline_5F_assembly_5F_actualInstruction_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_NULL generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & /* ioArgument_ioAssemblyInstructionList */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                             const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                             const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                             GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_new (temp_0.readProperty_mPage ().multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_1 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_new (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mIsRegular ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                       const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                       GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_new (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mPage ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FD generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_2 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_F generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_2 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_F::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FB generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_3 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mSkipIfSet (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_WO_OPERAND generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                            const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                            GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_1 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_TRIS generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_TRIS * object = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_2 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_TRIS::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOperand (), temp_2.readProperty_mOpcode ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_literalOperation generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                              const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                              GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                              const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                              GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_new (temp_0.readProperty_mLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_MNOP generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                  const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                  GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)) ;
    }
  }
  GALGAS_uint var_idx_6961 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_4 = object ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6972 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6972 = true ;
    while (loop_6972) {
      const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_5 = object ;
      loop_6972 = GALGAS_bool (kIsStrictInf, var_idx_6961.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6972) {
        loop_6972 = GALGAS_bool (kIsStrictInf, var_idx_6961.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6972 && (0 == variant_6972)) {
        loop_6972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)) ;
      }
      if (loop_6972) {
        variant_6972 -- ;
        const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_6 = object ;
        ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (temp_6.readProperty_mInstructionLocation (), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_NOP (SOURCE_FILE ("baseline_build_assembly_code.galgas", 160))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158)) ;
        var_idx_6961.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 161)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_1 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                                   const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_1 = object ;
  GALGAS_uint var_pageChangeFlags_8041 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 183)) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_2 = object ;
  GALGAS_uint var_targetPageFlags_8108 = temp_2.readProperty_mTargetPage () ;
  GALGAS_uint var_idx_8143 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
    uint32_t variant_8154 = GALGAS_uint ((uint32_t) 8U).uintValue () ;
    bool loop_8154 = true ;
    while (loop_8154) {
      loop_8154 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_8041.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_8154) {
        loop_8154 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_8041.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_8154 && (0 == variant_8154)) {
        loop_8154 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 186)) ;
      }
      if (loop_8154) {
        variant_8154 -- ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_8041.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_uint var_bitIndex_8252 ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 189)).boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_uint var_sliceIndex_8454 ;
                GALGAS_uint var_sliceSize_8485 ;
                const GALGAS_baseline_5F_intermediate_5F_JUMP temp_5 = object ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA"), temp_5.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 191)), var_sliceIndex_8454, var_sliceSize_8485, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 190)) ;
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (kIsSupOrEqual, var_idx_8143.objectCompare (var_sliceSize_8485)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    const GALGAS_baseline_5F_intermediate_5F_JUMP temp_7 = object ;
                    TC_Array <C_FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("internal error, idx (").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (var_sliceSize_8485.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)) ;
                  }
                }
                var_bitIndex_8252 = var_sliceIndex_8454.add_operation (var_idx_8143, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 198)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_uint var_sliceIndex_8904 ;
                  GALGAS_uint var_sliceSize_8935 ;
                  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_10 = object ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), temp_10.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), var_sliceIndex_8904, var_sliceSize_8935, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 200)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GALGAS_bool (kIsNotEqual, var_sliceSize_8935.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      const GALGAS_baseline_5F_intermediate_5F_JUMP temp_12 = object ;
                      TC_Array <C_FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_8935.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)) ;
                    }
                  }
                  var_bitIndex_8252 = var_sliceIndex_8904 ;
                }
              }
              if (kBoolFalse == test_9) {
                const GALGAS_baseline_5F_intermediate_5F_JUMP temp_14 = object ;
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 210)) ;
                var_bitIndex_8252.drop () ; // Release error dropped variable
              }
            }
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_16 = object ;
            GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_targetPageFlags_8108.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }else if (kBoolFalse == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_8252  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212)) ;
          }
        }
        var_pageChangeFlags_8041 = var_pageChangeFlags_8041.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 218)) ;
        var_targetPageFlags_8108 = var_targetPageFlags_8108.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 219)) ;
        var_idx_8143 = var_idx_8143.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 220)) ;
      }
    }
  }
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_19 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_20 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_1 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                                  const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                                  GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_1 = object ;
  GALGAS_uint var_pageChangeFlags_10576 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 245)) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_2 = object ;
  GALGAS_uint var_targetPageFlags_10643 = temp_2.readProperty_mTargetPage () ;
  GALGAS_uint var_idx_10678 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_pageRestoreInstructions_10712 = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_build_assembly_code.galgas", 248)) ;
  if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
    uint32_t variant_10767 = GALGAS_uint ((uint32_t) 8U).uintValue () ;
    bool loop_10767 = true ;
    while (loop_10767) {
      loop_10767 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10576.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_10767) {
        loop_10767 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10576.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_10767 && (0 == variant_10767)) {
        loop_10767 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 249)) ;
      }
      if (loop_10767) {
        variant_10767 -- ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10576.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_uint var_bitIndex_10865 ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_uint var_sliceIndex_11067 ;
                GALGAS_uint var_sliceSize_11098 ;
                const GALGAS_baseline_5F_intermediate_5F_JSR temp_5 = object ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA"), temp_5.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 254)), var_sliceIndex_11067, var_sliceSize_11098, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 253)) ;
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (kIsSupOrEqual, var_idx_10678.objectCompare (var_sliceSize_11098)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    const GALGAS_baseline_5F_intermediate_5F_JSR temp_7 = object ;
                    TC_Array <C_FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("internal error, idx (").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (var_sliceSize_11098.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)) ;
                  }
                }
                var_bitIndex_10865 = var_sliceIndex_11067.add_operation (var_idx_10678, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 261)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_uint var_sliceIndex_11517 ;
                  GALGAS_uint var_sliceSize_11548 ;
                  const GALGAS_baseline_5F_intermediate_5F_JSR temp_10 = object ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), temp_10.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), var_sliceIndex_11517, var_sliceSize_11548, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 263)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GALGAS_bool (kIsNotEqual, var_sliceSize_11548.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      const GALGAS_baseline_5F_intermediate_5F_JSR temp_12 = object ;
                      TC_Array <C_FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_11548.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)) ;
                    }
                  }
                  var_bitIndex_10865 = var_sliceIndex_11517 ;
                }
              }
              if (kBoolFalse == test_9) {
                const GALGAS_baseline_5F_intermediate_5F_JSR temp_14 = object ;
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 273)) ;
                var_bitIndex_10865.drop () ; // Release error dropped variable
              }
            }
            const GALGAS_baseline_5F_intermediate_5F_JSR temp_16 = object ;
            GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_targetPageFlags_10643.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }else if (kBoolFalse == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_10865  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275)) ;
            const GALGAS_baseline_5F_intermediate_5F_JSR temp_19 = object ;
            GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_20 ;
            const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, var_targetPageFlags_10643.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_21) {
              temp_20 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }else if (kBoolFalse == test_21) {
              temp_20 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }
            var_pageRestoreInstructions_10712.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (temp_19.readProperty_mInstructionLocation (), temp_20, constinArgument_inSTATUSregister, var_bitIndex_10865  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280)) ;
          }
        }
        var_pageChangeFlags_10576 = var_pageChangeFlags_10576.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 286)) ;
        var_targetPageFlags_10643 = var_targetPageFlags_10643.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 287)) ;
        var_idx_10678 = var_idx_10678.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 288)) ;
      }
    }
  }
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_22 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_23 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (temp_22.readProperty_mInstructionLocation (), temp_23.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290)) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12649 (var_pageRestoreInstructions_10712, kENUMERATION_UP) ;
  while (enumerator_12649.hasCurrentObject ()) {
    ioArgument_ioAssemblyInstructionList.addAssign_operation (enumerator_12649.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 294)) ;
    enumerator_12649.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition generateAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                        const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                        GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = object ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_3 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mRegisterDescription (), temp_2.readProperty_mIncrement (), temp_3.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_5 = object ;
    test_4 = temp_5.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = object ;
      ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_SKIP::constructor_new (temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311)) ;
    }
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_8 = object ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_9 = object ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (temp_7.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (temp_8.readProperty_mTargetLabel (), temp_9.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 317))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code (const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                    const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                    const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                    GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14349 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_14349.hasCurrentObject ()) {
    callExtensionMethod_generateAssemblyCode ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14349.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 333)) ;
    enumerator_14349.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_14600 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
  while (enumerator_14600.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_14600.current_mRegisterAddress (HERE).add_operation (enumerator_14600.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)) ;
    }
    {
    routine_emitCode (enumerator_14600.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 338)) ;
    }
    enumerator_14600.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitBaselineCodeAtWordAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitBaselineCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                            GALGAS_uint & ioArgument_ioWordAddress,
                                            const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 15)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitNoBaselineCodeAtWordAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitNoBaselineCodeAtWordAddress (const GALGAS_uint constinArgument_inWordAddress,
                                              const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 25)) ;
  callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 27)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                         GALGAS_baseline_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                         GALGAS_uint & ioArgument_ioWordAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 54)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                       GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                       GALGAS_uint & ioArgument_ioWordAddress,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_actualInstruction enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                           GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                           GALGAS_uint & ioArgument_ioWordAddress,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_actualInstruction * object = (const cPtr_baseline_5F_assembly_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
  const GALGAS_baseline_5F_assembly_5F_actualInstruction temp_0 = object ;
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_assembly_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                          const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                          GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_1 = object ;
    test_0 = temp_1.readProperty_mIsRegular ().operator_and (GALGAS_bool (kIsNotEqual, ioArgument_ioWordAddress.operator_and (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("the 8th bit of the routine address is not 0; a regular routine should be begin in the first half of a page"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 91)) ;
    }
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_4 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 93)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                        const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioWordAddress.objectCompare (temp_1.readProperty_mPage ().multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)).add_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_2 = object ;
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_3 = object ;
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("the routine is too large, it does not lie in page ").add_operation (temp_3.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (ioArgument_ioWordAddress.substract_operation (temp_4.readProperty_mPage ().multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" word(s) in excess)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), fixItArray5  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)) ;
    }
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_6 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_6, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 105)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioWordAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_1 = object ;
  routine_setEmitAddress (temp_1.readProperty_mOrigin ().multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_2 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 116)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FD generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                   const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  GALGAS_uint var_code_5026 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = object ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 448U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 320U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 576U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 192U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 704U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 640U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 15360U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 256U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 512U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 832U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 768U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 128U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 896U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      var_code_5026 = GALGAS_uint ((uint32_t) 384U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_2 = object ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_5026 = var_code_5026.operator_or (GALGAS_uint ((uint32_t) 32U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 144)) ;
    }
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = object ;
  var_code_5026 = var_code_5026.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_4 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_5026, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 147)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_F generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                  const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  GALGAS_uint var_code_5989 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = object ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_5989 = GALGAS_uint ((uint32_t) 96U) ;
    }
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_5989 = GALGAS_uint ((uint32_t) 32U) ;
    }
    break ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = object ;
  var_code_5989 = var_code_5989.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_2 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_5989, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 162)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FB generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                   const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  GALGAS_uint var_code_6531 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = object ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_6531 = GALGAS_uint ((uint32_t) 1024U) ;
    }
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_6531 = GALGAS_uint ((uint32_t) 1280U) ;
    }
    break ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = object ;
  var_code_6531 = var_code_6531.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = object ;
  var_code_6531 = var_code_6531.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 5U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_3 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_6531, ioArgument_ioWordAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 178)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                            const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code_7130 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_7130 = GALGAS_uint ((uint32_t) 1792U) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_7130 = GALGAS_uint ((uint32_t) 1536U) ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = object ;
  var_code_7130 = var_code_7130.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = object ;
  var_code_7130 = var_code_7130.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 5U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_4 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_7130, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 196)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_GOTO generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_GOTO * object = (const cPtr_baseline_5F_assembly_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_GOTO) ;
  GALGAS_uint var_targetAddress_7756 ;
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_7756, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 206)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2560U).operator_or (var_targetAddress_7756.operator_and (GALGAS_uint ((uint32_t) 511U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_SKIP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_SKIP * object = (const cPtr_baseline_5F_assembly_5F_SKIP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_SKIP) ;
  {
  const GALGAS_baseline_5F_assembly_5F_SKIP temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2560U).operator_or (ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)).operator_and (GALGAS_uint ((uint32_t) 511U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_CALL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_CALL * object = (const cPtr_baseline_5F_assembly_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_CALL) ;
  GALGAS_uint var_targetAddress_8594 ;
  const GALGAS_baseline_5F_assembly_5F_CALL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_8594, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 227)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_CALL temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2304U).operator_or (var_targetAddress_8594.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                           const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_code_8991 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_8991 = GALGAS_uint ((uint32_t) 960U) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_8991 = GALGAS_uint ((uint32_t) 704U) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_3 = object ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 244)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_8991 = var_code_8991.operator_or (GALGAS_uint ((uint32_t) 32U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 245)) ;
    }
  }
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = object ;
  var_code_8991 = var_code_8991.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_5 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_8991, ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_WO_OPERAND generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioWordAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  GALGAS_uint var_code_9593 ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = object ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW:
    {
      var_code_9593 = GALGAS_uint ((uint32_t) 64U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP:
    {
      var_code_9593 = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT:
    {
      var_code_9593 = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_:
    {
      var_code_9593 = GALGAS_uint ((uint32_t) 2U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP:
    {
      var_code_9593 = GALGAS_uint ((uint32_t) 3U) ;
    }
    break ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_9593, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 265)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_TRIS generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_TRIS * object = (const cPtr_baseline_5F_assembly_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_TRIS) ;
  {
  const GALGAS_baseline_5F_assembly_5F_TRIS temp_0 = object ;
  const GALGAS_baseline_5F_assembly_5F_TRIS temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (temp_0.readProperty_mOpcode (), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 274)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_literalOperation generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                                 const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code_10530 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = object ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_10530 = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_10530 = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_10530 = GALGAS_uint ((uint32_t) 3072U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      var_code_10530 = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_10530 = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = object ;
  var_code_10530 = var_code_10530.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 291)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_2 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_10530, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 292)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                 const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress_11160 ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_11160, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 301)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_targetAddress_11160.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_2 = object ;
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (var_targetAddress_11160.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), fixItArray4  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)) ;
    }
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_5 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 307)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_binary_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_binary_5F_code (const GALGAS_baseline_5F_assembly_5F_instructionList constinArgument_inAssemblyInstructionList,
                                                  const GALGAS_uint constinArgument_inROMsize,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  GALGAS_uint & outArgument_outUsedROMsize,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GALGAS_baseline_5F_symbolTable var_symbolTable_12165 = GALGAS_baseline_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("baseline_build_binary_code.galgas", 322)) ;
  GALGAS_uint var_currentWordAddress_12230 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12254 (constinArgument_inAssemblyInstructionList, kENUMERATION_UP) ;
  while (enumerator_12254.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12254.current_mInstruction (HERE).ptr (), var_symbolTable_12165, var_currentWordAddress_12230, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 325)) ;
    enumerator_12254.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_12404 = var_currentWordAddress_12230 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12230 ;
  var_currentWordAddress_12230 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 331)) ;
  }
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12593 (constinArgument_inAssemblyInstructionList, kENUMERATION_UP) ;
  while (enumerator_12593.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12593.current_mInstruction (HERE).ptr (), var_symbolTable_12165, ioArgument_ioListFileContents, var_currentWordAddress_12230, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
    {
    routine_checkCurrentEmitAddress (var_currentWordAddress_12230.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)) ;
    }
    enumerator_12593.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_12404.objectCompare (var_currentWordAddress_12230)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12230.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (var_lastAddressForFirstPass_12404.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 342)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_12404.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12404.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 346)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_BitTest addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 12)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_SEMI_COLON addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 19)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_IncDec addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 26)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JUMP * object = (const cPtr_midrange_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JUMP) ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_GOTO * object = (const cPtr_midrange_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_GOTO) ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 40)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CALL * object = (const cPtr_midrange_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CALL) ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 47)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FOREVER * object = (const cPtr_midrange_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FOREVER) ;
  {
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_0 = object ;
  routine_addMidRangeUsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 54)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_STATIC_REPEAT addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = object ;
  routine_addMidRangeUsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 61)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_MNOP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_F addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_F_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRW addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRWDT addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_SLEEP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FB addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_NOP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checkbank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank.mSlotID,
                                        extensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (defineExtensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checknobank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank.mSlotID,
                                        extensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (defineExtensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel_register addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_do_while addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_do_5F_while * object = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
  {
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_0 = object ;
  routine_addMidRangeUsedRoutinesFromInstructionList (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 134)) ;
  }
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_1 = object ;
  cEnumerator_midrange_5F_partList enumerator_4362 (temp_1.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_4362.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_4362.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 136)) ;
    }
    enumerator_4362.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_nobanksel addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_savebank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_savebank * object = (const cPtr_midrange_5F_instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_savebank) ;
  {
  const GALGAS_midrange_5F_instruction_5F_savebank temp_0 = object ;
  routine_addMidRangeUsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 150)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_structured_5F_if * object = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
  {
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_0 = object ;
  routine_addMidRangeUsedRoutinesFromInstructionList (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 157)) ;
  }
  {
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_1 = object ;
  routine_addMidRangeUsedRoutinesFromInstructionList (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 158)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FD addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JSR * object = (const cPtr_midrange_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JSR) ;
  const GALGAS_midrange_5F_instruction_5F_JSR temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 171)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_literalOperation addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addMidRangeUsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addMidRangeUsedRoutinesFromInstructionList (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_midrange_5F_instructionList enumerator_6122 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_6122.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) enumerator_6122.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 186)) ;
    enumerator_6122.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'midrange_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_midrange_5F_computeUsedRoutines (const GALGAS_midrange_5F_interruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                           const GALGAS_midrange_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 197)) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_6657 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_6657.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_6657.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 200)) ;
    }
    enumerator_6657.gotoNextObject () ;
  }
  GALGAS_stringset var_s_6853 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_used_routines.galgas", 206)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).isValid ()) {
    uint32_t variant_6883 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).uintValue () ;
    bool loop_6883 = true ;
    while (loop_6883) {
      loop_6883 = GALGAS_bool (kIsNotEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6883) {
        loop_6883 = GALGAS_bool (kIsNotEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6883 && (0 == variant_6883)) {
        loop_6883 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas", 207)) ;
      }
      if (loop_6883) {
        variant_6883 -- ;
        var_s_6853 = result_outUsedRoutineSet ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_7029 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_7029.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_7029.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 211)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_7029.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 212)) ;
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


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_midrange_5F_computeUsedRoutines [3] = {
  & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList,
  & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_midrange_5F_computeUsedRoutines (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_midrange_5F_computeUsedRoutines ("midrange_computeUsedRoutines",
                                                                                 functionWithGenericHeader_midrange_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 2,
                                                                                 functionArgs_midrange_5F_computeUsedRoutines) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_NULL_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_actualInstruction instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 36)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 37)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 39)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outLength.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 40)) ;
    }
  }
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JSR instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = result_outLength.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 50)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 52)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outLength = result_outLength.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 53)) ;
    }
  }
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JSR_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_MNOP instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  result_outLength = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_incDecRegisterInCondition instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = GALGAS_uint ((uint32_t) 3U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 2U) ;
  }
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_NULL_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 11)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_NULL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_print (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = object ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 34)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 57)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 59)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_JUMP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_print (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_GOTO_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_print (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_CALL_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_CALL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_print (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JSR_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_JSR_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_print (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 96)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 103)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 118)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 132)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 153)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 157)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = object ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 161)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = object ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 166)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG setCurrentAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_uint & ioArgument_ioCurrentAddress,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioCurrentAddress = temp_0.readProperty_mOrigin () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                          GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if instructionUsesGOTOorCALL'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                                   GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL instructionUsesGOTOorCALL'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR instructionUsesGOTOorCALL'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                      GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO instructionUsesGOTOorCALL'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP instructionUsesGOTOorCALL'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleMidrangeInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleMidrangeInstructionList (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
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
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GALGAS_bool (true) ;
  cEnumerator_midrange_5F_instructionList enumerator_2937 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2937.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 89)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2937.current_mInstruction (HERE).readProperty_mInstructionLocation (), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
        outArgument_outContinuesInSequence = GALGAS_bool (true) ;
      }
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) enumerator_2937.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 93)) ;
    enumerator_2937.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                               const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_nobanksel * object = (const cPtr_midrange_5F_instruction_5F_nobanksel *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_nobanksel) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_nobanksel temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 126)) ;
    }
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 128)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_savebank build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                              const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_savebank * object = (const cPtr_midrange_5F_instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_savebank) ;
  GALGAS_registerExpression var_STATUS_5F_register_5017 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 151))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 148)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5214 ;
  GALGAS_bitSliceTable joker_5394 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_5017.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 156)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5214, joker_5394, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 154)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5543 ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_0 = object ;
  GALGAS_bitSliceTable joker_5720 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 167)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5543, joker_5720, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 165)) ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_1 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_1.readProperty_mInstructionLocation (), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 177)), var_STATUS_5F_IPICregisterDescription_5214, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175)) ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_2 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (temp_2.readProperty_mInstructionLocation (), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 183)), var_save_5F_IPICregisterDescription_5543  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181)) ;
  GALGAS_uint var_finalBank_6279 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_midrange_5F_instruction_5F_savebank temp_3 = object ;
  routine_handleMidrangeInstructionList (temp_3.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6279, GALGAS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 187)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_midrange_5F_instruction_5F_savebank temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mEndOfSaveBankInstruction (), GALGAS_string ("useless saving: execution does reach the end of \"savebank\" instruction list"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 203)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_savebank temp_7 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_7.readProperty_mInstructionLocation (), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 208)), var_save_5F_IPICregisterDescription_5543, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206)) ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_8 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (temp_8.readProperty_mInstructionLocation (), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 214)), var_STATUS_5F_IPICregisterDescription_5214  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_banksel * object = (const cPtr_midrange_5F_instruction_5F_banksel *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_banksel) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_banksel temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 234)) ;
    }
  }
  GALGAS_registerExpression var_STATUS_5F_register_8097 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 240))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 237)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8295 ;
  GALGAS_bitSliceTable var_bitSliceTable_8330 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_8097.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8295, var_bitSliceTable_8330, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 244)) ;
  const GALGAS_midrange_5F_instruction_5F_banksel temp_3 = object ;
  GALGAS_lstring var_RP_8542 = GALGAS_lstring::constructor_new (GALGAS_string ("RP"), temp_3.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 253)) ;
  GALGAS_uint var_rpIndex_8643 ;
  GALGAS_uint var_sliceSize_8664 ;
  var_bitSliceTable_8330.method_searchKey (var_RP_8542, var_rpIndex_8643, var_sliceSize_8664, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 254)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictInf, var_sliceSize_8664.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_midrange_5F_instruction_5F_banksel temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8664.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_midrange_5F_instruction_5F_banksel temp_8 = object ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_midrange_5F_instruction_5F_banksel temp_10 = object ;
        test_9 = temp_10.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_midrange_5F_instruction_5F_banksel temp_11 = object ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticWarning (temp_11.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_midrange_5F_instruction_5F_banksel temp_14 = object ;
      test_13 = GALGAS_bool (kIsSupOrEqual, temp_14.readProperty_mBankIndex ().readProperty_uint ().objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_banksel temp_15 = object ;
        const GALGAS_midrange_5F_instruction_5F_banksel temp_16 = object ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("the bank ").add_operation (temp_16.readProperty_mBankIndex ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)) ;
      }
    }
    if (kBoolFalse == test_13) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 265)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_uint var_n_9400 = constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 266)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 266)) ;
          const GALGAS_midrange_5F_instruction_5F_banksel temp_19 = object ;
          GALGAS_uint var_shiftedBank_9471 = temp_19.readProperty_mBankIndex ().readProperty_uint () ;
          GALGAS_uint var_idx_9512 = GALGAS_uint ((uint32_t) 0U) ;
          if (var_sliceSize_8664.isValid ()) {
            uint32_t variant_9525 = var_sliceSize_8664.uintValue () ;
            bool loop_9525 = true ;
            while (loop_9525) {
              loop_9525 = GALGAS_bool (kIsStrictInf, var_idx_9512.objectCompare (var_sliceSize_8664)).isValid () ;
              if (loop_9525) {
                loop_9525 = GALGAS_bool (kIsStrictInf, var_idx_9512.objectCompare (var_sliceSize_8664)).boolValue () ;
              }
              if (loop_9525 && (0 == variant_9525)) {
                loop_9525 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 269)) ;
              }
              if (loop_9525) {
                variant_9525 -- ;
                GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_9601 ;
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GALGAS_bool (kIsEqual, var_shiftedBank_9471.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 271)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    var_op_9601 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 272)) ;
                  }
                }
                if (kBoolFalse == test_20) {
                  var_op_9601 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 274)) ;
                }
                const GALGAS_midrange_5F_instruction_5F_banksel temp_21 = object ;
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (temp_21.readProperty_mInstructionLocation (), var_op_9601, var_STATUS_5F_IPICregisterDescription_8295, var_rpIndex_8643.add_operation (var_idx_9512, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 280))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 276))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 276)) ;
                var_idx_9512.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)) ;
                var_shiftedBank_9471 = var_shiftedBank_9471.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 282)) ;
              }
            }
          }
          const GALGAS_midrange_5F_instruction_5F_banksel temp_22 = object ;
          ioArgument_ioCurrentBank = temp_22.readProperty_mBankIndex ().readProperty_uint () ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_bool var_optimize_10077 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) ;
        const GALGAS_midrange_5F_instruction_5F_banksel temp_23 = object ;
        GALGAS_uint var_shiftedBank_10157 = temp_23.readProperty_mBankIndex ().readProperty_uint () ;
        const GALGAS_midrange_5F_instruction_5F_banksel temp_24 = object ;
        GALGAS_uint var_shiftedXorBank_10209 = temp_24.readProperty_mBankIndex ().readProperty_uint ().operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 288)) ;
        GALGAS_uint var_idx_10266 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_8664.isValid ()) {
          uint32_t variant_10279 = var_sliceSize_8664.uintValue () ;
          bool loop_10279 = true ;
          while (loop_10279) {
            loop_10279 = GALGAS_bool (kIsStrictInf, var_idx_10266.objectCompare (var_sliceSize_8664)).isValid () ;
            if (loop_10279) {
              loop_10279 = GALGAS_bool (kIsStrictInf, var_idx_10266.objectCompare (var_sliceSize_8664)).boolValue () ;
            }
            if (loop_10279 && (0 == variant_10279)) {
              loop_10279 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 290)) ;
            }
            if (loop_10279) {
              variant_10279 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_10355 ;
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                test_25 = GALGAS_bool (kIsEqual, var_shiftedBank_10157.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 292)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_op_10355 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 293)) ;
                }
              }
              if (kBoolFalse == test_25) {
                var_op_10355 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 295)) ;
              }
              enumGalgasBool test_26 = kBoolTrue ;
              if (kBoolTrue == test_26) {
                test_26 = GALGAS_bool (kIsNotEqual, var_shiftedXorBank_10209.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_optimize_10077.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)).boolEnum () ;
                if (kBoolTrue == test_26) {
                  const GALGAS_midrange_5F_instruction_5F_banksel temp_27 = object ;
                  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (temp_27.readProperty_mInstructionLocation (), var_op_10355, var_STATUS_5F_IPICregisterDescription_8295, var_rpIndex_8643.add_operation (var_idx_10266, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 302))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 298))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 298)) ;
                }
              }
              if (kBoolFalse == test_26) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10355, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_8643.add_operation (var_idx_10266, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)) ;
              }
              var_idx_10266.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)) ;
              var_shiftedBank_10157 = var_shiftedBank_10157.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)) ;
              var_shiftedXorBank_10209 = var_shiftedXorBank_10209.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 310)) ;
            }
          }
        }
        const GALGAS_midrange_5F_instruction_5F_banksel temp_28 = object ;
        ioArgument_ioCurrentBank = temp_28.readProperty_mBankIndex ().readProperty_uint () ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_banksel_5F_register * object = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 332)) ;
    }
  }
  GALGAS_registerExpression var_STATUS_5F_register_11994 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 338))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 335)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12317 ;
  GALGAS_bitSliceTable var_bitSliceTable_12355 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_11994.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12317, var_bitSliceTable_12355, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 340)) ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_3 = object ;
  GALGAS_lstring var_RP_12390 = GALGAS_lstring::constructor_new (GALGAS_string ("RP"), temp_3.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 349)) ;
  GALGAS_uint var_rpIndex_12491 ;
  GALGAS_uint var_sliceSize_12512 ;
  var_bitSliceTable_12355.method_searchKey (var_RP_12390, var_rpIndex_12491, var_sliceSize_12512, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictInf, var_sliceSize_12512.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12512.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_12837 ;
  GALGAS_uint var_size_12857 ;
  GALGAS_registerProtection var_protection_12885 ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_7 = object ;
  GALGAS_bitSliceTable joker_12863_2 ; // Joker input parameter
  GALGAS_string joker_12863_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_12837, var_size_12857, joker_12863_2, joker_12863_1, var_protection_12885, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 355)) ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_8 = object ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mRegister ().readProperty_mRegisterName (), GALGAS_bool (false), var_protection_12885, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 362)) ;
  GALGAS_uint var_address_13031 ;
  var_registerAddressList_12837.method_first (var_address_13031, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)) ;
  GALGAS_uint var_newBank_13052 = var_address_13031.right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 364)) ;
  GALGAS_sint_36__34_ var_offset_13155 ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_9 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_9.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_13155, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 366)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsStrictInf, var_offset_13155.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GALGAS_string ("index value (").add_operation (var_offset_13155.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)).add_operation (GALGAS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)) ;
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsSupOrEqual, var_offset_13155.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)).objectCompare (var_size_12857)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GALGAS_string ("maximum index value is ").add_operation (var_size_12857.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)) ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, var_newBank_13052.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_16) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_18 = object ;
        test_17 = temp_18.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_17) {
          const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_19 = object ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticWarning (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)), fixItArray20  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsSupOrEqual, var_newBank_13052.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_22 = object ;
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the bank ").add_operation (var_newBank_13052.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)), fixItArray23  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)) ;
      }
    }
    if (kBoolFalse == test_21) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 379)))).boolEnum () ;
        if (kBoolTrue == test_24) {
          GALGAS_uint var_n_13930 = constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 380)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 380)) ;
          GALGAS_uint var_shiftedBank_14001 = var_newBank_13052 ;
          GALGAS_uint var_idx_14029 = GALGAS_uint ((uint32_t) 0U) ;
          if (var_sliceSize_12512.isValid ()) {
            uint32_t variant_14042 = var_sliceSize_12512.uintValue () ;
            bool loop_14042 = true ;
            while (loop_14042) {
              loop_14042 = GALGAS_bool (kIsStrictInf, var_idx_14029.objectCompare (var_sliceSize_12512)).isValid () ;
              if (loop_14042) {
                loop_14042 = GALGAS_bool (kIsStrictInf, var_idx_14029.objectCompare (var_sliceSize_12512)).boolValue () ;
              }
              if (loop_14042 && (0 == variant_14042)) {
                loop_14042 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 383)) ;
              }
              if (loop_14042) {
                variant_14042 -- ;
                GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_14118 ;
                enumGalgasBool test_25 = kBoolTrue ;
                if (kBoolTrue == test_25) {
                  test_25 = GALGAS_bool (kIsEqual, var_shiftedBank_14001.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                  if (kBoolTrue == test_25) {
                    var_op_14118 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 386)) ;
                  }
                }
                if (kBoolFalse == test_25) {
                  var_op_14118 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 388)) ;
                }
                const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_26 = object ;
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (temp_26.readProperty_mInstructionLocation (), var_op_14118, var_STATUS_5F_IPICregisterDescription_12317, var_rpIndex_12491.add_operation (var_idx_14029, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 390))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 390)) ;
                var_idx_14029.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 395)) ;
                var_shiftedBank_14001 = var_shiftedBank_14001.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 396)) ;
              }
            }
          }
          ioArgument_ioCurrentBank = var_newBank_13052 ;
        }
      }
      if (kBoolFalse == test_24) {
        GALGAS_bool var_optimize_14581 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) ;
        GALGAS_uint var_shiftedBank_14661 = var_newBank_13052 ;
        GALGAS_uint var_shiftedXorBank_14700 = var_newBank_13052.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 402)) ;
        GALGAS_uint var_idx_14744 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_12512.isValid ()) {
          uint32_t variant_14757 = var_sliceSize_12512.uintValue () ;
          bool loop_14757 = true ;
          while (loop_14757) {
            loop_14757 = GALGAS_bool (kIsStrictInf, var_idx_14744.objectCompare (var_sliceSize_12512)).isValid () ;
            if (loop_14757) {
              loop_14757 = GALGAS_bool (kIsStrictInf, var_idx_14744.objectCompare (var_sliceSize_12512)).boolValue () ;
            }
            if (loop_14757 && (0 == variant_14757)) {
              loop_14757 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 404)) ;
            }
            if (loop_14757) {
              variant_14757 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_14833 ;
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                test_27 = GALGAS_bool (kIsEqual, var_shiftedBank_14661.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 406)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_27) {
                  var_op_14833 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 407)) ;
                }
              }
              if (kBoolFalse == test_27) {
                var_op_14833 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)) ;
              }
              enumGalgasBool test_28 = kBoolTrue ;
              if (kBoolTrue == test_28) {
                test_28 = GALGAS_bool (kIsNotEqual, var_shiftedXorBank_14700.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_optimize_14581.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411)).boolEnum () ;
                if (kBoolTrue == test_28) {
                  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_29 = object ;
                  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (temp_29.readProperty_mInstructionLocation (), var_op_14833, var_STATUS_5F_IPICregisterDescription_12317, var_rpIndex_12491.add_operation (var_idx_14744, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 412))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 412)) ;
                }
              }
              if (kBoolFalse == test_28) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14833, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_12491.add_operation (var_idx_14744, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)) ;
              }
              var_idx_14744.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)) ;
              var_shiftedBank_14661 = var_shiftedBank_14661.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 423)) ;
              var_shiftedXorBank_14700 = var_shiftedXorBank_14700.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 424)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_13052 ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FD build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                        const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FD) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16467 ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_0 = object ;
  GALGAS_bitSliceTable joker_16473 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16467, joker_16473, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 445)) ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_1 = object ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_2 = object ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_IPICregisterDescription_16467, temp_3.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 454))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 454)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_F build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                       const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_F * object = (const cPtr_midrange_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_F) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17399 ;
  const GALGAS_midrange_5F_instruction_5F_F temp_0 = object ;
  GALGAS_bitSliceTable joker_17565 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17399, joker_17565, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 478)) ;
  const GALGAS_midrange_5F_instruction_5F_F temp_1 = object ;
  const GALGAS_midrange_5F_instruction_5F_F temp_2 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mFAinstruction (), var_IPICregisterDescription_17399  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 487))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 487)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FB build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                        const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FB) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18544 ;
  GALGAS_bitSliceTable var_bitSliceTable_18567 ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_0 = object ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18544, var_bitSliceTable_18567, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 510)) ;
  GALGAS_uint var_bitNumber_18725 ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18567, var_bitNumber_18725, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 519)) ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_2 = object ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_18544, var_bitNumber_18725  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 526))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 526)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                         const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JSR * object = (const cPtr_midrange_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JSR) ;
  GALGAS_bool var_isNoReturn_19639 ;
  GALGAS_uint var_requiredBank_19657 ;
  GALGAS_uint var_returnedBank_19675 ;
  GALGAS_bool var_preservesBank_19694 ;
  const GALGAS_midrange_5F_instruction_5F_JSR temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_19639, var_requiredBank_19657, var_returnedBank_19675, var_preservesBank_19694, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_19657.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 551)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_19657.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 551)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_JSR temp_2 = object ;
      GALGAS_string var_errorMessage_19797 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 552)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 552)).add_operation (var_requiredBank_19657.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 552)) ;
      var_errorMessage_19797.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 553)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 554)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_19797.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_19797.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_JSR temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_19797, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_19639.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_JSR temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 562)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_19694.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 564)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_19675 ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_JSR temp_10 = object ;
  const GALGAS_midrange_5F_instruction_5F_JSR temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 571)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 572))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 568))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 568)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrangeInstruction_5F_checkbank * object = (const cPtr_midrangeInstruction_5F_checkbank *) inObject ;
  macroValidSharedObject (object, cPtr_midrangeInstruction_5F_checkbank) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrangeInstruction_5F_checkbank temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mBankIndex ().objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrangeInstruction_5F_checkbank temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 592)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 593)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_midrangeInstruction_5F_checkbank temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_midrangeInstruction_5F_checkbank temp_8 = object ;
        test_7 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_midrangeInstruction_5F_checkbank temp_9 = object ;
          const GALGAS_midrangeInstruction_5F_checkbank temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 596)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 596)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 596)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 596)) ;
        }
      }
    }
  }
  const GALGAS_midrangeInstruction_5F_checkbank temp_12 = object ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank.mSlotID,
                                                                     extensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrangeInstruction_5F_checknobank * object = (const cPtr_midrangeInstruction_5F_checknobank *) inObject ;
  macroValidSharedObject (object, cPtr_midrangeInstruction_5F_checknobank) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 617)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrangeInstruction_5F_checknobank temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 618)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 618)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 618)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 619)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank.mSlotID,
                                                                     extensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CALL * object = (const cPtr_midrange_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CALL) ;
  GALGAS_bool var_isNoReturn_23234 ;
  GALGAS_uint var_requiredBank_23252 ;
  GALGAS_uint var_returnedBank_23270 ;
  GALGAS_bool var_preservesBank_23289 ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_23234, var_requiredBank_23252, var_returnedBank_23270, var_preservesBank_23289, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_23252.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 640)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_23252.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 640)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_2 = object ;
      GALGAS_string var_errorMessage_23392 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)).add_operation (var_requiredBank_23252.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)) ;
      var_errorMessage_23392.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 642)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 643)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_23392.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_23392.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 646)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_CALL temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23392, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 648)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_23234.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_23289.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 653)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23270 ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_CALL temp_10 = object ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JUMP * object = (const cPtr_midrange_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JUMP) ;
  GALGAS_bool var_isNoReturn_24808 ;
  GALGAS_uint var_requiredBank_24826 ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_0 = object ;
  GALGAS_uint joker_24828 ; // Joker input parameter
  GALGAS_bool joker_24831 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_24808, var_requiredBank_24826, joker_24828, joker_24831, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_24826.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 679)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_24826.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 679)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_2 = object ;
      GALGAS_string var_errorMessage_24935 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)).add_operation (var_requiredBank_24826.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)) ;
      var_errorMessage_24935.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 681)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 682)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_24935.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_24935.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 685)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_24935, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 687)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_24808.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 689)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 690)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_9 = object ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_10 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 697)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 698))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 694))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 694)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_GOTO * object = (const cPtr_midrange_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_GOTO) ;
  GALGAS_bool var_isNoReturn_26392 ;
  GALGAS_uint var_requiredBank_26410 ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_0 = object ;
  GALGAS_uint joker_26412 ; // Joker input parameter
  GALGAS_bool joker_26415 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26392, var_requiredBank_26410, joker_26412, joker_26415, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_26410.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 718)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_26410.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 718)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_2 = object ;
      GALGAS_string var_errorMessage_26519 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)).add_operation (var_requiredBank_26410.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)) ;
      var_errorMessage_26519.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 720)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 721)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_26519.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_26519.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 724)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 724)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26519, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 726)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_26392.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 728)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 729)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_9 = object ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_10 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CLRWDT * object = (const cPtr_midrange_5F_instruction_5F_CLRWDT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
  const GALGAS_midrange_5F_instruction_5F_CLRWDT temp_0 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 753))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 753)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CLRW * object = (const cPtr_midrange_5F_instruction_5F_CLRW *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CLRW) ;
  const GALGAS_midrange_5F_instruction_5F_CLRW temp_0 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 772))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 772)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_NOP * object = (const cPtr_midrange_5F_instruction_5F_NOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_NOP) ;
  const GALGAS_midrange_5F_instruction_5F_NOP temp_0 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 791))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 791)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_SLEEP * object = (const cPtr_midrange_5F_instruction_5F_SLEEP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_SLEEP) ;
  const GALGAS_midrange_5F_instruction_5F_SLEEP temp_0 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 810))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 810)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_literalOperation) ;
  GALGAS_sint_36__34_ var_result_30999 ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30999, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 829)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_30999.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_30999.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 831)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 831)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_literalOperation temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_30999.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 832)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 832)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 832)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_4 = object ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_30999.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 838)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 838)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 838))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 835))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 835)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 858)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_4 = object ;
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 861))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 861)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                             const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FOREVER * object = (const cPtr_midrange_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FOREVER) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 883)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 886)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_33311 = ioArgument_ioCurrentBank ;
  GALGAS_string var_label_30__33348 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 891)) ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__33348, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 892)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 892))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 892)) ;
  {
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_5 = object ;
  routine_handleMidrangeInstructionList (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33311, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 893)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33311)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GALGAS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 909)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_9 = object ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_10 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_9.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_30__33348, temp_10.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 914))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 912))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 912)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  GALGAS_sint_36__34_ var_lowerBound_34961 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34961, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 935)) ;
  GALGAS_sint_36__34_ var_upperBound_35071 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_35071, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 936)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_lowerBound_34961.objectCompare (var_upperBound_35071)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_34961.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).add_operation (var_upperBound_35071.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_upperBound_35071.substract_operation (var_lowerBound_34961, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 940)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_35071.substract_operation (var_lowerBound_34961, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 941)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 941)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 941)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 941)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 941)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_35478 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_35516 = constinArgument_inConstantMap ;
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = object ;
  var_tempConstantMap_35516.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_34961, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 946)) ;
  }
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = object ;
  routine_handleMidrangeInstructionList (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35516, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35478, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 947)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35478)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 963)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 965)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list contains an endless loop"), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 966)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_36236 = var_lowerBound_34961.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 969)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 969)) ;
  if (var_upperBound_35071.substract_operation (var_lowerBound_34961, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)).isValid ()) {
    uint32_t variant_36260 = var_upperBound_35071.substract_operation (var_lowerBound_34961, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)).uintValue () ;
    bool loop_36260 = true ;
    while (loop_36260) {
      GALGAS_bool test_16 = GALGAS_bool (kIsInfOrEqual, var_idx_36236.objectCompare (var_upperBound_35071)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_36260 = test_16.isValid () ;
      if (loop_36260) {
        loop_36260 = test_16.boolValue () ;
      }
      if (loop_36260 && (0 == variant_36260)) {
        loop_36260 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)) ;
      }
      if (loop_36260) {
        variant_36260 -- ;
        GALGAS_constantMap var_constantMap_36373 = constinArgument_inConstantMap ;
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = object ;
        var_constantMap_36373.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_36236, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 972)) ;
        }
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = object ;
        routine_handleMidrangeInstructionList (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36373, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 973)) ;
        }
        var_idx_36236.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 988)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                   const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37590 ;
  GALGAS_bitSliceTable var_bitSliceTable_37613 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37590, var_bitSliceTable_37613, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1007)) ;
  GALGAS_uint var_bitNumber_37771 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37613, var_bitNumber_37771, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1016)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = object ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37590, var_bitNumber_37771  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1023))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1023)) ;
  GALGAS_bool var_unusedContinuesInSequence_38024 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = object ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_38024, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1031)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                    const GALGAS_uint constinArgument_inTotalBankCount,
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
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_incDecRegisterInCondition) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39899 ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_0 = object ;
  GALGAS_bitSliceTable joker_39905 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39899, joker_39905, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1083)) ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_1 = object ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_2 = object ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_IPICregisterDescription_39899, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1099))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1093))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1093)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition.mSlotID,
                                                         extensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                       const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                       GALGAS_uint & outArgument_outInstructionCount,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_incDecRegisterInCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1107)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 3U) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 2U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition.mSlotID,
                                                            extensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                          const GALGAS_uint constinArgument_inTotalBankCount,
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
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_negateCondition * object = (const cPtr_midrange_5F_negateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_negateCondition) ;
  const GALGAS_midrange_5F_negateCondition temp_0 = object ;
  callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1134)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1128)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_negateCondition.mSlotID,
                                                         extensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                             const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                             GALGAS_uint & outArgument_outInstructionCount,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_negateCondition * object = (const cPtr_midrange_5F_negateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_negateCondition) ;
  const GALGAS_midrange_5F_negateCondition temp_0 = object ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1149)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1148)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_negateCondition.mSlotID,
                                                            extensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                       const GALGAS_uint constinArgument_inTotalBankCount,
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
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_andCondition * object = (const cPtr_midrange_5F_andCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_andCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_andCondition temp_1 = object ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1169)) ;
      const GALGAS_midrange_5F_andCondition temp_2 = object ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1182)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__43038 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1196)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1196)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1196)) ;
    const GALGAS_midrange_5F_andCondition temp_3 = object ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__43038, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1197)) ;
    const GALGAS_midrange_5F_andCondition temp_4 = object ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1210)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__43038, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1223)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1223))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1223)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_andCondition.mSlotID,
                                                         extensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                          const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                          GALGAS_uint & outArgument_outInstructionCount,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_andCondition * object = (const cPtr_midrange_5F_andCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_andCondition) ;
  GALGAS_uint var_countLeft_44216 ;
  const GALGAS_midrange_5F_andCondition temp_0 = object ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_44216, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1232)) ;
  GALGAS_uint var_countRight_44327 ;
  const GALGAS_midrange_5F_andCondition temp_1 = object ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44327, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1236)) ;
  outArgument_outInstructionCount = var_countLeft_44216.add_operation (var_countRight_44327, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1240)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_andCondition.mSlotID,
                                                            extensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_andCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
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
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_45127 ;
  GALGAS_bitSliceTable var_bitSliceTable_45150 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = object ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_45127, var_bitSliceTable_45150, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1257)) ;
  GALGAS_uint var_bitNumber_45308 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_45150, var_bitNumber_45308, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1266)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_45127, var_bitNumber_45308  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1273))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1273)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1281)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1282)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1283))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1279))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1279)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                         extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * /* inObject */,
                                                                                                                            const GALGAS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                            GALGAS_uint & outArgument_outInstructionCount,
                                                                                                                            C_Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                            extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_structured_5F_if * object = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
  GALGAS_bool var_generateComplementaryCondition_46691 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_directCount_46822 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_1 = object ;
      callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GALGAS_bool (true), var_directCount_46822, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1313)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_3 = object ;
        test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1314)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_directCount_46822.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1315)) ;
        }
      }
      GALGAS_uint var_complementaryCount_47010 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_4 = object ;
      callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GALGAS_bool (false), var_complementaryCount_47010, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1317)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_6 = object ;
        test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1318)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_complementaryCount_47010.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1319)) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsStrictInf, var_complementaryCount_47010.objectCompare (var_directCount_46822)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_generateComplementaryCondition_46691 = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).add_operation (GALGAS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).add_operation (var_directCount_46822.substract_operation (var_complementaryCount_47010, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1324)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).add_operation (GALGAS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1324)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_directCount_46822.substract_operation (var_complementaryCount_47010, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1325)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1326)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1328)) ;
        }
      }
    }
  }
  GALGAS_uint var_elseBranchFinalBank_47643 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_47691 = ioArgument_ioCurrentBank ;
  GALGAS_bool var_elseContinuesInSequence_47743 ;
  GALGAS_bool var_thenContinuesInSequence_47779 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_46691.boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string var_label_5F_nextCondition_47863 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1337)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1337)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1337)) ;
      GALGAS_string var_label_5F_endOfIfinstruction_47961 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)) ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_10 = object ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_11 = object ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_47863, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1340)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_12 = object ;
      routine_handleMidrangeInstructionList (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47643, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47743, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1354)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_14 = object ;
        test_13 = GALGAS_bool (kIsStrictSup, temp_14.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1370)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_15 = object ;
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_16 = object ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_15.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47961, temp_16.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_17 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_47863, temp_17.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1373)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1373))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1373)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_18 = object ;
      routine_handleMidrangeInstructionList (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47691, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47779, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1374)) ;
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_20 = object ;
        test_19 = GALGAS_bool (kIsStrictSup, temp_20.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1389)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_19) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_21 = object ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47961, temp_21.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1390)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1390))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1390)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_label_5F_nextCondition_49851 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_49949 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_22 = object ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_23 = object ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_49851, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_24 = object ;
    routine_handleMidrangeInstructionList (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47691, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47779, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1411)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_26 = object ;
      test_25 = GALGAS_bool (kIsStrictSup, temp_26.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1427)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_27 = object ;
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_28 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_27.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49949, temp_28.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428)) ;
      }
    }
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_29 = object ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_49851, temp_29.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1430)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1430))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1430)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_30 = object ;
    routine_handleMidrangeInstructionList (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47643, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47743, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1431)) ;
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_32 = object ;
      test_31 = GALGAS_bool (kIsStrictSup, temp_32.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1446)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_31) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_33 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49949, temp_33.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1447)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1447))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1447)) ;
      }
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    test_34 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_47643.objectCompare (var_thenBranchFinalBank_47691)).boolEnum () ;
    if (kBoolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_47643 ;
    }
  }
  if (kBoolFalse == test_34) {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_35 = object ;
    TC_Array <C_FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1453)) ;
    var_elseBranchFinalBank_47643 = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47779.operator_or (var_elseContinuesInSequence_47743 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1457)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                 const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_do_5F_while * object = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
  GALGAS_string var_labelInstructionBegin_52808 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_0 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_52808, temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1478)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1478))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1478)) ;
  GALGAS_uint var_finalBank_53083 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_1 = object ;
  routine_handleMidrangeInstructionList (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_53083, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1481)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_53083)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1497)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_5 = object ;
  cEnumerator_midrange_5F_partList enumerator_53663 (temp_5.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_53663.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, enumerator_53663.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1501)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_7 = object ;
        callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_53663.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_52808, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1502)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_string var_nextBranchLabel_54134 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1516)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1516)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1516)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_8 = object ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_53663.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_54134, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1517)) ;
      GALGAS_uint var_bank_54562 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList (enumerator_53663.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54562, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1531)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54562)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_53663.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_11 = object ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_12 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_11.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_labelInstructionBegin_52808, temp_12.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1549))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1549))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1549)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_13 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_54134, temp_13.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1550)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1550))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1550)) ;
    }
    enumerator_53663.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                  const GALGAS_routineMap constinArgument_inRoutineMap,
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
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_56084 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_56084 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_baseCode_56084 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1575)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_56408 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = object ;
  GALGAS_bitSliceTable joker_56414 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_56408, joker_56414, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1578)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = object ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_3.readProperty_mInstructionLocation (), var_baseCode_56084, var_IPICregisterDescription_56408, temp_4.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1588))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1588)) ;
  GALGAS_bool var_unusedContinuesInSequence_56673 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = object ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56673, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1596)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_assembly_instruction_list'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (const GALGAS_uint constinArgument_inTotalPageCount,
                                                                   const GALGAS_uint constinArgument_inTotalBankCount,
                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                   const GALGAS_string constinArgument_inSharedRAMBankName,
                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                   const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                   const GALGAS_bool constinArgument_inHasInterrupt,
                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  GALGAS_string var_generationOptimizationMessages_57587 = GALGAS_string::makeEmptyString () ;
  GALGAS_routineMap var_routineMap_57661 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_57766 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_57766.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_57766.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1630)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57766.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1630)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_57766.current_mRequiredBank (HERE).readProperty_location (), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_57766.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1633)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57766.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1633)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_57766.current_mReturnedBank (HERE).readProperty_location (), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1634)) ;
      }
    }
    {
    var_routineMap_57661.setter_insertKey (enumerator_57766.current_mRoutineName (HERE), enumerator_57766.current_mIsNoReturn (HERE), enumerator_57766.current_mRequiredBank (HERE).readProperty_uint (), enumerator_57766.current_mReturnedBank (HERE).readProperty_uint (), enumerator_57766.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1636)) ;
    }
    enumerator_57766.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1654)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_routineMap_57661.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1660)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_bool var_isNoReturn_59353 ;
      GALGAS_uint var_requiredBank_59377 ;
      GALGAS_uint joker_59379 ; // Joker input parameter
      GALGAS_bool joker_59382 ; // Joker input parameter
      var_routineMap_57661.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)), var_isNoReturn_59353, var_requiredBank_59377, joker_59379, joker_59382, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)) ;
      GALGAS_location var_mainDeclarationLocation_59426 = var_routineMap_57661.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1662)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_isNoReturn_59353.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1663)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59426, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1664)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_59377.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59426, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1667)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_5) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)) ;
  }
  GALGAS_uint var_localLabelIndex_60001 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_handleInterruptRoutine (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57661, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57587, var_localLabelIndex_60001, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1674)) ;
  }
  GALGAS_uint var_currentPage_60427 = GALGAS_uint ((uint32_t) 0U) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_60438 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_60438 = true ;
    while (loop_60438) {
      loop_60438 = GALGAS_bool (kIsStrictInf, var_currentPage_60427.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_60438) {
        loop_60438 = GALGAS_bool (kIsStrictInf, var_currentPage_60427.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_60438 && (0 == variant_60438)) {
        loop_60438 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1691)) ;
      }
      if (loop_60438) {
        variant_60438 -- ;
        GALGAS_bool var_orgGenerated_60524 = GALGAS_bool (kIsEqual, var_currentPage_60427.objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_60669 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
        while (enumerator_60669.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_60669.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_60427)).boolEnum () ;
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_orgGenerated_60524.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1695)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (var_currentPage_60427.multiply_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1696))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1696))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1696)) ;
                  var_orgGenerated_60524 = GALGAS_bool (true) ;
                }
              }
              GALGAS_uint var_currentBank_60964 = enumerator_60669.current_mRequiredBank (HERE).readProperty_uint () ;
              GALGAS_routineKind var_routineKind_61022 ;
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = enumerator_60669.current_mIsNoReturn (HERE).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_routineKind_61022 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1702)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_routineKind_61022 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1704)) ;
              }
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_60669.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1706))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1706)) ;
              GALGAS_bool var_continuesInSequence_61652 ;
              {
              routine_handleMidrangeInstructionList (enumerator_60669.current_mInstructionList (HERE), var_routineMap_57661, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_60001, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57587, constinArgument_inTotalBankCount, var_currentBank_60964, enumerator_60669.current_mPreservesBank (HERE), var_continuesInSequence_61652, var_routineKind_61022, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1707)) ;
              }
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = enumerator_60669.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1722)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_60669.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1722)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1722)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_60964.objectCompare (enumerator_60669.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1722)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_60669.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_60669.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)) ;
                }
              }
              enumGalgasBool test_16 = kBoolTrue ;
              if (kBoolTrue == test_16) {
                test_16 = enumerator_60669.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_61652 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1725)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <C_FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_60669.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1726)) ;
                }
              }
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = enumerator_60669.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1729)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (enumerator_60669.current_mRoutineName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730)) ;
                }
              }
            }
          }
          enumerator_60669.gotoNextObject () ;
        }
        var_currentPage_60427.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1734)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1740)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1740)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1740)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1741)) ;
      GALGAS_uint var_idx_62775 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_uint var_currentAddress_62808 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62834 (outArgument_outGeneratedInstructionList, kENUMERATION_UP) ;
      while (enumerator_62834.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62834.current_mInstruction (HERE).ptr (), var_currentAddress_62808, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1745)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_idx_62775.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)) ;
        callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62834.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)) ;
        var_idx_62775.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)) ;
        enumerator_62834.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1751)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62808.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1752)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1752)).add_operation (GALGAS_string (" instructions.\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1752)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1752)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'interruptRoutineShouldSavePCLATH'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_interruptRoutineShouldSavePCLATH (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                               const GALGAS_uint constinArgument_inTotalPageCount,
                                               GALGAS_string & ioArgument_ioListFileContents,
                                               GALGAS_bool & outArgument_outShouldSavePCLATH,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outShouldSavePCLATH.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)) ;
  outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_63656 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_63656.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_63656.current_mPage (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GALGAS_bool (true) ;
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsSupOrEqual, enumerator_63656.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_63656.current_mPage (HERE).readProperty_location (), GALGAS_string ("invalid value (").add_operation (enumerator_63656.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)) ;
      }
    }
    enumerator_63656.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1774)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1775)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_64233 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1780)).isValidAndTrue () ;
      if (enumerator_64233.hasCurrentObject () && bool_5) {
        while (enumerator_64233.hasCurrentObject () && bool_5) {
          cEnumerator_midrange_5F_instructionList enumerator_64335 (enumerator_64233.current_mInstructionList (HERE), kENUMERATION_UP) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1781)).isValidAndTrue () ;
          if (enumerator_64335.hasCurrentObject () && bool_6) {
            while (enumerator_64335.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((const cPtr_midrange_5F_instruction *) enumerator_64335.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1782)) ;
              enumerator_64335.gotoNextObject () ;
              if (enumerator_64335.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1781)).isValidAndTrue () ;
              }
            }
          }
          enumerator_64233.gotoNextObject () ;
          if (enumerator_64233.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1780)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1786)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1788)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1791)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleInterruptRoutine'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleInterruptRoutine (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
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
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outGeneratedInstructionList = GALGAS_midrange_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815)) ;
  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1818)), GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1819))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1819)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1820)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1821))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1825)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1825)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1825)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1825)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1826)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1826)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1826)) ;
      GALGAS_bool var_shouldSavePCLATH_66609 ;
      {
      routine_interruptRoutineShouldSavePCLATH (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_66609, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1828)) ;
      }
      outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint ((uint32_t) 4U)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1835))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1835)) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_66796 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
      while (enumerator_66796.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSharedRAMBankName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66796.current_mFirstSaveRegister (HERE), enumerator_66796.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66609, enumerator_66796.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66796.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1838)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66796.current_mFirstSaveRegister (HERE), enumerator_66796.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66609, enumerator_66796.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66796.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1854)) ;
          }
        }
        enumerator_66796.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithSharedRAM'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithSharedRAM (const GALGAS_uint constinArgument_inTotalBankCount,
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
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_registerAddressList_68713 ;
  GALGAS_uint var_size_68725 ;
  GALGAS_registerProtection var_firstProtection_68750 ;
  GALGAS_bitSliceTable joker_68727_2 ; // Joker input parameter
  GALGAS_string joker_68727_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_68713, var_size_68725, joker_68727_2, joker_68727_1, var_firstProtection_68750, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1891)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_68750, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1892)) ;
  GALGAS_uint var_bankAccessibility_68870 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_68888 (var_registerAddressList_68713, kENUMERATION_UP) ;
  while (enumerator_68888.hasCurrentObject ()) {
    var_bankAccessibility_68870 = var_bankAccessibility_68870.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_68888.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)) ;
    enumerator_68888.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_bankAccessibility_68870.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1897)).objectCompare (GALGAS_uint ((uint32_t) 1U).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1897)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1898)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1898)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1898)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_size_68725.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1901)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1901)).add_operation (var_size_68725.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1901)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1901)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1901)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1901)) ;
    }
  }
  GALGAS_registerProtection var_secondProtection_69524 ;
  GALGAS_bitSliceTable joker_69500_2 ; // Joker input parameter
  GALGAS_string joker_69500_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_68713, var_size_68725, joker_69500_2, joker_69500_1, var_secondProtection_69524, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1904)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_69524, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1905)) ;
  var_bankAccessibility_68870 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_69654 (var_registerAddressList_68713, kENUMERATION_UP) ;
  while (enumerator_69654.hasCurrentObject ()) {
    var_bankAccessibility_68870 = var_bankAccessibility_68870.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_69654.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1908)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1908)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1908)) ;
    enumerator_69654.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, var_bankAccessibility_68870.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1910)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1911)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1911)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1911)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_68725.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (var_size_68725.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1915)).operator_and (GALGAS_bool (kIsNotEqual, var_size_68725.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1915)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1916)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1916)).add_operation (var_size_68725.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1916)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1916)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1916)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1916)) ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1919)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_registerExpression var_first_5F_register_70356 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1922))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1922))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1922)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_70638 ;
      GALGAS_bitSliceTable joker_70646 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_70356.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_70638, joker_70646, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1925)) ;
      GALGAS_registerExpression var_second_5F_register_70701 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_71017 ;
      GALGAS_bitSliceTable joker_71025 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_second_5F_register_70701.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_71017, joker_71025, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1939)) ;
      GALGAS_registerExpression var_STATUS_5F_register_71118 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1950))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1950)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1951))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1951))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1951)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1952))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_71424 ;
      GALGAS_bitSliceTable joker_71432 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_71118.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1956)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_71424, joker_71432, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1954)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), var_first_5F_IPICregisterDescription_70638  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), var_STATUS_5F_IPICregisterDescription_71424, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1965)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1965)), var_STATUS_5F_IPICregisterDescription_71424  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1965))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1965)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1966)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1966)), var_second_5F_IPICregisterDescription_71017  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1966))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1966)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_registerExpression var_reg_72195 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1970))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1970))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1970)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1971))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72654 ;
          GALGAS_bitSliceTable joker_72664 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_72195.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72654, joker_72664, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1974)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_72765 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1986))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1986))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1986)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1987))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_73102 ;
          GALGAS_bitSliceTable joker_73112 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_72765.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_73102, joker_73112, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), var_PCLATH_5F_IPICregisterDescription_73102, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72654  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2000)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2000)), var_PCLATH_5F_IPICregisterDescription_73102  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2000))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2000)) ;
        }
      }
      GALGAS_uint var_currentBank_73741 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_bool var_continuesInSequence_74129 ;
      {
      routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73741, GALGAS_bool (false), var_continuesInSequence_74129, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2016)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2004)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_continuesInSequence_74129.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2019)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2020)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_registerExpression var_reg_74382 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74727 ;
          GALGAS_bitSliceTable joker_74737 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_74382.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74727, joker_74737, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_74838 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2039))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2039)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2040))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2040))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2040)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2041))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_75174 ;
          GALGAS_bitSliceTable joker_75184 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_74838.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2045)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_75174, joker_75184, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2043)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74727, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2053)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2053)), var_PCLATH_5F_IPICregisterDescription_75174  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2053))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2053)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), var_second_5F_IPICregisterDescription_71017, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), var_STATUS_5F_IPICregisterDescription_71424  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2058)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2058)), var_first_5F_IPICregisterDescription_70638, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2058))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2058)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)), var_first_5F_IPICregisterDescription_70638, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2061))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2061))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2061)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithoutSharedRAM'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithoutSharedRAM (const GALGAS_uint constinArgument_inTotalBankCount,
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
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2083)) ;
  GALGAS_uintlist var_registerAddressList_77332 ;
  GALGAS_uint var_size_77344 ;
  GALGAS_registerProtection var_firstProtection_77369 ;
  GALGAS_bitSliceTable joker_77346_2 ; // Joker input parameter
  GALGAS_string joker_77346_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_77332, var_size_77344, joker_77346_2, joker_77346_1, var_firstProtection_77369, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_77369, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)) ;
  GALGAS_bool var_accessibleFromBank_30__77491 = GALGAS_bool (false) ;
  GALGAS_uint var_offset_77518 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_77548 (var_registerAddressList_77332, kENUMERATION_UP) ;
  bool bool_0 = var_accessibleFromBank_30__77491.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)).isValidAndTrue () ;
  if (enumerator_77548.hasCurrentObject () && bool_0) {
    while (enumerator_77548.hasCurrentObject () && bool_0) {
      var_offset_77518 = enumerator_77548.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)) ;
      var_accessibleFromBank_30__77491 = GALGAS_bool (kIsEqual, enumerator_77548.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_77548.gotoNextObject () ;
      if (enumerator_77548.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__77491.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__77491.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2092)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_77344.objectCompare (GALGAS_uint ((uint32_t) 3U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (var_size_77344.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2097)).operator_and (GALGAS_bool (kIsNotEqual, var_size_77344.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2097)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2098)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2098)).add_operation (var_size_77344.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2098)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2098)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2098)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2098)) ;
      }
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList_78334 = var_registerAddressList_77332 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2102)) ;
  GALGAS_registerProtection var_secondProtection_78510 ;
  GALGAS_bitSliceTable joker_78486_2 ; // Joker input parameter
  GALGAS_string joker_78486_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_77332, var_size_77344, joker_78486_2, joker_78486_1, var_secondProtection_78510, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2103)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_78510, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2104)) ;
  var_saveStatusRegisterAddressList_78334 = var_saveStatusRegisterAddressList_78334.add_operation (var_registerAddressList_77332, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_size_77344.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2107)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2107)).add_operation (var_size_77344.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2107)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2107)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2107)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2107)) ;
    }
  }
  GALGAS_bool var_accessibleFromBank_31__78921 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_78943 (var_registerAddressList_77332, kENUMERATION_UP) ;
  bool bool_9 = var_accessibleFromBank_31__78921.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2111)).isValidAndTrue () ;
  if (enumerator_78943.hasCurrentObject () && bool_9) {
    while (enumerator_78943.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78921 = GALGAS_bool (kIsEqual, enumerator_78943.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2112)).objectCompare (GALGAS_uint ((uint32_t) 128U))) ;
      enumerator_78943.gotoNextObject () ;
      if (enumerator_78943.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78921.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2111)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__78921.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2114)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2115)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2115)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2115)) ;
    }
  }
  GALGAS_bool var_offsetOk_79323 = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_79344 (var_registerAddressList_77332, kENUMERATION_UP) ;
  bool bool_12 = var_offsetOk_79323.isValidAndTrue () ;
  if (enumerator_79344.hasCurrentObject () && bool_12) {
    while (enumerator_79344.hasCurrentObject () && bool_12) {
      var_offsetOk_79323 = GALGAS_bool (kIsEqual, var_offset_77518.objectCompare (enumerator_79344.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)))) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_offsetOk_79323.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (enumerator_79344.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).add_operation (var_offset_77518.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)) ;
        }
      }
      enumerator_79344.gotoNextObject () ;
      if (enumerator_79344.hasCurrentObject ()) {
        bool_12 = var_offsetOk_79323.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_registerExpression var_first_5F_register_79834 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2131))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2131))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2131)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_80116 ;
      GALGAS_bitSliceTable joker_80124 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_79834.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_80116, joker_80124, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2134)) ;
      GALGAS_registerExpression var_first_5F_register_5F_second_5F_byte_80190 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2145))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2145))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2145)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80509 ;
      GALGAS_bitSliceTable joker_80517 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_80190.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80509, joker_80517, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)) ;
      GALGAS_registerExpression var_STATUS_5F_register_80610 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2159))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2159)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2160))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2160))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2160)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2161))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80935 ;
      GALGAS_bitSliceTable joker_80943 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_80610.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2165)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80935, joker_80943, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), var_first_5F_IPICregisterDescription_80116  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), var_STATUS_5F_IPICregisterDescription_80935, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2174)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2174)), var_STATUS_5F_IPICregisterDescription_80935  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2174))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2174)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80509  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_81745 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2179))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2179))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2179)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2180))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_82081 ;
          GALGAS_bitSliceTable joker_82091 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81745.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_82081, joker_82091, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2182)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_82192 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2195))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_82535 ;
          GALGAS_bitSliceTable joker_82545 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_82192.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2199)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_82535, joker_82545, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2197)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), var_PCLATH_5F_IPICregisterDescription_82535, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_82081  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)), var_PCLATH_5F_IPICregisterDescription_82535  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)) ;
        }
      }
      GALGAS_uint var_currentBank_83180 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_bool var_continuesInSequence_83551 ;
      {
      routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_83180, GALGAS_bool (true), var_continuesInSequence_83551, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2224)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2212)) ;
      }
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_continuesInSequence_83551.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2227)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2228)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_19) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_83826 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 2U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2233))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2233))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2233)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2234))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84206 ;
          GALGAS_bitSliceTable joker_84216 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83826.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84206, joker_84216, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_84317 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2247))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2247)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2248))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2248))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2248)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2249))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_84561 ;
          GALGAS_bitSliceTable joker_84750 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_84317.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2254)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_84561, joker_84750, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2252)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2261)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2261)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84206, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2261))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2261)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262)), var_PCLATH_5F_IPICregisterDescription_84561  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80509, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), var_STATUS_5F_IPICregisterDescription_80935  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2267)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2267)), var_first_5F_IPICregisterDescription_80116, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2267))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2267)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)), var_first_5F_IPICregisterDescription_80116, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2270))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2270))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2270)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG isLABELorORG'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (void) {
  enterExtensionGetter_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                     extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL isLABELorORG'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (void) {
  enterExtensionGetter_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                     extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL isNULL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_NULL_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_NULL_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_midrange_5F_intermediate_5F_NULL_isNULL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_NULL_isNULL (defineExtensionGetter_midrange_5F_intermediate_5F_NULL_isNULL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                              extensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_GOTO nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, temp_0.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 135)))) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                     GALGAS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_1 = object ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, temp_1.readProperty_mIsDeletable (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                      const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                      GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress_6840 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 167)) ;
  GALGAS_bool var_found_6997 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).isValid ()) {
    uint32_t variant_7012 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).uintValue () ;
    bool loop_7012 = true ;
    while (loop_7012) {
      loop_7012 = GALGAS_bool (kIsStrictInf, var_currentAddress_6840.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6997.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).isValid () ;
      if (loop_7012) {
        loop_7012 = GALGAS_bool (kIsStrictInf, var_currentAddress_6840.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6997.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).boolValue () ;
      }
      if (loop_7012 && (0 == variant_7012)) {
        loop_7012 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 169)) ;
      }
      if (loop_7012) {
        variant_7012 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instr_7147 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6840, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) ;
          if (NULL == var_instr_7147.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_7147 ;
            var_found_6997 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_currentAddress_6840.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 178)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                             const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                             GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 190)) ;
  GALGAS_uint var_currentAddress_7913 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 194)) ;
  GALGAS_bool var_found_8070 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid ()) {
    uint32_t variant_8085 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)).uintValue () ;
    bool loop_8085 = true ;
    while (loop_8085) {
      loop_8085 = GALGAS_bool (kIsStrictInf, var_currentAddress_7913.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8070.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).isValid () ;
      if (loop_8085) {
        loop_8085 = GALGAS_bool (kIsStrictInf, var_currentAddress_7913.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8070.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).boolValue () ;
      }
      if (loop_8085 && (0 == variant_8085)) {
        loop_8085 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 196)) ;
      }
      if (loop_8085) {
        variant_8085 -- ;
        GALGAS_midrange_5F_intermediate_5F_instruction var_instruction_8223 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7913, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 199)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instr_8307 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (var_instruction_8223.ptr ())) ;
          if (NULL == var_instr_8307.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8307 ;
            var_found_8070 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG var_instr_8580 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (var_instruction_8223.ptr ())) ;
            if (NULL == var_instr_8580.ptr ()) {
              test_1 = kBoolFalse ;
            }
            if (kBoolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_8580 ;
              var_found_8070 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL var_instr_8764 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_8223.ptr ())) ;
              if (NULL == var_instr_8764.ptr ()) {
                test_2 = kBoolFalse ;
              }
              if (kBoolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_8764 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_8764.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 212)) ;
                var_currentAddress_7913.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 213)) ;
              }
            }
            if (kBoolFalse == test_2) {
              var_currentAddress_7913.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 215)) ;
            }
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'perform_midrange_optimizations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_perform_5F_midrange_5F_optimizations (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)) ;
  GALGAS_symbolTableForOptimizations var_symbolTable_23829 = GALGAS_symbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("midrange_optimizations.galgas", 545)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_23890 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_23876 ((uint32_t) 0) ;
  while (enumerator_23890.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_23890.current_mInstruction (HERE).ptr (), var_symbolTable_23829, index_23876, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 547)) ;
    enumerator_23890.gotoNextObject () ;
    index_23876.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
  }
  GALGAS_bool var_optimizationsDone_24086 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_24115 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 552)).isValid ()) {
    uint32_t variant_24126 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 552)).uintValue () ;
    bool loop_24126 = true ;
    while (loop_24126) {
      loop_24126 = var_optimizationsDone_24086.isValid () ;
      if (loop_24126) {
        loop_24126 = var_optimizationsDone_24086.boolValue () ;
      }
      if (loop_24126 && (0 == variant_24126)) {
        loop_24126 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 552)) ;
      }
      if (loop_24126) {
        variant_24126 -- ;
        var_optimizationsDone_24086 = GALGAS_bool (false) ;
        var_iteration_24115.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 556)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_24115.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
        GALGAS_uint var_idx_24342 = GALGAS_uint ((uint32_t) 0U) ;
        if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)).isValid ()) {
          uint32_t variant_24355 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)).uintValue () ;
          bool loop_24355 = true ;
          while (loop_24355) {
            loop_24355 = GALGAS_bool (kIsStrictInf, var_idx_24342.objectCompare (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).isValid () ;
            if (loop_24355) {
              loop_24355 = GALGAS_bool (kIsStrictInf, var_idx_24342.objectCompare (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).boolValue () ;
            }
            if (loop_24355 && (0 == variant_24355)) {
              loop_24355 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 560)) ;
            }
            if (loop_24355) {
              variant_24355 -- ;
              GALGAS_midrange_5F_intermediate_5F_instruction var_instruction_24517 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (var_idx_24342, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 562)) ;
              enumGalgasBool test_0 = kBoolTrue ;
              if (kBoolTrue == test_0) {
                GALGAS_midrange_5F_intermediate_5F_GOTO var_ipic_5F_GOTO_24596 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_instruction_24517.ptr ())) ;
                if (NULL == var_ipic_5F_GOTO_24596.ptr ()) {
                  test_0 = kBoolFalse ;
                }
                if (kBoolTrue == test_0) {
                  callExtensionMethod_optimizeGOTO ((const cPtr_midrange_5F_intermediate_5F_GOTO *) var_ipic_5F_GOTO_24596.ptr (), var_symbolTable_23829, var_idx_24342, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24086, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)) ;
                }
              }
              if (kBoolFalse == test_0) {
                enumGalgasBool test_1 = kBoolTrue ;
                if (kBoolTrue == test_1) {
                  GALGAS_midrange_5F_intermediate_5F_JUMP var_ipic_5F_JUMP_24848 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_instruction_24517.ptr ())) ;
                  if (NULL == var_ipic_5F_JUMP_24848.ptr ()) {
                    test_1 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_1) {
                    callExtensionMethod_optimizeJUMP ((const cPtr_midrange_5F_intermediate_5F_JUMP *) var_ipic_5F_JUMP_24848.ptr (), var_symbolTable_23829, var_idx_24342, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24086, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
                  }
                }
                if (kBoolFalse == test_1) {
                  enumGalgasBool test_2 = kBoolTrue ;
                  if (kBoolTrue == test_2) {
                    GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_ipic_5F_literal_25269 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_instruction_24517.ptr ())) ;
                    if (NULL == var_ipic_5F_literal_25269.ptr ()) {
                      test_2 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_2) {
                      callExtensionMethod_optimizeMOVLW ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_ipic_5F_literal_25269.ptr (), var_idx_24342, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24086, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
                    }
                  }
                  if (kBoolFalse == test_2) {
                    enumGalgasBool test_3 = kBoolTrue ;
                    if (kBoolTrue == test_3) {
                      GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition var_ipic_5F_decInc_25565 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (var_instruction_24517.ptr ())) ;
                      if (NULL == var_ipic_5F_decInc_25565.ptr ()) {
                        test_3 = kBoolFalse ;
                      }
                      if (kBoolTrue == test_3) {
                        callExtensionMethod_optimizeTestDecInc ((const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) var_ipic_5F_decInc_25565.ptr (), var_symbolTable_23829, var_idx_24342, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24086, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)) ;
                      }
                    }
                    if (kBoolFalse == test_3) {
                      enumGalgasBool test_4 = kBoolTrue ;
                      if (kBoolTrue == test_4) {
                        GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip var_ipic_5F_bitTestSkip_25876 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (var_instruction_24517.ptr ())) ;
                        if (NULL == var_ipic_5F_bitTestSkip_25876.ptr ()) {
                          test_4 = kBoolFalse ;
                        }
                        if (kBoolTrue == test_4) {
                          callExtensionMethod_optimizeBitTestSkip ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) var_ipic_5F_bitTestSkip_25876.ptr (), var_idx_24342, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24086, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)) ;
                        }
                      }
                    }
                  }
                }
              }
              var_idx_24342 = var_idx_24342.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)) ;
            }
          }
        }
        GALGAS_stringset var_referencedLabels_26259 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 585)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26304 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_26304.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26304.current_mInstruction (HERE).ptr (), var_referencedLabels_26259, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 587)) ;
          enumerator_26304.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_26426 (var_symbolTable_23829, kENUMERATION_UP) ;
        while (enumerator_26426.hasCurrentObject ()) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_referencedLabels_26259.getter_hasKey (enumerator_26426.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 590)).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_uint var_definitionLine_26566 ;
              GALGAS_bool joker_26568 ; // Joker input parameter
              var_symbolTable_23829.method_searchKey (enumerator_26426.current_lkey (HERE), var_definitionLine_26566, joker_26568, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_26566.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (enumerator_26426.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 593)), var_definitionLine_26566, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 593)) ;
              }
              {
              GALGAS_uint joker_26843 ; // Joker input parameter
              GALGAS_bool joker_26846 ; // Joker input parameter
              var_symbolTable_23829.setter_removeKey (enumerator_26426.current_lkey (HERE), joker_26843, joker_26846, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 594)) ;
              }
            }
          }
          enumerator_26426.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_26919 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_26960 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_27013 = GALGAS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_27043 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_27029 ((uint32_t) 0) ;
        while (enumerator_27043.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_reachable_26919.operator_or (var_previousWasSkippingInstruction_27013 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 602)).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_reachable_26919 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27043.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 603)) ;
              var_previousWasSkippingInstruction_27013 = var_skippingInstruction_26960 ;
              var_skippingInstruction_26960 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27043.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 605)) ;
            }
          }
          if (kBoolFalse == test_6) {
            GALGAS_bool var_isLABELorORG_27378 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27043.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 607)) ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = var_isLABELorORG_27378.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27043.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).boolEnum () ;
              if (kBoolTrue == test_7) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_27029.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)).add_operation (GALGAS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 610)), index_27029, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 610)) ;
                }
              }
            }
            if (kBoolFalse == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_isLABELorORG_27378.boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_reachable_26919 = GALGAS_bool (true) ;
                  var_previousWasSkippingInstruction_27013 = GALGAS_bool (false) ;
                  var_skippingInstruction_26960 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_27043.gotoNextObject () ;
          index_27029.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 601)) ;
        }
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_optimizationsDone_24086.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 618)).boolEnum () ;
          if (kBoolTrue == test_9) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 619)) ;
            GALGAS_uint var_currentAddress_28005 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_28033 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
            while (enumerator_28033.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_28033.current_mInstruction (HERE).ptr (), var_currentAddress_28005, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 623)) ;
              enumerator_28033.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_28005.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)).add_operation (GALGAS_string (" instructions\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)) ;
          }
        }
      }
    }
  }
}


