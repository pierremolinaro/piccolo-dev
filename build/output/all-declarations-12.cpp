#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-12.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@baseline_bitTest_in_structured_if_condition build_intermediate_condition_instructions' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                                                           const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                                           const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                                                           const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                                           const GALGAS_string constinArgument_inTargetLabel,
                                                                                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_34630 ;
  GALGAS_bitSliceTable var_bitSliceTable_34668 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_34630, var_bitSliceTable_34668, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 977)) ;
  GALGAS_uint var_bitNumber_34712 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_34668, var_bitNumber_34712, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 985)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_intermediateRegisterDescription_34630, var_bitNumber_34712  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 992))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 992)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1000))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 998))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 998)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                                           extensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_NULL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_NULL_print (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 10)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_NULL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_NULL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_NULL_print (defineExtensionMethod_baseline_5F_intermediate_5F_NULL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_intermediate_pseudo_PAGE print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (object->mAttribute_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BEGIN OF ROUTINE ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("END OF ROUTINE ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (object->mAttribute_mPage.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_intermediate_pseudo_LABEL print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("LABEL ").add_operation (object->mAttribute_mLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_intermediate_instruction_FD print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_intermediate_instruction_F print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_intermediate_instruction_FB print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@baseline_intermediate_instruction_BitTestSkip print'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 62)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_GOTO print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_GOTO_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_print (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_JUMP print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_JUMP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_print (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_CALL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_CALL_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_CALL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_print (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_JSR print'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JSR_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_JSR_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_print (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_intermediate_instruction_literalOperation print'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (object->mAttribute_mLiteralValue.getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@baseline_intermediate_instruction_MNOP print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 110)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 112)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 114)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 118)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 121)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_intermediate_WO_OPERAND print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_TRIS print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_TRIS_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_TRIS * object = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("TRIS ").add_operation (object->mAttribute_mOperand.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_TRIS_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_TRIS_print (defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@baseline_intermediate_NULL length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_NULL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_length (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@baseline_intermediate_actualInstruction length'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_actualInstruction_length (defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@baseline_intermediate_JUMP length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JUMP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (object->mAttribute_mCurrentPage.operator_xor (object->mAttribute_mTargetPage COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JUMP_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_length (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@baseline_intermediate_JSR length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JSR_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (object->mAttribute_mCurrentPage.operator_xor (object->mAttribute_mTargetPage COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JSR_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JSR_length (defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@baseline_intermediate_instruction_MNOP length'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  result_outLength = object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 59)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 3U) ;
  }else if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 2U) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  ioArgument_ioCurrentWordAdress = object->mAttribute_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                          extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_intermediate_pseudo_LABEL isLABEL'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_intermediate_pseudo_PAGE isLABEL'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE isLABEL'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@baseline_intermediate_NULL isNULL'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_isNULL (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@baseline_intermediate_instruction_BitTestSkip isSkippingInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                              extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@baseline_intermediate_GOTO nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@baseline_intermediate_JUMP nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension getter '@baseline_intermediate_instruction_literalOperation nextInstructionIsReachable'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, object->mAttribute_mInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 126)))) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                        GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                     GALGAS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mAttribute_mLabel, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 191)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@baseline_assembly_pseudo_ORG print'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (object->mAttribute_mOrigin.getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  BEGIN OF ROUTINE ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  END OF ROUTINE ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (object->mAttribute_mPage.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@baseline_assembly_pseudo_LABEL print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_assembly_instruction_FD print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 36)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 38)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_assembly_instruction_F print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_F_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_assembly_instruction_FB print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_assembly_instruction_BitTestSkip print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSS "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 58)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSC "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)).add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_GOTO print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_GOTO_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_GOTO * object = (const cPtr_baseline_5F_assembly_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_GOTO) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_GOTO_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_GOTO_print (defineExtensionMethod_baseline_5F_assembly_5F_GOTO_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_SKIP print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_SKIP_print (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO * + 2"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_SKIP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_SKIP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_SKIP_print (defineExtensionMethod_baseline_5F_assembly_5F_SKIP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_CALL print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_CALL_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_CALL * object = (const cPtr_baseline_5F_assembly_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_CALL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  CALL ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_CALL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_CALL_print (defineExtensionMethod_baseline_5F_assembly_5F_CALL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@baseline_assembly_instruction_literalOperation print'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (object->mAttribute_mLiteralValue.getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_incDecRegisterInCondition print'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  INCFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 94)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  DECFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 96)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 100)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 102)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@baseline_assembly_WO_OPERAND print'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_TRIS print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_TRIS_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_TRIS * object = (const cPtr_baseline_5F_assembly_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_TRIS) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  TRIS ").add_operation (object->mAttribute_mOperand.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_TRIS_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_TRIS_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_TRIS_print (defineExtensionMethod_baseline_5F_assembly_5F_TRIS_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@baseline_assembly_pseudo_ORG length'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@baseline_assembly_pseudo_BEGINOFROUTINE length'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@baseline_assembly_pseudo_ENDOFROUTINE length'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@baseline_assembly_pseudo_LABEL length'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_assembly_actualInstruction length'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_actualInstruction_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_actualInstruction_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_actualInstruction_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_actualInstruction_length (defineExtensionGetter_baseline_5F_assembly_5F_actualInstruction_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_NULL generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & /* ioArgument_ioAssemblyInstructionList */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_intermediate_pseudo_PAGE generateAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                             const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                             const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                             GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_new (object->mAttribute_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE generateAssemblyCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_new (object->mAttribute_mRoutineName, object->mAttribute_mIsRegular  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE generateAssemblyCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                       const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                       GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_new (object->mAttribute_mRoutineName, object->mAttribute_mPage  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@baseline_intermediate_instruction_FD generateAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_intermediate_instruction_F generateAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_F::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@baseline_intermediate_instruction_FB generateAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_intermediate_instruction_BitTestSkip generateAssemblyCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSkipIfSet, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_intermediate_WO_OPERAND generateAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                            const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                            GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_TRIS generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_TRIS * object = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_TRIS::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOperand, object->mAttribute_mOpcode  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@baseline_intermediate_instruction_literalOperation generateAssemblyCode'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                              const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                              GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction, object->mAttribute_mLiteralValue  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_intermediate_pseudo_LABEL generateAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                              const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                              GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_new (object->mAttribute_mLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_intermediate_instruction_MNOP generateAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                  const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                  GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticWarning (object->mAttribute_mOccurrenceFactor.getter_location (SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)), GALGAS_string ("No generated code")  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)) ;
  }
  GALGAS_uint var_idx_6804 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)).isValid ()) {
    uint32_t variant_6815 = object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)).uintValue () ;
    bool loop_6815 = true ;
    while (loop_6815) {
      loop_6815 = GALGAS_bool (kIsStrictInf, var_idx_6804.objectCompare (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 156)))).isValid () ;
      if (loop_6815) {
        loop_6815 = GALGAS_bool (kIsStrictInf, var_idx_6804.objectCompare (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 156)))).boolValue () ;
      }
      if (loop_6815 && (0 == variant_6815)) {
        loop_6815 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)) ;
      }
      if (loop_6815) {
        variant_6815 -- ;
        ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_NOP (SOURCE_FILE ("baseline_build_assembly_code.galgas", 160))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158)) ;
        var_idx_6804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 161)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_GOTO generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_JUMP generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                                   const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  GALGAS_uint var_pageChangeFlags_7859 = object->mAttribute_mCurrentPage.operator_xor (object->mAttribute_mTargetPage COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 183)) ;
  GALGAS_uint var_targetPageFlags_7912 = object->mAttribute_mTargetPage ;
  GALGAS_uint var_idx_7938 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
    uint32_t variant_7949 = GALGAS_uint ((uint32_t) 8U).uintValue () ;
    bool loop_7949 = true ;
    while (loop_7949) {
      loop_7949 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_7859.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_7949) {
        loop_7949 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_7859.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_7949 && (0 == variant_7949)) {
        loop_7949 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 186)) ;
      }
      if (loop_7949) {
        variant_7949 -- ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_7859.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_uint var_bitIndex_8043 ;
          const enumGalgasBool test_1 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 189)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_uint var_sliceIndex_8240 ;
            GALGAS_uint var_sliceSize_8271 ;
            constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 191)), var_sliceIndex_8240, var_sliceSize_8271, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 190)) ;
            const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_idx_7938.objectCompare (var_sliceSize_8271)).boolEnum () ;
            if (kBoolTrue == test_2) {
              inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error, idx (").add_operation (var_idx_7938.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (var_sliceSize_8271.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)) ;
            }
            var_bitIndex_8043 = var_sliceIndex_8240.add_operation (var_idx_7938, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 198)) ;
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_3 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_7938.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_uint var_sliceIndex_8680 ;
              GALGAS_uint var_sliceSize_8711 ;
              constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA").add_operation (var_idx_7938.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), var_sliceIndex_8680, var_sliceSize_8711, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 200)) ;
              const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_sliceSize_8711.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_4) {
                inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_8711.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)) ;
              }
              var_bitIndex_8043 = var_sliceIndex_8680 ;
            }else if (kBoolFalse == test_3) {
              inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error, cannot solve page bit addressing")  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 210)) ;
              var_bitIndex_8043.drop () ; // Release error dropped variable
            }
          }
          GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_5 ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_targetPageFlags_7912.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_6) {
            temp_5 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
          }else if (kBoolFalse == test_6) {
            temp_5 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
          }
          ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, temp_5, constinArgument_inSTATUSregister, var_bitIndex_8043  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212)) ;
        }
        var_pageChangeFlags_7859 = var_pageChangeFlags_7859.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 218)) ;
        var_targetPageFlags_7912 = var_targetPageFlags_7912.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 219)) ;
        var_idx_7938 = var_idx_7938.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 220)) ;
      }
    }
  }
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_CALL generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_JSR generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                                  const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                                  GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  GALGAS_uint var_pageChangeFlags_10313 = object->mAttribute_mCurrentPage.operator_xor (object->mAttribute_mTargetPage COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 245)) ;
  GALGAS_uint var_targetPageFlags_10366 = object->mAttribute_mTargetPage ;
  GALGAS_uint var_idx_10392 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_pageRestoreInstructions_10426 = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_build_assembly_code.galgas", 248)) ;
  if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
    uint32_t variant_10481 = GALGAS_uint ((uint32_t) 8U).uintValue () ;
    bool loop_10481 = true ;
    while (loop_10481) {
      loop_10481 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10313.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_10481) {
        loop_10481 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10313.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_10481 && (0 == variant_10481)) {
        loop_10481 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 249)) ;
      }
      if (loop_10481) {
        variant_10481 -- ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10313.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_uint var_bitIndex_10575 ;
          const enumGalgasBool test_1 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 252)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_uint var_sliceIndex_10772 ;
            GALGAS_uint var_sliceSize_10803 ;
            constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 254)), var_sliceIndex_10772, var_sliceSize_10803, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 253)) ;
            const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_idx_10392.objectCompare (var_sliceSize_10803)).boolEnum () ;
            if (kBoolTrue == test_2) {
              inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error, idx (").add_operation (var_idx_10392.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (var_sliceSize_10803.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)) ;
            }
            var_bitIndex_10575 = var_sliceIndex_10772.add_operation (var_idx_10392, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 261)) ;
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_3 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_10392.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_uint var_sliceIndex_11212 ;
              GALGAS_uint var_sliceSize_11243 ;
              constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA").add_operation (var_idx_10392.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), var_sliceIndex_11212, var_sliceSize_11243, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 263)) ;
              const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_sliceSize_11243.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_4) {
                inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_11243.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)) ;
              }
              var_bitIndex_10575 = var_sliceIndex_11212 ;
            }else if (kBoolFalse == test_3) {
              inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error, cannot solve page bit addressing")  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 273)) ;
              var_bitIndex_10575.drop () ; // Release error dropped variable
            }
          }
          GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_5 ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_targetPageFlags_10366.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_6) {
            temp_5 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
          }else if (kBoolFalse == test_6) {
            temp_5 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
          }
          ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, temp_5, constinArgument_inSTATUSregister, var_bitIndex_10575  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275)) ;
          GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_targetPageFlags_10366.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
          }
          var_pageRestoreInstructions_10426.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, temp_7, constinArgument_inSTATUSregister, var_bitIndex_10575  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280)) ;
        }
        var_pageChangeFlags_10313 = var_pageChangeFlags_10313.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 286)) ;
        var_targetPageFlags_10366 = var_targetPageFlags_10366.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 287)) ;
        var_idx_10392 = var_idx_10392.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 288)) ;
      }
    }
  }
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290)) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12331 (var_pageRestoreInstructions_10426, kEnumeration_up) ;
  while (enumerator_12331.hasCurrentObject ()) {
    ioArgument_ioAssemblyInstructionList.addAssign_operation (enumerator_12331.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 294)) ;
    enumerator_12331.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_intermediate_incDecRegisterInCondition generateAssemblyCode'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                        const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                        GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304)) ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_SKIP::constructor_new (object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311)) ;
  }
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (object->mAttribute_mTargetLabel, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 317))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_pseudo_LABEL enterLabelAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                         GALGAS_baseline_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                         GALGAS_uint & ioArgument_ioWordAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mAttribute_mLabel, ioArgument_ioWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 54)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_assembly_pseudo_ORG enterLabelAtAddress'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                       GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                       GALGAS_uint & ioArgument_ioWordAddress,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  ioArgument_ioWordAddress = object->mAttribute_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_assembly_actualInstruction enterLabelAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE generateBinaryCodeAtAddress'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                          const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                          GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsRegular.operator_and (GALGAS_bool (kIsNotEqual, ioArgument_ioWordAddress.operator_and (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("baseline_build_binary_code.galgas", 91)), GALGAS_string ("the 8th bit of the routine address is not 0; a regular routine should be begin in the first half of a page")  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 91)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_1 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 93)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE generateBinaryCodeAtAddress'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                        const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioWordAddress.objectCompare (object->mAttribute_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)).add_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), GALGAS_string ("the routine is too large, it does not lie in page ").add_operation (object->mAttribute_mPage.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (ioArgument_ioWordAddress.substract_operation (object->mAttribute_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" word(s) in excess)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 105)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_assembly_pseudo_ORG generateBinaryCodeAtAddress'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioWordAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  ioArgument_ioWordAddress = object->mAttribute_mOrigin ;
  {
  routine_setEmitAddress (object->mAttribute_mOrigin.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 116)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_assembly_instruction_FD generateBinaryCodeAtAddress'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                   const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  GALGAS_uint var_code_4961 ;
  switch (object->mAttribute_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 448U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 320U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 576U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 192U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 704U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 640U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 15360U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 256U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 512U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 832U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 768U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 128U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 896U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 384U) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 143)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code_4961 = var_code_4961.operator_or (GALGAS_uint ((uint32_t) 32U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 144)) ;
  }
  var_code_4961 = var_code_4961.operator_or (object->mAttribute_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 146)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_4961, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 147)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_assembly_instruction_F generateBinaryCodeAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                  const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  GALGAS_uint var_code_5907 ;
  switch (object->mAttribute_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_5907 = GALGAS_uint ((uint32_t) 96U) ;
    }
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_5907 = GALGAS_uint ((uint32_t) 32U) ;
    }
    break ;
  }
  var_code_5907 = var_code_5907.operator_or (object->mAttribute_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 161)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_5907, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 162)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_assembly_instruction_FB generateBinaryCodeAtAddress'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                   const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  GALGAS_uint var_code_6437 ;
  switch (object->mAttribute_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_6437 = GALGAS_uint ((uint32_t) 1024U) ;
    }
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_6437 = GALGAS_uint ((uint32_t) 1280U) ;
    }
    break ;
  }
  var_code_6437 = var_code_6437.operator_or (object->mAttribute_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 176)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) ;
  var_code_6437 = var_code_6437.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_6437, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 178)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_assembly_instruction_BitTestSkip generateBinaryCodeAtAddress'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                            const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code_7019 ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code_7019 = GALGAS_uint ((uint32_t) 1792U) ;
  }else if (kBoolFalse == test_0) {
    var_code_7019 = GALGAS_uint ((uint32_t) 1536U) ;
  }
  var_code_7019 = var_code_7019.operator_or (object->mAttribute_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 194)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) ;
  var_code_7019 = var_code_7019.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_7019, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 196)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_GOTO generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_GOTO * object = (const cPtr_baseline_5F_assembly_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_GOTO) ;
  GALGAS_uint var_targetAddress_7627 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress_7627, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 206)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2560U).operator_or (var_targetAddress_7627.operator_and (GALGAS_uint ((uint32_t) 511U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_SKIP generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_CALL generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_CALL * object = (const cPtr_baseline_5F_assembly_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_CALL) ;
  GALGAS_uint var_targetAddress_8415 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress_8415, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 228)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_CALL temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2304U).operator_or (var_targetAddress_8415.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@baseline_assembly_incDecRegisterInCondition generateBinaryCodeAtAddress'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                           const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_code_8871 ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code_8871 = GALGAS_uint ((uint32_t) 960U) ;
  }else if (kBoolFalse == test_0) {
    var_code_8871 = GALGAS_uint ((uint32_t) 704U) ;
  }
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 245)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code_8871 = var_code_8871.operator_or (GALGAS_uint ((uint32_t) 32U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 246)) ;
  }
  var_code_8871 = var_code_8871.operator_or (object->mAttribute_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 248)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_2 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_8871, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 249)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_assembly_WO_OPERAND generateBinaryCodeAtAddress'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioWordAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  GALGAS_uint var_code_9456 ;
  switch (object->mAttribute_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 64U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 2U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 3U) ;
    }
    break ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_9456, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 266)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_TRIS generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  routine_emitBaselineCodeAtWordAddress (object->mAttribute_mOpcode, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 275)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@baseline_assembly_instruction_literalOperation generateBinaryCodeAtAddress'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                                 const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code_10379 ;
  switch (object->mAttribute_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3072U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  }
  var_code_10379 = var_code_10379.operator_or (object->mAttribute_mLiteralValue COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 292)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_10379, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 293)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@baseline_assembly_pseudo_LABEL generateBinaryCodeAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                 const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress_10955 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetAddress_10955, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetAddress_10955.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLabel.getter_location (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), GALGAS_string ("Internal second pass error: the '").add_operation (object->mAttribute_mLabel.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (var_targetAddress_10955.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 307))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_1 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 309)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_instruction_IF_BitTest addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_IF_SEMI_COLON addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_IF_IncDec addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_JUMP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JUMP * object = (const cPtr_midrange_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_GOTO addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_GOTO * object = (const cPtr_midrange_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_GOTO) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_CALL addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CALL * object = (const cPtr_midrange_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CALL) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_instruction_FOREVER addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FOREVER * object = (const cPtr_midrange_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FOREVER) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 54)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_STATIC_REPEAT addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 61)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_MNOP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@midrange_instruction_F addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_F_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_CLRW addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_instruction_CLRWDT addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_SLEEP addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_FB addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_NOP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_instruction_banksel addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrangeInstruction_checkbank addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank.mSlotID,
                                        extensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (defineExtensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrangeInstruction_checknobank addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank.mSlotID,
                                        extensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (defineExtensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_instruction_banksel_register addUsedRoutines'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_do_while addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_do_5F_while * object = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 134)) ;
  }
  cEnumerator_midrange_5F_partList enumerator_4317 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_4317.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_4317.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 136)) ;
    }
    enumerator_4317.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_nobanksel addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_savebank addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_savebank * object = (const cPtr_midrange_5F_instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_savebank) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 150)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_structured_if addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_structured_5F_if * object = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mAttribute_mThenInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 157)) ;
  }
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 158)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_FD addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_JSR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JSR * object = (const cPtr_midrange_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_instruction_literalOperation addUsedRoutines'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@midrange_intermediate_NULL instructionLength'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_NULL_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@midrange_intermediate_pseudo_ORG instructionLength'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@midrange_intermediate_pseudo_LABEL instructionLength'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@midrange_intermediate_actualInstruction instructionLength'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@midrange_intermediate_JUMP instructionLength'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mBit_31__31_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 36)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 37)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mBit_31__32_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 39)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outLength.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 40)) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@midrange_intermediate_JSR instructionLength'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mBit_31__31_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 49)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength = result_outLength.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mBit_31__32_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 52)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outLength = result_outLength.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 53)) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JSR_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@midrange_intermediate_instruction_MNOP instructionLength'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  result_outLength = object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 61)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@midrange_intermediate_incDecRegisterInCondition instructionLength'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 3U) ;
  }else if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 2U) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_NULL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_NULL_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 11)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_NULL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_print (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@midrange_intermediate_pseudo_ORG print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (object->mAttribute_mOrigin.getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_intermediate_pseudo_LABEL print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_instruction_FD print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mInstruction_5F_FD_5F_base_5F_code, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_instruction_F print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mFinstruction, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_instruction_FB print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_intermediate_instruction_BitTestSkip print'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 57)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 59)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_JUMP print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_JUMP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_print (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_GOTO print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_GOTO_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_print (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_CALL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_CALL_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_CALL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_print (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_JSR print'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_JSR_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_print (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_CLRWDT print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_instruction_CLRW print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_instruction_NOP print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_RETURN print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_RETFIE print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_SLEEP print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_literalOperation print'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mAttribute_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (object->mAttribute_mLiteralValue.getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_instruction_MNOP print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)).getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_incDecRegisterInCondition print'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 153)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 155)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 157)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 161)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 164)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 166)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_intermediate_pseudo_ORG setCurrentAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_uint & ioArgument_ioCurrentAddress,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioCurrentAddress = object->mAttribute_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                          GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_structured_if instructionUsesGOTOorCALL'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                                   GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_instruction_CALL instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_JSR instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                      GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_instruction_GOTO instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_instruction_JUMP instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 126)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_savebank build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_registerExpression var_STATUS_5F_register_5002 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 151))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 148)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5195 ;
  GALGAS_bitSliceTable joker_5375 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_5002.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 156)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5195, joker_5375, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 154)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5520 ;
  GALGAS_bitSliceTable joker_5692 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegister.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 167)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5520, joker_5692, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 165)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 177)), var_STATUS_5F_IPICregisterDescription_5195, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 183)), var_save_5F_IPICregisterDescription_5520  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181)) ;
  GALGAS_uint var_finalBank_6237 = ioArgument_ioCurrentBank ;
  {
  routine_handleMidrangeInstructionList (object->mAttribute_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6237, GALGAS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 187)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 202)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does reach the end of \"savebank\" instruction list")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 203)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 208)), var_save_5F_IPICregisterDescription_5520, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 214)), var_STATUS_5F_IPICregisterDescription_5195  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_instruction_banksel build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 234)) ;
  }
  GALGAS_registerExpression var_STATUS_5F_register_8030 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 240))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 237)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8224 ;
  GALGAS_bitSliceTable var_bitSliceTable_8255 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_8030.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8224, var_bitSliceTable_8255, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 244)) ;
  GALGAS_lstring var_RP_8467 = GALGAS_lstring::constructor_new (GALGAS_string ("RP"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 253)) ;
  GALGAS_uint var_rpIndex_8563 ;
  GALGAS_uint var_sliceSize_8584 ;
  var_bitSliceTable_8255.method_searchKey (var_RP_8467, var_rpIndex_8563, var_sliceSize_8584, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 254)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_sliceSize_8584.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8584.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 259)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticWarning (object->mAttribute_mBankIndex.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)) ;
    }
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 263)).objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (object->mAttribute_mBankIndex.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), GALGAS_string ("the bank ").add_operation (object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 265)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_uint var_n_9287 = constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 266)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 266)) ;
        GALGAS_uint var_shiftedBank_9354 = object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 267)) ;
        GALGAS_uint var_idx_9388 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_8584.isValid ()) {
          uint32_t variant_9401 = var_sliceSize_8584.uintValue () ;
          bool loop_9401 = true ;
          while (loop_9401) {
            loop_9401 = GALGAS_bool (kIsStrictInf, var_idx_9388.objectCompare (var_sliceSize_8584)).isValid () ;
            if (loop_9401) {
              loop_9401 = GALGAS_bool (kIsStrictInf, var_idx_9388.objectCompare (var_sliceSize_8584)).boolValue () ;
            }
            if (loop_9401 && (0 == variant_9401)) {
              loop_9401 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 269)) ;
            }
            if (loop_9401) {
              variant_9401 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_9473 ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_shiftedBank_9354.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 271)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_op_9473 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 272)) ;
              }else if (kBoolFalse == test_6) {
                var_op_9473 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 274)) ;
              }
              ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, var_op_9473, var_STATUS_5F_IPICregisterDescription_8224, var_rpIndex_8563.add_operation (var_idx_9388, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 280))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 276))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 276)) ;
              var_idx_9388.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)) ;
              var_shiftedBank_9354 = var_shiftedBank_9354.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 282)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 284)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool var_optimize_9937 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) ;
        GALGAS_uint var_shiftedBank_10013 = object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 287)) ;
        GALGAS_uint var_shiftedXorBank_10058 = object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 288)).operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 288)) ;
        GALGAS_uint var_idx_10108 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_8584.isValid ()) {
          uint32_t variant_10121 = var_sliceSize_8584.uintValue () ;
          bool loop_10121 = true ;
          while (loop_10121) {
            loop_10121 = GALGAS_bool (kIsStrictInf, var_idx_10108.objectCompare (var_sliceSize_8584)).isValid () ;
            if (loop_10121) {
              loop_10121 = GALGAS_bool (kIsStrictInf, var_idx_10108.objectCompare (var_sliceSize_8584)).boolValue () ;
            }
            if (loop_10121 && (0 == variant_10121)) {
              loop_10121 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 290)) ;
            }
            if (loop_10121) {
              variant_10121 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_10193 ;
              const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_shiftedBank_10013.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 292)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_op_10193 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 293)) ;
              }else if (kBoolFalse == test_7) {
                var_op_10193 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 295)) ;
              }
              const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_shiftedXorBank_10058.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_optimize_9937.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)).boolEnum () ;
              if (kBoolTrue == test_8) {
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, var_op_10193, var_STATUS_5F_IPICregisterDescription_8224, var_rpIndex_8563.add_operation (var_idx_10108, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 302))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 298))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 298)) ;
              }else if (kBoolFalse == test_8) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10193, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_8563.add_operation (var_idx_10108, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)) ;
              }
              var_idx_10108.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)) ;
              var_shiftedBank_10013 = var_shiftedBank_10013.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)) ;
              var_shiftedXorBank_10058 = var_shiftedXorBank_10058.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 310)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 312)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 332)) ;
  }
  GALGAS_registerExpression var_STATUS_5F_register_11819 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 338))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 335)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12142 ;
  GALGAS_bitSliceTable var_bitSliceTable_12180 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_11819.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12142, var_bitSliceTable_12180, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 340)) ;
  GALGAS_lstring var_RP_12215 = GALGAS_lstring::constructor_new (GALGAS_string ("RP"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 349)) ;
  GALGAS_uint var_rpIndex_12311 ;
  GALGAS_uint var_sliceSize_12332 ;
  var_bitSliceTable_12180.method_searchKey (var_RP_12215, var_rpIndex_12311, var_sliceSize_12332, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_sliceSize_12332.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12332.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)) ;
  }
  GALGAS_uintlist var_registerAddressList_12649 ;
  GALGAS_uint var_size_12669 ;
  GALGAS_bitSliceTable joker_12675 ; // Joker input parameter
  GALGAS_string joker_12682 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 356)), var_registerAddressList_12649, var_size_12669, joker_12675, joker_12682, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 355)) ;
  GALGAS_uint var_address_12735 ;
  var_registerAddressList_12649.method_first (var_address_12735, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 362)) ;
  GALGAS_uint var_newBank_12756 = var_address_12735.right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)) ;
  GALGAS_sint_36__34_ var_offset_12856 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRegister.getter_mOffset (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 365)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_12856, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 365)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_offset_12856.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), GALGAS_string ("index value (").add_operation (var_offset_12856.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)).add_operation (GALGAS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsSupOrEqual, var_offset_12856.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)).objectCompare (var_size_12669)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), GALGAS_string ("maximum index value is ").add_operation (var_size_12669.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_newBank_12756.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const enumGalgasBool test_5 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticWarning (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)) ;
    }
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsSupOrEqual, var_newBank_12756.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), GALGAS_string ("the bank ").add_operation (var_newBank_12756.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_uint var_n_13610 = constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 379)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 379)) ;
        GALGAS_uint var_shiftedBank_13677 = var_newBank_12756 ;
        GALGAS_uint var_idx_13701 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_12332.isValid ()) {
          uint32_t variant_13714 = var_sliceSize_12332.uintValue () ;
          bool loop_13714 = true ;
          while (loop_13714) {
            loop_13714 = GALGAS_bool (kIsStrictInf, var_idx_13701.objectCompare (var_sliceSize_12332)).isValid () ;
            if (loop_13714) {
              loop_13714 = GALGAS_bool (kIsStrictInf, var_idx_13701.objectCompare (var_sliceSize_12332)).boolValue () ;
            }
            if (loop_13714 && (0 == variant_13714)) {
              loop_13714 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 382)) ;
            }
            if (loop_13714) {
              variant_13714 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_13786 ;
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_shiftedBank_13677.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 384)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_op_13786 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 385)) ;
              }else if (kBoolFalse == test_8) {
                var_op_13786 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 387)) ;
              }
              ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, var_op_13786, var_STATUS_5F_IPICregisterDescription_12142, var_rpIndex_12311.add_operation (var_idx_13701, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 393))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 389))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 389)) ;
              var_idx_13701.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394)) ;
              var_shiftedBank_13677 = var_shiftedBank_13677.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 395)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_12756 ;
      }else if (kBoolFalse == test_7) {
        GALGAS_bool var_optimize_14240 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) ;
        GALGAS_uint var_shiftedBank_14316 = var_newBank_12756 ;
        GALGAS_uint var_shiftedXorBank_14351 = var_newBank_12756.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 401)) ;
        GALGAS_uint var_idx_14391 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_12332.isValid ()) {
          uint32_t variant_14404 = var_sliceSize_12332.uintValue () ;
          bool loop_14404 = true ;
          while (loop_14404) {
            loop_14404 = GALGAS_bool (kIsStrictInf, var_idx_14391.objectCompare (var_sliceSize_12332)).isValid () ;
            if (loop_14404) {
              loop_14404 = GALGAS_bool (kIsStrictInf, var_idx_14391.objectCompare (var_sliceSize_12332)).boolValue () ;
            }
            if (loop_14404 && (0 == variant_14404)) {
              loop_14404 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 403)) ;
            }
            if (loop_14404) {
              variant_14404 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_14476 ;
              const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_shiftedBank_14316.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 405)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_op_14476 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 406)) ;
              }else if (kBoolFalse == test_9) {
                var_op_14476 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 408)) ;
              }
              const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_shiftedXorBank_14351.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 410)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_optimize_14240.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 410)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 410)).boolEnum () ;
              if (kBoolTrue == test_10) {
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, var_op_14476, var_STATUS_5F_IPICregisterDescription_12142, var_rpIndex_12311.add_operation (var_idx_14391, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 415))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411)) ;
              }else if (kBoolFalse == test_10) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14476, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_12311.add_operation (var_idx_14391, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)) ;
              }
              var_idx_14391.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 421)) ;
              var_shiftedBank_14316 = var_shiftedBank_14316.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)) ;
              var_shiftedXorBank_14351 = var_shiftedXorBank_14351.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 423)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_12756 ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_FD build_midrange_ipic_instructionList'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16100 ;
  GALGAS_bitSliceTable joker_16106 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16100, joker_16106, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 444)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction_5F_FD_5F_base_5F_code, var_IPICregisterDescription_16100, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 453))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 453)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_instruction_F build_midrange_ipic_instructionList'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17013 ;
  GALGAS_bitSliceTable joker_17174 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17013, joker_17174, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 477)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mFAinstruction, var_IPICregisterDescription_17013  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 486))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 486)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_FB build_midrange_ipic_instructionList'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bitSliceTable var_bitSliceTable_18010 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18078 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18078, var_bitSliceTable_18010, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 511)) ;
  GALGAS_uint var_bitNumber_18296 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18010, var_bitNumber_18296, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 521)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBitOrientedOp, var_IPICregisterDescription_18078, var_bitNumber_18296  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 528))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 528)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_JSR build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_19281 ;
  GALGAS_uint var_requiredBank_19302 ;
  GALGAS_uint var_returnedBank_19323 ;
  GALGAS_bool var_preservesBank_19345 ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_19281, var_requiredBank_19302, var_returnedBank_19323, var_preservesBank_19345, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 556)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_19302.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_19302.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_19539 = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)).add_operation (var_requiredBank_19302.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)) ;
    var_errorMessage_19539.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 560)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_19539.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 561)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_19539.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 563)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 565)), var_errorMessage_19539  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 565)) ;
  }
  const enumGalgasBool test_2 = var_isNoReturn_19281.boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 568)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 568)) ;
  }
  const enumGalgasBool test_3 = var_preservesBank_19345.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 570)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioCurrentBank = var_returnedBank_19323 ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 577)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 578))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 574))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 574)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBankIndex.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("Bank index should be <= 15")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 598)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 599)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checkbank fail: there is no selected bank")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 600)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (object->mAttribute_mBankIndex)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 602)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 602)).add_operation (object->mAttribute_mBankIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 602))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 602)) ;
      }
    }
  }
  ioArgument_ioCurrentBank = object->mAttribute_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank.mSlotID,
                                                                     extensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 623)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 624)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 624))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 624)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank.mSlotID,
                                                                     extensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_22869 ;
  GALGAS_uint var_requiredBank_22890 ;
  GALGAS_uint var_returnedBank_22911 ;
  GALGAS_bool var_preservesBank_22933 ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_22869, var_requiredBank_22890, var_returnedBank_22911, var_preservesBank_22933, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 649)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_22890.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 650)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_22890.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 650)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_23127 = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).add_operation (var_requiredBank_22890.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)) ;
    var_errorMessage_23127.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 653)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_23127.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 654)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_23127.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 656)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 656)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 658)), var_errorMessage_23127  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 658)) ;
  }
  const enumGalgasBool test_2 = var_isNoReturn_22869.boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 661)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 661)) ;
  }
  const enumGalgasBool test_3 = var_preservesBank_22933.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 663)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioCurrentBank = var_returnedBank_22911 ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 667))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 667)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_24476 ;
  GALGAS_uint var_requiredBank_24497 ;
  GALGAS_uint joker_24565 ; // Joker input parameter
  GALGAS_bool joker_24568 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_24476, var_requiredBank_24497, joker_24565, joker_24568, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 690)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_24497.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 691)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_24497.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 691)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_24668 = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)).add_operation (var_requiredBank_24497.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)) ;
    var_errorMessage_24668.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 694)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_24668.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 695)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_24668.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 697)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 699)), var_errorMessage_24668  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 699)) ;
  }
  const enumGalgasBool test_2 = var_isNoReturn_24476.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 701)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 702)), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 702)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 709)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 710))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 706))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 706)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_26058 ;
  GALGAS_uint var_requiredBank_26079 ;
  GALGAS_uint joker_26147 ; // Joker input parameter
  GALGAS_bool joker_26150 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_26058, var_requiredBank_26079, joker_26147, joker_26150, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 731)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_26079.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 732)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_26079.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 732)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_26250 = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)).add_operation (var_requiredBank_26079.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)) ;
    var_errorMessage_26250.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 735)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_26250.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 736)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_26250.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 738)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 738)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 740)), var_errorMessage_26250  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 740)) ;
  }
  const enumGalgasBool test_2 = var_isNoReturn_26058.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 742)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 743)), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 743)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 747))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 747)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_new (object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 767))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 767)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_new (object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 786))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 786)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_new (object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 805))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 805)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_new (object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 824))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 824)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_result_30680 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30680, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 843)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_30680.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_30680.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 845)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 845)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_30680.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLiteralInstruction, var_result_30680.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 852)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 852)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 852))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 849))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 849)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 871)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticWarning (object->mAttribute_mOccurrenceFactor.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 872)), GALGAS_string ("occurrence argument is zero: no generated code")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 872)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 875))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 875)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 897)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 900)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_32945 = ioArgument_ioCurrentBank ;
  GALGAS_string var_label_30__32978 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 904)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 904)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 905)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__32978, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 906)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 906))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 906)) ;
  {
  routine_handleMidrangeInstructionList (object->mAttribute_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_32945, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_32945)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("instruction list does not leave bank selection unchanged")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 923)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_30__32978, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 928))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 926))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 926)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_lowerBound_34561 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34561, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 949)) ;
  GALGAS_sint_36__34_ var_upperBound_34666 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_34666, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 950)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound_34561.objectCompare (var_upperBound_34666)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound_34561.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 953)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 953)).add_operation (var_upperBound_34666.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 953)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 953))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 953)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_upperBound_34666.substract_operation (var_lowerBound_34561, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound_34666.substract_operation (var_lowerBound_34561, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 955)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 955)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 955)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 955))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 955)) ;
    }
  }
  GALGAS_uint var_finalBank_35059 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_35097 = constinArgument_inConstantMap ;
  {
  var_tempConstantMap_35097.setter_insertKey (object->mAttribute_mConstantName, var_lowerBound_34561, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 960)) ;
  }
  {
  routine_handleMidrangeInstructionList (object->mAttribute_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35097, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35059, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 961)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35059)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("enclosed instruction list does not leave bank selection unchanged")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 977)) ;
  }
  const enumGalgasBool test_3 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 979)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("enclosed instruction list contains an endless loop")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 980)) ;
  }
  GALGAS_sint_36__34_ var_idx_35797 = var_lowerBound_34561.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 983)) ;
  if (var_upperBound_34666.substract_operation (var_lowerBound_34561, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)).isValid ()) {
    uint32_t variant_35821 = var_upperBound_34666.substract_operation (var_lowerBound_34561, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)).uintValue () ;
    bool loop_35821 = true ;
    while (loop_35821) {
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_idx_35797.objectCompare (var_upperBound_34666)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_35821 = test_4.isValid () ;
      if (loop_35821) {
        loop_35821 = test_4.boolValue () ;
      }
      if (loop_35821 && (0 == variant_35821)) {
        loop_35821 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)) ;
      }
      if (loop_35821) {
        variant_35821 -- ;
        GALGAS_constantMap var_constantMap_35934 = constinArgument_inConstantMap ;
        {
        var_constantMap_35934.setter_insertKey (object->mAttribute_mConstantName, var_idx_35797, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 986)) ;
        }
        {
        routine_handleMidrangeInstructionList (object->mAttribute_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_35934, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 987)) ;
        }
        var_idx_35797.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1002)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bitSliceTable var_bitSliceTable_37008 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37076 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37076, var_bitSliceTable_37008, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1023)) ;
  GALGAS_uint var_bitNumber_37294 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37008, var_bitNumber_37294, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1033)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSkipIfSet, var_IPICregisterDescription_37076, var_bitNumber_37294  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1040))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1040)) ;
  GALGAS_bool var_unusedContinuesInSequence_37656 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) object->mAttribute_mInstruction.ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_37656, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1048)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39430 ;
  GALGAS_bitSliceTable joker_39591 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39430, joker_39591, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1101)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_IPICregisterDescription_39430, constinArgument_inTargetLabel, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero.operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1117))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1111))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition.mSlotID,
                                                         extensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                       const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                       GALGAS_uint & outArgument_outInstructionCount,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1125)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 3U) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 2U) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition.mSlotID,
                                                            extensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1152)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1146)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_negateCondition.mSlotID,
                                                         extensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                             const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                             GALGAS_uint & outArgument_outInstructionCount,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_negateCondition * object = (const cPtr_midrange_5F_negateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_negateCondition) ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1167)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_negateCondition.mSlotID,
                                                            extensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
  if (kBoolTrue == test_0) {
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1187)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1200)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__42680 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1214)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1214)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1214)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__42680, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1215)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1228)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__42680, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1241)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1241))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1241)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_andCondition.mSlotID,
                                                         extensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                          const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                          GALGAS_uint & outArgument_outInstructionCount,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_andCondition * object = (const cPtr_midrange_5F_andCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_andCondition) ;
  GALGAS_uint var_countLeft_43760 ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inComplementaryBranch, var_countLeft_43760, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1251)) ;
  GALGAS_uint var_countRight_43880 ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inComplementaryBranch, var_countRight_43880, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1256)) ;
  outArgument_outInstructionCount = var_countLeft_43760.add_operation (var_countRight_43880, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_andCondition.mSlotID,
                                                            extensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_andCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bitSliceTable var_bitSliceTable_44645 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_44713 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_44713, var_bitSliceTable_44645, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1279)) ;
  GALGAS_uint var_bitNumber_44931 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_44645, var_bitNumber_44931, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1289)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_44713, var_bitNumber_44931  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1296))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1296)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1304)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1305)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1306))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1302))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1302)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                         extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * /* inObject */,
                                                                                                                            const GALGAS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                            GALGAS_uint & outArgument_outInstructionCount,
                                                                                                                            C_Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 2U) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                            extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_generateComplementaryCondition_46433 = GALGAS_bool (false) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_directCount_46560 ;
    callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), GALGAS_bool (true), var_directCount_46560, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1337)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_directCount_46560.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)) ;
    }
    GALGAS_uint var_complementaryCount_46734 ;
    callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), GALGAS_bool (false), var_complementaryCount_46734, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1340)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mThenInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1341)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_complementaryCount_46734.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1342)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_complementaryCount_46734.objectCompare (var_directCount_46560)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_generateComplementaryCondition_46433 = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1346)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1346)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1346)).add_operation (GALGAS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1346)).add_operation (var_directCount_46560.substract_operation (var_complementaryCount_46734, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1346)).add_operation (GALGAS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1346)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_directCount_46560.substract_operation (var_complementaryCount_46734, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1348)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1349)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1351)) ;
    }
  }
  GALGAS_uint var_elseBranchFinalBank_47353 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_47397 = ioArgument_ioCurrentBank ;
  GALGAS_bool var_elseContinuesInSequence_47445 ;
  GALGAS_bool var_thenContinuesInSequence_47477 ;
  const enumGalgasBool test_5 = var_generateComplementaryCondition_46433.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_label_5F_nextCondition_47557 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1360)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1360)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1360)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_47651 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mAttribute_mInstructionLocation, var_label_5F_nextCondition_47557, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1363)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47353, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47445, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1377)) ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mThenInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47651, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_47557, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1396)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1396))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1396)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47397, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47477, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mThenInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1412)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47651, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1413)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1413))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1413)) ;
    }
  }else if (kBoolFalse == test_5) {
    GALGAS_string var_label_5F_nextCondition_49487 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1417)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1417)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1417)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_49581 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mAttribute_mInstructionLocation, var_label_5F_nextCondition_49487, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1420)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47397, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47477, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1434)) ;
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1450)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49581, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_49487, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1453)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1453))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1453)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47353, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47445, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454)) ;
    }
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1469)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49581, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1470)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1470))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1470)) ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_47353.objectCompare (var_thenBranchFinalBank_47397)).boolEnum () ;
  if (kBoolTrue == test_10) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank_47353 ;
  }else if (kBoolFalse == test_10) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
    var_elseBranchFinalBank_47353 = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1477)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47477.operator_or (var_elseContinuesInSequence_47445 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1480)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_labelInstructionBegin_52381 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1499)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1499)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1499)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_52381, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1501)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1501))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1501)) ;
  GALGAS_uint var_finalBank_52647 = ioArgument_ioCurrentBank ;
  {
  routine_handleMidrangeInstructionList (object->mAttribute_mRepeatedInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_52647, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1504)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_52647)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1520)) ;
  }
  cEnumerator_midrange_5F_partList enumerator_53191 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_53191.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_53191.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1524)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_53191.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mAttribute_mInstructionLocation, var_labelInstructionBegin_52381, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1525)) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_string var_nextBranchLabel_53628 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1539)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1539)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1539)) ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_53191.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mAttribute_mInstructionLocation, var_nextBranchLabel_53628, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1540)) ;
      GALGAS_uint var_bank_54047 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList (enumerator_53191.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54047, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1554)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54047)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (enumerator_53191.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1570)) ;
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_labelInstructionBegin_52381, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1572))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1572))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1572)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_53628, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
    }
    enumerator_53191.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_55550 ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode_55550 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1596)) ;
  }else if (kBoolFalse == test_0) {
    var_baseCode_55550 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1598)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_55773 ;
  GALGAS_bitSliceTable joker_55934 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_55773, joker_55934, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1602)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, var_baseCode_55550, var_IPICregisterDescription_55773, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1612))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1612)) ;
  GALGAS_bool var_unusedContinuesInSequence_56179 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) object->mAttribute_mInstruction.ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56179, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1620)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@midrange_intermediate_pseudo_ORG isLABELorORG'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (void) {
  enterExtensionGetter_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                     extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@midrange_intermediate_pseudo_LABEL isLABELorORG'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (void) {
  enterExtensionGetter_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                     extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@midrange_intermediate_NULL isNULL'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_NULL_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_NULL_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_midrange_5F_intermediate_5F_NULL_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_NULL_isNULL (defineExtensionGetter_midrange_5F_intermediate_5F_NULL_isNULL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_JUMP enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 53))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_GOTO enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 59))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_CALL enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 65))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_JSR enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 71))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                              extensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@midrange_intermediate_JUMP nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@midrange_intermediate_GOTO nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension getter '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, object->mAttribute_mLiteralInstruction.objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 135)))) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                     GALGAS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mAttribute_mLabel, constinArgument_inLineIndex, object->mAttribute_mIsDeletable, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                              GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                              GALGAS_uint & ioArgument_ioAddress,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mAttribute_mLabel, ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 28)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                            GALGAS_uint & ioArgument_ioAddress,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioAddress.objectCompare (object->mAttribute_mOrigin)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GALGAS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GALGAS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (object->mAttribute_mOrigin.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
  }
  ioArgument_ioAddress = object->mAttribute_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_actualInstruction * object = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = object ;
  GALGAS_uint var_nextAddress_1907 = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_nextAddress_1907.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("Routine too long, crosses page boundary at this instruction")  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
  }
  ioArgument_ioAddress = var_nextAddress_1907 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@midrange_intermediate_NULL compute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_NULL_compute (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                      const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                      GALGAS_uint & /* ioArgument_ioAddress */,
                                                                      GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                      const GALGAS_uint /* constinArgument_inIndex */,
                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_NULL_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_compute (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_actualInstruction compute'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                                   GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                   GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                   const GALGAS_uint /* constinArgument_inIndex */,
                                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_compute (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_intermediate_pseudo_ORG compute'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                               GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                               GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                               const GALGAS_uint /* constinArgument_inIndex */,
                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioAddress = object->mAttribute_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@midrange_intermediate_JUMP compute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                      const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                      GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                      const GALGAS_uint constinArgument_inIndex,
                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_uint var_targetAddress_4598 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress_4598, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 117)) ;
  GALGAS_uint var_flags_4700 = ioArgument_ioAddress.operator_xor (var_targetAddress_4598 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 119)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__4761 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_flags_4700.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_bit_31__31__4761 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 122)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetAddress_4598.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__4761 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 124)) ;
    }else if (kBoolFalse == test_1) {
      var_bit_31__31__4761 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 126)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__5038 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_flags_4700.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_bit_31__32__5038 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 131)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetAddress_4598.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 132)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__5038 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 133)) ;
    }else if (kBoolFalse == test_3) {
      var_bit_31__32__5038 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 135)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_bit_31__31__4761.objectCompare (object->mAttribute_mBit_31__31_)).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__5038.objectCompare (object->mAttribute_mBit_31__32_)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_5382 = GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, var_bit_31__31__4761, var_bit_31__32__5038  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 139)) ;
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_5382, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 144)) ;
    }
    ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)).add_operation (GALGAS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_JUMP_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_compute (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@midrange_intermediate_JSR compute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                     const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                     GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                                     GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                     const GALGAS_uint constinArgument_inIndex,
                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  GALGAS_uint var_targetAddress_6128 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress_6128, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 161)) ;
  GALGAS_uint var_flags_6230 = ioArgument_ioAddress.operator_xor (var_targetAddress_6128 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 163)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__6291 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_flags_6230.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_bit_31__31__6291 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 166)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetAddress_6128.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__6291 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 168)) ;
    }else if (kBoolFalse == test_1) {
      var_bit_31__31__6291 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 170)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__6568 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_flags_6230.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_bit_31__32__6568 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 175)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetAddress_6128.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__6568 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 177)) ;
    }else if (kBoolFalse == test_3) {
      var_bit_31__32__6568 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 179)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_bit_31__31__6291.objectCompare (object->mAttribute_mBit_31__31_)).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__6568.objectCompare (object->mAttribute_mBit_31__32_)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 182)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_6912 = GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, var_bit_31__31__6291, var_bit_31__32__6568  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 183)) ;
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_6912, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)) ;
    }
    ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)).add_operation (GALGAS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_JSR_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_compute (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                 GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                 const GALGAS_uint /* constinArgument_inIndex */,
                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress_7667 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetAddress_7667, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetAddress_7667.objectCompare (ioArgument_ioAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLabel.getter_location (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)), GALGAS_string ("Internal second pass error: the '").add_operation (object->mAttribute_mLabel.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (var_targetAddress_7667.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 208))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_NULL buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                GALGAS_string & /* ioArgument_ioString */,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioString,
                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (object->mAttribute_mOrigin.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioString.plusAssign_operation(object->mAttribute_mLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_instruction_FD buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_string & ioArgument_ioString,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mInstruction_5F_FD_5F_base_5F_code, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 41)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 43)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_instruction_FB buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_string & ioArgument_ioString,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      GALGAS_string & ioArgument_ioString,
                                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (object->mAttribute_mBitNumber.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_instruction_F buildAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_string & ioArgument_ioString,
                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mFinstruction, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     GALGAS_string & ioArgument_ioString,
                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  ioArgument_ioString.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 96)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 98)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 100)) ;
  const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_localLabel_2920 = GALGAS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (var_localLabel_2920, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
    ioArgument_ioString.plusAssign_operation(var_localLabel_2920.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  switch (object->mAttribute_mBit_31__31_.enumValue ()) {
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
  switch (object->mAttribute_mBit_31__32_.enumValue ()) {
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
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  switch (object->mAttribute_mBit_31__31_.enumValue ()) {
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
  switch (object->mAttribute_mBit_31__32_.enumValue ()) {
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
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  switch (object->mAttribute_mBit_31__31_.enumValue ()) {
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
  switch (object->mAttribute_mBit_31__32_.enumValue ()) {
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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                              GALGAS_string & ioArgument_ioString,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                GALGAS_string & ioArgument_ioString,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mAttribute_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (object->mAttribute_mLiteralValue.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticWarning (object->mAttribute_mOccurrenceFactor.getter_location (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)), GALGAS_string ("No generated code")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
  }
  GALGAS_uint var_idx_6825 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).isValid ()) {
    uint32_t variant_6836 = object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).uintValue () ;
    bool loop_6836 = true ;
    while (loop_6836) {
      loop_6836 = GALGAS_bool (kIsStrictInf, var_idx_6825.objectCompare (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).isValid () ;
      if (loop_6836) {
        loop_6836 = GALGAS_bool (kIsStrictInf, var_idx_6825.objectCompare (object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).boolValue () ;
      }
      if (loop_6836 && (0 == variant_6836)) {
        loop_6836 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_6836) {
        variant_6836 -- ;
        ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6825.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mAttribute_mLabel, ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 68)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                            extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress, NULL) ;

