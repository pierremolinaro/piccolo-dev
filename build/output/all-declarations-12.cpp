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
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7929, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7929, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_8352_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7929, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8352_instr ;
            var_found_8086 = GALGAS_bool (true) ;
          }else{
            var_currentAddress_7929.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 213)) ;
          }
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
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 225)) ;
  GALGAS_uint var_currentAddress_8867 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 229)) ;
  GALGAS_bool var_found_9024 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).isValid ()) {
    uint32_t variant_9039 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).uintValue () ;
    bool loop_9039 = true ;
    while (loop_9039) {
      loop_9039 = GALGAS_bool (kIsStrictInf, var_currentAddress_8867.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_9024.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid () ;
      if (loop_9039) {
        loop_9039 = GALGAS_bool (kIsStrictInf, var_currentAddress_8867.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_9024.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).boolValue () ;
      }
      if (loop_9039 && (0 == variant_9039)) {
        loop_9039 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 231)) ;
      }
      if (loop_9039) {
        variant_9039 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8867, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8867, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_9290_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8867, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9290_instr ;
            var_found_9024 = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8867, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE cast_9398_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8867, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9398_instr ;
            var_found_9024 = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8867, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL cast_9507_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8867, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9507_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_9507_instr.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 243)) ;
            var_currentAddress_8867.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 244)) ;
          }else{
            var_currentAddress_8867.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 246)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)) ;
  GALGAS_baselineSymbolTableForOptimizations var_symbolTable_20761 = GALGAS_baselineSymbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("baseline_optimizations.galgas", 525)) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_20830 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_20816 ((uint32_t) 0) ;
  while (enumerator_20830.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_20830.current_mInstruction (HERE).ptr (), var_symbolTable_20761, index_20816, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 527)) ;
    enumerator_20830.gotoNextObject () ;
    index_20816.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 526)) ;
  }
  GALGAS_bool var_optimizationsDone_21026 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_21055 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).isValid ()) {
    uint32_t variant_21066 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).uintValue () ;
    bool loop_21066 = true ;
    while (loop_21066) {
      loop_21066 = var_optimizationsDone_21026.isValid () ;
      if (loop_21066) {
        loop_21066 = var_optimizationsDone_21026.boolValue () ;
      }
      if (loop_21066 && (0 == variant_21066)) {
        loop_21066 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 532)) ;
      }
      if (loop_21066) {
        variant_21066 -- ;
        var_optimizationsDone_21026 = GALGAS_bool (false) ;
        var_iteration_21055.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 536)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_21055.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21292 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_21278 ((uint32_t) 0) ;
        while (enumerator_21292.hasCurrentObject ()) {
          if (enumerator_21292.current_mInstruction (HERE).isValid ()) {
            if (enumerator_21292.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) {
              GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE cast_21419_inst ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) enumerator_21292.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) cast_21419_inst.ptr (), index_21278, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21026, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 542)) ;
            }else if (enumerator_21292.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
              GALGAS_baseline_5F_intermediate_5F_GOTO cast_21580_inst ((cPtr_baseline_5F_intermediate_5F_GOTO *) enumerator_21292.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeGOTO ((const cPtr_baseline_5F_intermediate_5F_GOTO *) cast_21580_inst.ptr (), var_symbolTable_20761, index_21278, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21026, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
            }else if (enumerator_21292.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
              GALGAS_baseline_5F_intermediate_5F_JUMP cast_21745_inst ((cPtr_baseline_5F_intermediate_5F_JUMP *) enumerator_21292.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJUMP ((const cPtr_baseline_5F_intermediate_5F_JUMP *) cast_21745_inst.ptr (), var_symbolTable_20761, index_21278, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21026, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 546)) ;
            }else if (enumerator_21292.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL) {
              GALGAS_baseline_5F_intermediate_5F_CALL cast_21910_inst ((cPtr_baseline_5F_intermediate_5F_CALL *) enumerator_21292.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeCALL ((const cPtr_baseline_5F_intermediate_5F_CALL *) cast_21910_inst.ptr (), var_symbolTable_20761, index_21278, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21026, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
            }else if (enumerator_21292.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR) {
              GALGAS_baseline_5F_intermediate_5F_JSR cast_22074_inst ((cPtr_baseline_5F_intermediate_5F_JSR *) enumerator_21292.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJSR ((const cPtr_baseline_5F_intermediate_5F_JSR *) cast_22074_inst.ptr (), var_symbolTable_20761, index_21278, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21026, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 550)) ;
            }else if (enumerator_21292.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition cast_22259_inst ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_21292.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeTestDecInc ((const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) cast_22259_inst.ptr (), var_symbolTable_20761, index_21278, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21026, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 552)) ;
            }
          }
          enumerator_21292.gotoNextObject () ;
          index_21278.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
        }
        GALGAS_stringset var_referencedLabels_22473 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 557)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22518 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_22518.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_22518.current_mInstruction (HERE).ptr (), var_referencedLabels_22473, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 559)) ;
          enumerator_22518.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_22638 (var_symbolTable_20761, kENUMERATION_UP) ;
        while (enumerator_22638.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = var_referencedLabels_22473.getter_hasKey (enumerator_22638.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 562)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 562)).boolEnum () ;
            if (kBoolTrue == test_0) {
              GALGAS_uint var_definitionLine_22778 ;
              var_symbolTable_20761.method_searchKey (enumerator_22638.current_lkey (HERE), var_definitionLine_22778, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 563)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_22778.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (enumerator_22638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 565)), var_definitionLine_22778, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 565)) ;
              }
              {
              GALGAS_uint joker_23052 ; // Joker input parameter
              var_symbolTable_20761.setter_removeKey (enumerator_22638.current_lkey (HERE), joker_23052, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 566)) ;
              }
            }
          }
          enumerator_22638.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_23125 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_23166 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_23219 = GALGAS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23249 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_23235 ((uint32_t) 0) ;
        while (enumerator_23249.hasCurrentObject ()) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_reachable_23125.operator_or (var_previousWasSkippingInstruction_23219 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 574)).boolEnum () ;
            if (kBoolTrue == test_1) {
              var_reachable_23125 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23249.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 575)) ;
              var_previousWasSkippingInstruction_23219 = var_skippingInstruction_23166 ;
              var_skippingInstruction_23166 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23249.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
            }
          }
          if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABEL_23579 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23249.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 579)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = var_isLABEL_23579.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23249.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
              if (kBoolTrue == test_2) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_23235.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 582)), index_23235, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
                }
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = var_isLABEL_23579.boolEnum () ;
                if (kBoolTrue == test_3) {
                  var_reachable_23125 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23249.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
                  var_previousWasSkippingInstruction_23219 = GALGAS_bool (false) ;
                  var_skippingInstruction_23166 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_23249.gotoNextObject () ;
          index_23235.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 573)) ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_optimizationsDone_21026.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 590)).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
            GALGAS_uint var_currentAddress_24205 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24233 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
            while (enumerator_24233.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24233.current_mInstruction (HERE).ptr (), var_currentAddress_24205, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
              enumerator_24233.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_24205.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)).add_operation (GALGAS_string (" words\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
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
  GALGAS_uint var_targetAddress_8548 ;
  const GALGAS_baseline_5F_assembly_5F_CALL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_8548, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 228)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_CALL temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2304U).operator_or (var_targetAddress_8548.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)) ;
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
  GALGAS_uint var_code_9013 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_9013 = GALGAS_uint ((uint32_t) 960U) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_9013 = GALGAS_uint ((uint32_t) 704U) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_3 = object ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 245)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_9013 = var_code_9013.operator_or (GALGAS_uint ((uint32_t) 32U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 246)) ;
    }
  }
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = object ;
  var_code_9013 = var_code_9013.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_5 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_9013, ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 249)) ;
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
  GALGAS_uint var_code_9615 ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = object ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW:
    {
      var_code_9615 = GALGAS_uint ((uint32_t) 64U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP:
    {
      var_code_9615 = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT:
    {
      var_code_9615 = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_:
    {
      var_code_9615 = GALGAS_uint ((uint32_t) 2U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP:
    {
      var_code_9615 = GALGAS_uint ((uint32_t) 3U) ;
    }
    break ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_9615, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 266)) ;
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
  routine_emitBaselineCodeAtWordAddress (temp_0.readProperty_mOpcode (), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 275)) ;
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
  GALGAS_uint var_code_10552 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = object ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_10552 = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_10552 = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_10552 = GALGAS_uint ((uint32_t) 3072U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      var_code_10552 = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_10552 = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = object ;
  var_code_10552 = var_code_10552.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 292)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_2 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_10552, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 293)) ;
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
  GALGAS_uint var_targetAddress_11142 ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_11142, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_targetAddress_11142.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_2 = object ;
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (var_targetAddress_11142.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 307)), fixItArray4  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)) ;
    }
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_5 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 309)) ;
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
  GALGAS_baseline_5F_symbolTable var_symbolTable_12209 = GALGAS_baseline_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("baseline_build_binary_code.galgas", 324)) ;
  GALGAS_uint var_currentWordAddress_12274 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12298 (constinArgument_inAssemblyInstructionList, kENUMERATION_UP) ;
  while (enumerator_12298.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12298.current_mInstruction (HERE).ptr (), var_symbolTable_12209, var_currentWordAddress_12274, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 327)) ;
    enumerator_12298.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_12448 = var_currentWordAddress_12274 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12274 ;
  var_currentWordAddress_12274 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
  }
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12637 (constinArgument_inAssemblyInstructionList, kENUMERATION_UP) ;
  while (enumerator_12637.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12637.current_mInstruction (HERE).ptr (), var_symbolTable_12209, ioArgument_ioListFileContents, var_currentWordAddress_12274, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 335)) ;
    {
    routine_checkCurrentEmitAddress (var_currentWordAddress_12274.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)) ;
    }
    enumerator_12637.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_12448.objectCompare (var_currentWordAddress_12274)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12274.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (var_lastAddressForFirstPass_12448.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 344)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_12448.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12448.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 348)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)) ;
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
  GALGAS_bitSliceTable var_bitSliceTable_18415 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18487 ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_0 = object ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18487, var_bitSliceTable_18415, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 512)) ;
  GALGAS_uint var_bitNumber_18714 ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18415, var_bitNumber_18714, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 522)) ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_2 = object ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_18487, var_bitNumber_18714  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 529))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 529)) ;
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
  GALGAS_bool var_isNoReturn_19718 ;
  GALGAS_uint var_requiredBank_19743 ;
  GALGAS_uint var_returnedBank_19768 ;
  GALGAS_bool var_preservesBank_19794 ;
  const GALGAS_midrange_5F_instruction_5F_JSR temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_19718, var_requiredBank_19743, var_returnedBank_19768, var_preservesBank_19794, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_19743.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_19743.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_JSR temp_2 = object ;
      GALGAS_string var_errorMessage_19997 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)).add_operation (var_requiredBank_19743.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)) ;
      var_errorMessage_19997.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 560)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 561)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_19997.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 562)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_19997.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 564)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_JSR temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_19997, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 566)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_19718.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_JSR temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 569)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_19794.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 571)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_19768 ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_JSR temp_10 = object ;
  const GALGAS_midrange_5F_instruction_5F_JSR temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 578)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 579))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 575))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 575)) ;
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
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 599)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 600)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_midrangeInstruction_5F_checkbank temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 601)) ;
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
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 624)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrangeInstruction_5F_checknobank temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 626)) ;
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
  GALGAS_bool var_isNoReturn_23396 ;
  GALGAS_uint var_requiredBank_23421 ;
  GALGAS_uint var_returnedBank_23446 ;
  GALGAS_bool var_preservesBank_23472 ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_23396, var_requiredBank_23421, var_returnedBank_23446, var_preservesBank_23472, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 650)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_23421.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_23421.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_2 = object ;
      GALGAS_string var_errorMessage_23675 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)).add_operation (var_requiredBank_23421.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)) ;
      var_errorMessage_23675.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 653)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 654)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_23675.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_23675.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_CALL temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23675, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 659)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_23396.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 662)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_23472.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 664)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23446 ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_CALL temp_10 = object ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 668))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 668)) ;
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
  GALGAS_bool var_isNoReturn_25053 ;
  GALGAS_uint var_requiredBank_25078 ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_0 = object ;
  GALGAS_uint joker_25151 ; // Joker input parameter
  GALGAS_bool joker_25154 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_25053, var_requiredBank_25078, joker_25151, joker_25154, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 691)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_25078.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_25078.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_2 = object ;
      GALGAS_string var_errorMessage_25258 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)).add_operation (var_requiredBank_25078.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)) ;
      var_errorMessage_25258.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 694)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 695)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_25258.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 696)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_25258.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 698)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 698)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_25258, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 700)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_25053.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 702)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 703)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_9 = object ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_10 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 710)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 711))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 707))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 707)) ;
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
  GALGAS_bool var_isNoReturn_26677 ;
  GALGAS_uint var_requiredBank_26702 ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_0 = object ;
  GALGAS_uint joker_26775 ; // Joker input parameter
  GALGAS_bool joker_26778 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26677, var_requiredBank_26702, joker_26775, joker_26778, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 732)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_26702.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_26702.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_2 = object ;
      GALGAS_string var_errorMessage_26882 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)).add_operation (var_requiredBank_26702.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)) ;
      var_errorMessage_26882.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 735)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 736)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_26882.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 737)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_26882.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 739)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 739)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 739)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26882, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 741)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_26677.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 743)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 744)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_9 = object ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_10 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 748))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 748)) ;
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 768))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 768)) ;
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 787))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 787)) ;
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 806))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 806)) ;
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 825))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 825)) ;
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
  GALGAS_sint_36__34_ var_result_31362 ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_31362, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 844)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_31362.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_31362.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_literalOperation temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_31362.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_4 = object ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_31362.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 853)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 853)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 853))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 850))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 850)) ;
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
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 873)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_4 = object ;
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 876))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 876)) ;
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
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 898)) ;
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
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 901)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_33674 = ioArgument_ioCurrentBank ;
  GALGAS_string var_label_30__33711 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 905)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 906)) ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__33711, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)) ;
  {
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_5 = object ;
  routine_handleMidrangeInstructionList (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33674, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 908)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33674)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GALGAS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 924)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_9 = object ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_10 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_9.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_30__33711, temp_10.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 929))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 927))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 927)) ;
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
  GALGAS_sint_36__34_ var_lowerBound_35324 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_35324, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 950)) ;
  GALGAS_sint_36__34_ var_upperBound_35434 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_35434, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 951)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_lowerBound_35324.objectCompare (var_upperBound_35434)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_35324.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)).add_operation (var_upperBound_35434.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_upperBound_35434.substract_operation (var_lowerBound_35324, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 955)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_35434.substract_operation (var_lowerBound_35324, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_35841 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_35879 = constinArgument_inConstantMap ;
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = object ;
  var_tempConstantMap_35879.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_35324, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 961)) ;
  }
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = object ;
  routine_handleMidrangeInstructionList (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35879, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35841, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 962)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35841)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 978)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 980)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list contains an endless loop"), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 981)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_36599 = var_lowerBound_35324.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)) ;
  if (var_upperBound_35434.substract_operation (var_lowerBound_35324, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).isValid ()) {
    uint32_t variant_36623 = var_upperBound_35434.substract_operation (var_lowerBound_35324, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).uintValue () ;
    bool loop_36623 = true ;
    while (loop_36623) {
      GALGAS_bool test_16 = GALGAS_bool (kIsInfOrEqual, var_idx_36599.objectCompare (var_upperBound_35434)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_36623 = test_16.isValid () ;
      if (loop_36623) {
        loop_36623 = test_16.boolValue () ;
      }
      if (loop_36623 && (0 == variant_36623)) {
        loop_36623 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)) ;
      }
      if (loop_36623) {
        variant_36623 -- ;
        GALGAS_constantMap var_constantMap_36736 = constinArgument_inConstantMap ;
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = object ;
        var_constantMap_36736.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_36599, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 987)) ;
        }
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = object ;
        routine_handleMidrangeInstructionList (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36736, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 988)) ;
        }
        var_idx_36599.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1003)) ;
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
  GALGAS_bitSliceTable var_bitSliceTable_37824 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37896 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37896, var_bitSliceTable_37824, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1024)) ;
  GALGAS_uint var_bitNumber_38123 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37824, var_bitNumber_38123, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1034)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = object ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37896, var_bitNumber_38123  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1041))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1041)) ;
  GALGAS_bool var_unusedContinuesInSequence_38504 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = object ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_38504, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1049)) ;
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
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_40287 ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_0 = object ;
  GALGAS_bitSliceTable joker_40453 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_40287, joker_40453, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1102)) ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_1 = object ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_2 = object ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_IPICregisterDescription_40287, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1118))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1112))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1112)) ;
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
    test_0 = temp_1.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1126)).boolEnum () ;
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
  callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1153)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1147)) ;
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
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1168)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1167)) ;
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
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1188)) ;
      const GALGAS_midrange_5F_andCondition temp_2 = object ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1201)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__43586 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1215)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1215)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1215)) ;
    const GALGAS_midrange_5F_andCondition temp_3 = object ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__43586, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1216)) ;
    const GALGAS_midrange_5F_andCondition temp_4 = object ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1229)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__43586, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1242)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1242))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1242)) ;
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
  GALGAS_uint var_countLeft_44680 ;
  const GALGAS_midrange_5F_andCondition temp_0 = object ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_44680, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1252)) ;
  GALGAS_uint var_countRight_44809 ;
  const GALGAS_midrange_5F_andCondition temp_1 = object ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44809, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1257)) ;
  outArgument_outInstructionCount = var_countLeft_44680.add_operation (var_countRight_44809, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1261)) ;
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
  GALGAS_bitSliceTable var_bitSliceTable_45583 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_45655 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = object ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_45655, var_bitSliceTable_45583, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1280)) ;
  GALGAS_uint var_bitNumber_45882 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_45583, var_bitNumber_45882, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1290)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_45655, var_bitNumber_45882  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1297))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1297)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1305)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1306)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1307))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1303))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1303)) ;
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
  GALGAS_bool var_generateComplementaryCondition_47393 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_directCount_47524 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_1 = object ;
      callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GALGAS_bool (true), var_directCount_47524, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1337)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_3 = object ;
        test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_directCount_47524.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1339)) ;
        }
      }
      GALGAS_uint var_complementaryCount_47712 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_4 = object ;
      callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GALGAS_bool (false), var_complementaryCount_47712, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1341)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_6 = object ;
        test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1342)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_complementaryCount_47712.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1343)) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsStrictInf, var_complementaryCount_47712.objectCompare (var_directCount_47524)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_generateComplementaryCondition_47393 = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).add_operation (GALGAS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).add_operation (var_directCount_47524.substract_operation (var_complementaryCount_47712, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1348)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).add_operation (GALGAS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1348)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_directCount_47524.substract_operation (var_complementaryCount_47712, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1349)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1350)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1352)) ;
        }
      }
    }
  }
  GALGAS_uint var_elseBranchFinalBank_48345 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_48393 = ioArgument_ioCurrentBank ;
  GALGAS_bool var_elseContinuesInSequence_48445 ;
  GALGAS_bool var_thenContinuesInSequence_48481 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_47393.boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string var_label_5F_nextCondition_48565 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)) ;
      GALGAS_string var_label_5F_endOfIfinstruction_48663 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1362)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1362)) ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_10 = object ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_11 = object ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_48565, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1364)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_12 = object ;
      routine_handleMidrangeInstructionList (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_48345, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_48445, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1378)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_14 = object ;
        test_13 = GALGAS_bool (kIsStrictSup, temp_14.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_15 = object ;
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_16 = object ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_15.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_48663, temp_16.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_17 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_48565, temp_17.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_18 = object ;
      routine_handleMidrangeInstructionList (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_48393, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_48481, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1398)) ;
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_20 = object ;
        test_19 = GALGAS_bool (kIsStrictSup, temp_20.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1413)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_19) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_21 = object ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_48663, temp_21.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1414)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1414))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1414)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_label_5F_nextCondition_50553 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_50651 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1419)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1419)) ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_22 = object ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_23 = object ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_50553, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1421)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_24 = object ;
    routine_handleMidrangeInstructionList (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_48393, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_48481, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1435)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_26 = object ;
      test_25 = GALGAS_bool (kIsStrictSup, temp_26.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_27 = object ;
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_28 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_27.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_50651, temp_28.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452)) ;
      }
    }
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_29 = object ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_50553, temp_29.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_30 = object ;
    routine_handleMidrangeInstructionList (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_48345, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_48445, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1455)) ;
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_32 = object ;
      test_31 = GALGAS_bool (kIsStrictSup, temp_32.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1470)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_31) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_33 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_50651, temp_33.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1471)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1471))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1471)) ;
      }
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    test_34 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_48345.objectCompare (var_thenBranchFinalBank_48393)).boolEnum () ;
    if (kBoolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_48345 ;
    }
  }
  if (kBoolFalse == test_34) {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_35 = object ;
    TC_Array <C_FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1477)) ;
    var_elseBranchFinalBank_48345 = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1478)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_48481.operator_or (var_elseContinuesInSequence_48445 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1481)) ;
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
  GALGAS_string var_labelInstructionBegin_53510 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_0 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_53510, temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1502)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1502))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1502)) ;
  GALGAS_uint var_finalBank_53785 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_1 = object ;
  routine_handleMidrangeInstructionList (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_53785, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1505)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_53785)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1521)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_5 = object ;
  cEnumerator_midrange_5F_partList enumerator_54365 (temp_5.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_54365.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, enumerator_54365.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1525)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_7 = object ;
        callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_54365.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_53510, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1526)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_string var_nextBranchLabel_54836 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1540)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1540)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_8 = object ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_54365.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_54836, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1541)) ;
      GALGAS_uint var_bank_55264 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList (enumerator_54365.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_55264, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1555)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_55264)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_54365.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1571)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_11 = object ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_12 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_11.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_labelInstructionBegin_53510, temp_12.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_13 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_54836, temp_13.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1574)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1574))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1574)) ;
    }
    enumerator_54365.gotoNextObject () ;
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
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_56786 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_56786 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1597)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_baseCode_56786 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1599)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_57018 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = object ;
  GALGAS_bitSliceTable joker_57184 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_57018, joker_57184, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1603)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = object ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_3.readProperty_mInstructionLocation (), var_baseCode_56786, var_IPICregisterDescription_57018, temp_4.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1613))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1613)) ;
  GALGAS_bool var_unusedContinuesInSequence_57443 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = object ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_57443, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1621)) ;
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
  GALGAS_string var_generationOptimizationMessages_58357 = GALGAS_string::makeEmptyString () ;
  GALGAS_routineMap var_routineMap_58431 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_58536 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_58536.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_58536.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1655)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_58536.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1655)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_58536.current_mRequiredBank (HERE).readProperty_location (), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_58536.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_58536.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_58536.current_mReturnedBank (HERE).readProperty_location (), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
      }
    }
    {
    var_routineMap_58431.setter_insertKey (enumerator_58536.current_mRoutineName (HERE), enumerator_58536.current_mIsNoReturn (HERE), enumerator_58536.current_mRequiredBank (HERE).readProperty_uint (), enumerator_58536.current_mReturnedBank (HERE).readProperty_uint (), enumerator_58536.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)) ;
    }
    enumerator_58536.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1679)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_routineMap_58431.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1685)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_bool var_isNoReturn_60123 ;
      GALGAS_uint var_requiredBank_60147 ;
      GALGAS_uint joker_60149 ; // Joker input parameter
      GALGAS_bool joker_60152 ; // Joker input parameter
      var_routineMap_58431.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686)), var_isNoReturn_60123, var_requiredBank_60147, joker_60149, joker_60152, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686)) ;
      GALGAS_location var_mainDeclarationLocation_60196 = var_routineMap_58431.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1687)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_isNoReturn_60123.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1688)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_60196, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1689)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_60147.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_60196, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1692)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_5) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1695)) ;
  }
  GALGAS_uint var_localLabelIndex_60771 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_handleInterruptRoutine (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_58431, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_58357, var_localLabelIndex_60771, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1699)) ;
  }
  GALGAS_uint var_currentPage_61197 = GALGAS_uint ((uint32_t) 0U) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_61208 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_61208 = true ;
    while (loop_61208) {
      loop_61208 = GALGAS_bool (kIsStrictInf, var_currentPage_61197.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_61208) {
        loop_61208 = GALGAS_bool (kIsStrictInf, var_currentPage_61197.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_61208 && (0 == variant_61208)) {
        loop_61208 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1716)) ;
      }
      if (loop_61208) {
        variant_61208 -- ;
        GALGAS_bool var_orgGenerated_61294 = GALGAS_bool (kIsEqual, var_currentPage_61197.objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_61439 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
        while (enumerator_61439.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_61439.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_61197)).boolEnum () ;
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_orgGenerated_61294.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (var_currentPage_61197.multiply_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)) ;
                  var_orgGenerated_61294 = GALGAS_bool (true) ;
                }
              }
              GALGAS_bool var_continuesInSequence_61742 ;
              GALGAS_uint var_currentBank_61772 = enumerator_61439.current_mRequiredBank (HERE).readProperty_uint () ;
              GALGAS_routineKind var_routineKind_61830 ;
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = enumerator_61439.current_mIsNoReturn (HERE).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_routineKind_61830 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_routineKind_61830 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730)) ;
              }
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_61439.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732)) ;
              {
              routine_handleMidrangeInstructionList (enumerator_61439.current_mInstructionList (HERE), var_routineMap_58431, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_60771, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_58357, constinArgument_inTotalBankCount, var_currentBank_61772, enumerator_61439.current_mPreservesBank (HERE), var_continuesInSequence_61742, var_routineKind_61830, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1733)) ;
              }
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = enumerator_61439.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_61439.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_61772.objectCompare (enumerator_61439.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_61439.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_61439.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)) ;
                }
              }
              enumGalgasBool test_16 = kBoolTrue ;
              if (kBoolTrue == test_16) {
                test_16 = enumerator_61439.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_61742 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1751)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <C_FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_61439.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1752)) ;
                }
              }
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = enumerator_61439.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1755)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (enumerator_61439.current_mRoutineName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1756))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1756)) ;
                }
              }
            }
          }
          enumerator_61439.gotoNextObject () ;
        }
        var_currentPage_61197.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1760)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1766)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1766)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1766)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1767)) ;
      GALGAS_uint var_idx_63579 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_uint var_currentAddress_63612 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_63638 (outArgument_outGeneratedInstructionList, kENUMERATION_UP) ;
      while (enumerator_63638.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_63638.current_mInstruction (HERE).ptr (), var_currentAddress_63612, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_idx_63579.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)) ;
        callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_63638.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1774)) ;
        var_idx_63579.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1775)) ;
        enumerator_63638.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1777)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_63612.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).add_operation (GALGAS_string (" instructions.\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1789)) ;
  outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_64460 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_64460.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_64460.current_mPage (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GALGAS_bool (true) ;
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsSupOrEqual, enumerator_64460.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_64460.current_mPage (HERE).readProperty_location (), GALGAS_string ("invalid value (").add_operation (enumerator_64460.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)) ;
      }
    }
    enumerator_64460.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1800)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1801)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_65037 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)).isValidAndTrue () ;
      if (enumerator_65037.hasCurrentObject () && bool_5) {
        while (enumerator_65037.hasCurrentObject () && bool_5) {
          cEnumerator_midrange_5F_instructionList enumerator_65139 (enumerator_65037.current_mInstructionList (HERE), kENUMERATION_UP) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1807)).isValidAndTrue () ;
          if (enumerator_65139.hasCurrentObject () && bool_6) {
            while (enumerator_65139.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((const cPtr_midrange_5F_instruction *) enumerator_65139.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1808)) ;
              enumerator_65139.gotoNextObject () ;
              if (enumerator_65139.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1807)).isValidAndTrue () ;
              }
            }
          }
          enumerator_65037.gotoNextObject () ;
          if (enumerator_65037.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1812)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1814)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)) ;
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
  outArgument_outGeneratedInstructionList = GALGAS_midrange_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1841)) ;
  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1844)), GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1845))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1845)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1846)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1847))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1843))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1843)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
      GALGAS_bool var_shouldSavePCLATH_67413 ;
      {
      routine_interruptRoutineShouldSavePCLATH (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_67413, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1854)) ;
      }
      outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint ((uint32_t) 4U)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1861))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1861)) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_67600 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
      while (enumerator_67600.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSharedRAMBankName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_67600.current_mFirstSaveRegister (HERE), enumerator_67600.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_67413, enumerator_67600.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_67600.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1864)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_67600.current_mFirstSaveRegister (HERE), enumerator_67600.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_67413, enumerator_67600.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_67600.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1880)) ;
          }
        }
        enumerator_67600.gotoNextObject () ;
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
  GALGAS_uintlist var_registerAddressList_69517 ;
  GALGAS_uint var_size_69529 ;
  GALGAS_registerProtection var_firstProtection_69554 ;
  GALGAS_bitSliceTable joker_69531_2 ; // Joker input parameter
  GALGAS_string joker_69531_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_69517, var_size_69529, joker_69531_2, joker_69531_1, var_firstProtection_69554, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1917)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_69554, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) ;
  GALGAS_uint var_bankAccessibility_69674 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_69692 (var_registerAddressList_69517, kENUMERATION_UP) ;
  while (enumerator_69692.hasCurrentObject ()) {
    var_bankAccessibility_69674 = var_bankAccessibility_69674.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_69692.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) ;
    enumerator_69692.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_bankAccessibility_69674.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)).objectCompare (GALGAS_uint ((uint32_t) 1U).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_size_69529.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)).add_operation (var_size_69529.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)) ;
    }
  }
  GALGAS_registerProtection var_secondProtection_70328 ;
  GALGAS_bitSliceTable joker_70304_2 ; // Joker input parameter
  GALGAS_string joker_70304_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_69517, var_size_69529, joker_70304_2, joker_70304_1, var_secondProtection_70328, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_70328, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1931)) ;
  var_bankAccessibility_69674 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_70458 (var_registerAddressList_69517, kENUMERATION_UP) ;
  while (enumerator_70458.hasCurrentObject ()) {
    var_bankAccessibility_69674 = var_bankAccessibility_69674.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_70458.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)) ;
    enumerator_70458.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, var_bankAccessibility_69674.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_69529.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1939)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)).add_operation (var_size_69529.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1941)).operator_and (GALGAS_bool (kIsNotEqual, var_size_69529.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1941)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)).add_operation (var_size_69529.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)) ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1945)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_registerExpression var_first_5F_register_71160 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1946)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_71362 ;
      GALGAS_bitSliceTable joker_71526 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_71160.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_71362, joker_71526, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1952)) ;
      GALGAS_registerExpression var_second_5F_register_71581 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_71785 ;
      GALGAS_bitSliceTable joker_71982 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_second_5F_register_71581.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_71785, joker_71982, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1967)) ;
      GALGAS_registerExpression var_STATUS_5F_register_72075 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1978))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1978)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1980))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1977)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_72291 ;
      GALGAS_bitSliceTable joker_72466 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_72075.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_72291, joker_72466, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992)), var_first_5F_IPICregisterDescription_71362  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)), var_STATUS_5F_IPICregisterDescription_72291, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994)), var_STATUS_5F_IPICregisterDescription_72291  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)), var_second_5F_IPICregisterDescription_71785  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_registerExpression var_reg_73229 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2000))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73688 ;
          GALGAS_bitSliceTable joker_73698 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_73229.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73688, joker_73698, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2003)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_73799 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2016))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2013)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_74036 ;
          GALGAS_bitSliceTable joker_74225 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_73799.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2021)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_74036, joker_74225, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2019)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028)), var_PCLATH_5F_IPICregisterDescription_74036, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73688  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030)), var_PCLATH_5F_IPICregisterDescription_74036  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030)) ;
        }
      }
      GALGAS_bool var_continuesInSequence_74862 ;
      GALGAS_uint var_currentBank_74888 = GALGAS_uint ((uint32_t) 0U) ;
      {
      routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_74888, GALGAS_bool (false), var_continuesInSequence_74862, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2047)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2035)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_continuesInSequence_74862.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_registerExpression var_reg_75525 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_75870 ;
          GALGAS_bitSliceTable joker_75880 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_75525.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_75870, joker_75880, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_75981 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2070))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2070)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2072))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2069)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_76217 ;
          GALGAS_bitSliceTable joker_76406 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_75981.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2077)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_76217, joker_76406, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2075)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_75870, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), var_PCLATH_5F_IPICregisterDescription_76217  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)), var_second_5F_IPICregisterDescription_71785, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)), var_STATUS_5F_IPICregisterDescription_72291  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)), var_first_5F_IPICregisterDescription_71362, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), var_first_5F_IPICregisterDescription_71362, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)) ;
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
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2115)) ;
  GALGAS_uintlist var_registerAddressList_78554 ;
  GALGAS_uint var_size_78566 ;
  GALGAS_registerProtection var_firstProtection_78591 ;
  GALGAS_bitSliceTable joker_78568_2 ; // Joker input parameter
  GALGAS_string joker_78568_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_78554, var_size_78566, joker_78568_2, joker_78568_1, var_firstProtection_78591, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2116)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_78591, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2117)) ;
  GALGAS_bool var_accessibleFromBank_30__78713 = GALGAS_bool (false) ;
  GALGAS_uint var_offset_78740 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_78770 (var_registerAddressList_78554, kENUMERATION_UP) ;
  bool bool_0 = var_accessibleFromBank_30__78713.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).isValidAndTrue () ;
  if (enumerator_78770.hasCurrentObject () && bool_0) {
    while (enumerator_78770.hasCurrentObject () && bool_0) {
      var_offset_78740 = enumerator_78770.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)) ;
      var_accessibleFromBank_30__78713 = GALGAS_bool (kIsEqual, enumerator_78770.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_78770.gotoNextObject () ;
      if (enumerator_78770.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__78713.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__78713.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_78566.objectCompare (GALGAS_uint ((uint32_t) 3U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2127)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)).add_operation (var_size_78566.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)).operator_and (GALGAS_bool (kIsNotEqual, var_size_78566.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)).add_operation (var_size_78566.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)) ;
      }
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList_79556 = var_registerAddressList_78554 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2134)) ;
  GALGAS_registerProtection var_secondProtection_79732 ;
  GALGAS_bitSliceTable joker_79708_2 ; // Joker input parameter
  GALGAS_string joker_79708_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_78554, var_size_78566, joker_79708_2, joker_79708_1, var_secondProtection_79732, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2135)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_79732, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)) ;
  var_saveStatusRegisterAddressList_79556 = var_saveStatusRegisterAddressList_79556.add_operation (var_registerAddressList_78554, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2137)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_size_78566.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).add_operation (var_size_78566.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)) ;
    }
  }
  GALGAS_bool var_accessibleFromBank_31__80143 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_80165 (var_registerAddressList_78554, kENUMERATION_UP) ;
  bool bool_9 = var_accessibleFromBank_31__80143.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)).isValidAndTrue () ;
  if (enumerator_80165.hasCurrentObject () && bool_9) {
    while (enumerator_80165.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__80143 = GALGAS_bool (kIsEqual, enumerator_80165.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2144)).objectCompare (GALGAS_uint ((uint32_t) 128U))) ;
      enumerator_80165.gotoNextObject () ;
      if (enumerator_80165.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__80143.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__80143.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)) ;
    }
  }
  GALGAS_bool var_offsetOk_80545 = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_80566 (var_registerAddressList_78554, kENUMERATION_UP) ;
  bool bool_12 = var_offsetOk_80545.isValidAndTrue () ;
  if (enumerator_80566.hasCurrentObject () && bool_12) {
    while (enumerator_80566.hasCurrentObject () && bool_12) {
      var_offsetOk_80545 = GALGAS_bool (kIsEqual, var_offset_78740.objectCompare (enumerator_80566.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2152)))) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_offsetOk_80545.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2153)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)).add_operation (enumerator_80566.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (var_offset_78740.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)) ;
        }
      }
      enumerator_80566.gotoNextObject () ;
      if (enumerator_80566.hasCurrentObject ()) {
        bool_12 = var_offsetOk_80545.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_registerExpression var_first_5F_register_81056 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2164))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2161)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_81258 ;
      GALGAS_bitSliceTable joker_81422 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_81056.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_81258, joker_81422, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2167)) ;
      GALGAS_registerExpression var_first_5F_register_5F_second_5F_byte_81488 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2179))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2176)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_81715 ;
      GALGAS_bitSliceTable joker_81908 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_81488.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_81715, joker_81908, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2182)) ;
      GALGAS_registerExpression var_STATUS_5F_register_82001 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2195))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_82236 ;
      GALGAS_bitSliceTable joker_82411 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_82001.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_82236, joker_82411, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2198)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), var_first_5F_IPICregisterDescription_81258  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)), var_STATUS_5F_IPICregisterDescription_82236, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209)), var_STATUS_5F_IPICregisterDescription_82236  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_81715  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_83213 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2214))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2214))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2214)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2215))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2212)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_83448 ;
          GALGAS_bitSliceTable joker_83652 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83213.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_83448, joker_83652, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2218)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_83753 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2230))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2230))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2230)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2228)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_83996 ;
          GALGAS_bitSliceTable joker_84185 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_83753.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_83996, joker_84185, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2234)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)), var_PCLATH_5F_IPICregisterDescription_83996, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_83448  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), var_PCLATH_5F_IPICregisterDescription_83996  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)) ;
        }
      }
      GALGAS_bool var_continuesInSequence_84828 ;
      GALGAS_uint var_currentBank_84854 = GALGAS_uint ((uint32_t) 0U) ;
      {
      routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_84854, GALGAS_bool (true), var_continuesInSequence_84828, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2250)) ;
      }
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_continuesInSequence_84828.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_19) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_85496 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 2U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2271))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2271))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2271)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2272))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2269)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_85876 ;
          GALGAS_bitSliceTable joker_85886 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_85496.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_85876, joker_85886, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2274)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_85987 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2285))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2285)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2286))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2286))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2286)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2287))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2284)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_86231 ;
          GALGAS_bitSliceTable joker_86420 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_85987.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_86231, joker_86420, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2290)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_85876, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300)), var_PCLATH_5F_IPICregisterDescription_86231  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_81715, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304)), var_STATUS_5F_IPICregisterDescription_82236  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305)), var_first_5F_IPICregisterDescription_81258, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306)), var_first_5F_IPICregisterDescription_81258, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2308))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2308))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2308)) ;
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
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6840, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6840, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_7263_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6840, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ()) ;
            outArgument_outFirstInstruction = cast_7263_instr ;
            var_found_6997 = GALGAS_bool (true) ;
          }else{
            var_currentAddress_6840.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 177)) ;
          }
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
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 189)) ;
  GALGAS_uint var_currentAddress_7778 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 193)) ;
  GALGAS_bool var_found_7935 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).isValid ()) {
    uint32_t variant_7950 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).uintValue () ;
    bool loop_7950 = true ;
    while (loop_7950) {
      loop_7950 = GALGAS_bool (kIsStrictInf, var_currentAddress_7778.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found_7935.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid () ;
      if (loop_7950) {
        loop_7950 = GALGAS_bool (kIsStrictInf, var_currentAddress_7778.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found_7935.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).boolValue () ;
      }
      if (loop_7950 && (0 == variant_7950)) {
        loop_7950 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 195)) ;
      }
      if (loop_7950) {
        variant_7950 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7778, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7778, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_8201_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7778, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8201_instr ;
            var_found_7935 = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7778, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG cast_8308_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7778, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8308_instr ;
            var_found_7935 = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7778, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL cast_8417_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7778, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8417_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_8417_instr.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 207)) ;
            var_currentAddress_7778.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 208)) ;
          }else{
            var_currentAddress_7778.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 210)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 533)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 533)) ;
  GALGAS_symbolTableForOptimizations var_symbolTable_22592 = GALGAS_symbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("midrange_optimizations.galgas", 535)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22653 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_22639 ((uint32_t) 0) ;
  while (enumerator_22653.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_22653.current_mInstruction (HERE).ptr (), var_symbolTable_22592, index_22639, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 537)) ;
    enumerator_22653.gotoNextObject () ;
    index_22639.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 536)) ;
  }
  GALGAS_bool var_optimizationsDone_22849 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_22878 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 542)).isValid ()) {
    uint32_t variant_22889 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 542)).uintValue () ;
    bool loop_22889 = true ;
    while (loop_22889) {
      loop_22889 = var_optimizationsDone_22849.isValid () ;
      if (loop_22889) {
        loop_22889 = var_optimizationsDone_22849.boolValue () ;
      }
      if (loop_22889 && (0 == variant_22889)) {
        loop_22889 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 542)) ;
      }
      if (loop_22889) {
        variant_22889 -- ;
        var_optimizationsDone_22849 = GALGAS_bool (false) ;
        var_iteration_22878.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_22878.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 547)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 547)) ;
        GALGAS_uint var_idx_23105 = GALGAS_uint ((uint32_t) 0U) ;
        if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 550)).isValid ()) {
          uint32_t variant_23118 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 550)).uintValue () ;
          bool loop_23118 = true ;
          while (loop_23118) {
            loop_23118 = GALGAS_bool (kIsStrictInf, var_idx_23105.objectCompare (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 550)))).isValid () ;
            if (loop_23118) {
              loop_23118 = GALGAS_bool (kIsStrictInf, var_idx_23105.objectCompare (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 550)))).boolValue () ;
            }
            if (loop_23118 && (0 == variant_23118)) {
              loop_23118 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 550)) ;
            }
            if (loop_23118) {
              variant_23118 -- ;
              GALGAS_midrange_5F_intermediate_5F_instruction var_instruction_23280 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (var_idx_23105, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 552)) ;
              if (var_instruction_23280.isValid ()) {
                if (var_instruction_23280.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
                  GALGAS_midrange_5F_intermediate_5F_GOTO cast_23411_ipic_GOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_instruction_23280.ptr ()) ;
                  callExtensionMethod_optimizeGOTO ((const cPtr_midrange_5F_intermediate_5F_GOTO *) cast_23411_ipic_GOTO.ptr (), var_symbolTable_22592, var_idx_23105, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22849, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 555)) ;
                }else if (var_instruction_23280.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
                  GALGAS_midrange_5F_intermediate_5F_JUMP cast_23586_ipic_JUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_instruction_23280.ptr ()) ;
                  callExtensionMethod_optimizeJUMP ((const cPtr_midrange_5F_intermediate_5F_JUMP *) cast_23586_ipic_JUMP.ptr (), var_symbolTable_22592, var_idx_23105, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22849, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
                }else if (var_instruction_23280.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
                  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_23954_ipic_literal ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_instruction_23280.ptr ()) ;
                  callExtensionMethod_optimizeMOVLW ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) cast_23954_ipic_literal.ptr (), var_idx_23105, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22849, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 561)) ;
                }else if (var_instruction_23280.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition) {
                  GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition cast_24143_ipic_decInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) var_instruction_23280.ptr ()) ;
                  callExtensionMethod_optimizeTestDecInc ((const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) cast_24143_ipic_decInc.ptr (), var_symbolTable_22592, var_idx_23105, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22849, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 563)) ;
                }else if (var_instruction_23280.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) {
                  GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip cast_24352_ipic_bitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) var_instruction_23280.ptr ()) ;
                  callExtensionMethod_optimizeBitTestSkip ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) cast_24352_ipic_bitTestSkip.ptr (), var_idx_23105, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22849, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)) ;
                }
              }
              var_idx_23105 = var_idx_23105.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
            }
          }
        }
        GALGAS_stringset var_referencedLabels_24586 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 571)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24631 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_24631.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24631.current_mInstruction (HERE).ptr (), var_referencedLabels_24586, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
          enumerator_24631.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_24753 (var_symbolTable_22592, kENUMERATION_UP) ;
        while (enumerator_24753.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = var_referencedLabels_24586.getter_hasKey (enumerator_24753.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 576)).boolEnum () ;
            if (kBoolTrue == test_0) {
              GALGAS_uint var_definitionLine_24893 ;
              GALGAS_bool joker_24895 ; // Joker input parameter
              var_symbolTable_22592.method_searchKey (enumerator_24753.current_lkey (HERE), var_definitionLine_24893, joker_24895, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 577)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_24893.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 578)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 578)).add_operation (enumerator_24753.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 578)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 578)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 579)), var_definitionLine_24893, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)) ;
              }
              {
              GALGAS_uint joker_25170 ; // Joker input parameter
              GALGAS_bool joker_25173 ; // Joker input parameter
              var_symbolTable_22592.setter_removeKey (enumerator_24753.current_lkey (HERE), joker_25170, joker_25173, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 580)) ;
              }
            }
          }
          enumerator_24753.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_25246 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_25287 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_25340 = GALGAS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_25370 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_25356 ((uint32_t) 0) ;
        while (enumerator_25370.hasCurrentObject ()) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_reachable_25246.operator_or (var_previousWasSkippingInstruction_25340 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 588)).boolEnum () ;
            if (kBoolTrue == test_1) {
              var_reachable_25246 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25370.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 589)) ;
              var_previousWasSkippingInstruction_25340 = var_skippingInstruction_25287 ;
              var_skippingInstruction_25287 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25370.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
            }
          }
          if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABELorORG_25705 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25370.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 593)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = var_isLABELorORG_25705.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 594)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25370.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 594)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 594)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 594)).boolEnum () ;
              if (kBoolTrue == test_2) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_25356.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 595)).add_operation (GALGAS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 595)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 596)), index_25356, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 596)) ;
                }
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = var_isLABELorORG_25705.boolEnum () ;
                if (kBoolTrue == test_3) {
                  var_reachable_25246 = GALGAS_bool (true) ;
                  var_previousWasSkippingInstruction_25340 = GALGAS_bool (false) ;
                  var_skippingInstruction_25287 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_25370.gotoNextObject () ;
          index_25356.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 587)) ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_optimizationsDone_22849.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 604)).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 605)) ;
            GALGAS_uint var_currentAddress_26332 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26360 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
            while (enumerator_26360.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26360.current_mInstruction (HERE).ptr (), var_currentAddress_26332, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)) ;
              enumerator_26360.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_26332.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 611)).add_operation (GALGAS_string (" instructions\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 611)) ;
          }
        }
      }
    }
  }
}


