#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-12.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@ipic18_intermediate_instruction_computed_rcall generateCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_lstring var_target_34518 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_goto_4"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1073)) ;
  GALGAS_uint var_computetedGoto_34_Address_34648 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_34518, var_computetedGoto_34_Address_34648, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1075)) ;
  GALGAS_uint var_currentInstructionAddress_34684 ;
  const enumGalgasBool test_0 = object->mProperty_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_currentInstructionAddress_34684 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1079)) ;
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_34648, var_target_34518, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1080)) ;
  }else if (kBoolFalse == test_0) {
    var_currentInstructionAddress_34684 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1082)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_34648, var_target_34518, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1083)) ;
  }
  GALGAS_uint var_instructionFollowingComputedRcallAddress_35027 = var_currentInstructionAddress_34684.add_operation (object->mProperty_mTargetInstructions.getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).multiply_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)) ;
  GALGAS_lstring var_nextInstructionLabel_35121 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)) ;
  GALGAS_uint var_idx_35209 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_35246 (object->mProperty_mTargetInstructions, kENUMERATION_UP) ;
  while (enumerator_35246.hasCurrentObject ()) {
    var_idx_35209.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1089)) ;
    GALGAS_codeList var_instructionCode_35406 ;
    callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_35246.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_34684, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_35406, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
    outArgument_outCode.plusAssign_operation(var_instructionCode_35406, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)) ;
    var_currentInstructionAddress_34684 = var_currentInstructionAddress_34684.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_idx_35209.objectCompare (object->mProperty_mTargetInstructions.getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1098)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_34684, var_instructionFollowingComputedRcallAddress_35027, var_nextInstructionLabel_35121, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)) ;
      var_currentInstructionAddress_34684 = var_currentInstructionAddress_34684.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
    }
    enumerator_35246.gotoNextObject () ;
  }
  outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_35121, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                                 const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                    const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                          const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                          GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                    const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_banksel addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                   const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  cEnumerator_lstringlist enumerator_4374 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_4374.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4374.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 151)) ;
    enumerator_4374.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  cEnumerator_lstringlist enumerator_4665 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_4665.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4665.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 162)) ;
    enumerator_4665.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  cEnumerator_lstringlist enumerator_4957 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_4957.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4957.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 173)) ;
    enumerator_4957.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_do_while addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mRepeatedInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 191)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5563 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_5563.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_5563.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 193)) ;
    }
    enumerator_5563.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_savebank addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 211)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mThenInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 220)) ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 221)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_switch addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_switch * object = (const cPtr_pic_31__38_Instruction_5F_switch *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_switch) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_6816 (object->mProperty_mCaseList, kENUMERATION_UP) ;
  while (enumerator_6816.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_6816.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 231)) ;
    }
    enumerator_6816.gotoNextObject () ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 233)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_macro addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_macro * object = (const cPtr_pic_31__38_Instruction_5F_macro *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_macro) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_7278 ;
  GALGAS_lstringlist joker_7256 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (object->mProperty_mMacroName, joker_7256, var_instructionList_7278, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 242)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (var_instructionList_7278, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 243)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_FA addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_FBA addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_FDA addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_JSR addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 276)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_fnop addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                     const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_block addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_10025 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_10025.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_10025.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 342)) ;
    }
    enumerator_10025.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'addPic18UsedRoutinesFromInstructionList'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10398 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_10398.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_10398.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 354)) ;
    enumerator_10398.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_computeUsedRoutines'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const GALGAS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                              const GALGAS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                              const GALGAS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                              const GALGAS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 368)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_11132 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_11132.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11132.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    }
    enumerator_11132.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11372 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_11372.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11372.current_mRoutineName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)) ;
    enumerator_11372.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11525 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_11525.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11525.current_mRoutineName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 383)) ;
    enumerator_11525.gotoNextObject () ;
  }
  GALGAS_stringset var_s_11629 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 386)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 387)).isValid ()) {
    uint32_t variant_11659 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 387)).uintValue () ;
    bool loop_11659 = true ;
    while (loop_11659) {
      loop_11659 = GALGAS_bool (kIsNotEqual, var_s_11629.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11659) {
        loop_11659 = GALGAS_bool (kIsNotEqual, var_s_11629.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11659 && (0 == variant_11659)) {
        loop_11659 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 387)) ;
      }
      if (loop_11659) {
        variant_11659 -- ;
        var_s_11629 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11793 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_11793.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11793.current_mRoutineName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 391)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11793.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 392)) ;
            }
          }
          enumerator_11793.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_block performInlining'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1131 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_1131.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_1337 ;
    {
    routine_performInlineFromInstructionList (enumerator_1131.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1337, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1103.addAssign_operation (enumerator_1131.current_mBlockName (HERE), var_instructionList_1337, enumerator_1131.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1131.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1131.gotoNextObject () ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_block::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mStartBlockName, var_inlinedBlockList_1103, object->mProperty_mEndOfBlockInstruction  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_FOREVER performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                               GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_2143 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2143, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (object->mProperty_mInstructionLocation, var_instructionList_2143, object->mProperty_mEndOfInstructionList  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_do_while performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                   const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                   const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                   GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_2806 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mRepeatedInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2806, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList_2830 = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 91)) ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_2893 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_2893.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_3099 ;
    {
    routine_performInlineFromInstructionList (enumerator_2893.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3099, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_2830.addAssign_operation (enumerator_2893.current_mCondition (HERE), var_instructionList_3099, enumerator_2893.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_2893.gotoNextObject () ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (object->mProperty_mInstructionLocation, var_repeatedInstructionList_2806, object->mProperty_mEndOfRepeatedInstructionList, var_whilePartList_2830  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_savebank performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_3860 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3860, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mRegister, var_instructionList_3860, object->mProperty_mEndOfSaveBankInstruction  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_structured_if performInlining'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                        const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                        const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                        GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_4540 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mThenInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4540, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_4743 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mElseInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4743, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mIfCondition, var_thenInstructionList_4540, var_elseInstructionList_4743, object->mProperty_mEndOfElsePartLocation  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_JSR performInlining'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                           const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                           const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                           GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  GALGAS_bool var_inlineDone_5267 ;
  const enumGalgasBool test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_luint var_requiredBank_5538 ;
    GALGAS_bool var_isNoReturn_5630 ;
    GALGAS_pic_31__38_InstructionList var_instructionList_5679 ;
    GALGAS_luint joker_5546 ; // Joker input parameter
    GALGAS_bool joker_5578 ; // Joker input parameter
    constinArgument_inDeclaredRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_requiredBank_5538, joker_5546, joker_5578, var_isNoReturn_5630, var_instructionList_5679, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
    const enumGalgasBool test_1 = var_isNoReturn_5630.boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("pic18_routine_inlining.galgas", 179)), GALGAS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray2  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
      var_inlineDone_5267.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_requiredBank_5538.getter_uint (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (object->mProperty_mInstructionLocation, var_requiredBank_5538.getter_uint (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
      }
      GALGAS_stringset var_currentlyInlinedRoutineSet_6006 = constinArgument_inCurrentlyInlinedRoutineSet ;
      var_currentlyInlinedRoutineSet_6006.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
      cEnumerator_pic_31__38_InstructionList enumerator_6173 (var_instructionList_5679, kENUMERATION_UP) ;
      while (enumerator_6173.hasCurrentObject ()) {
        callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6173.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6006, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
        enumerator_6173.gotoNextObject () ;
      }
      var_inlineDone_5267 = GALGAS_bool (true) ;
    }
  }else if (kBoolFalse == test_0) {
    var_inlineDone_5267 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_4 = var_inlineDone_5267.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_5 = object ;
    ioArgument_ioInstructionList.addAssign_operation (temp_5  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'performInlineFromInstructionList'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performInlineFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                               GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 213)) ;
  cEnumerator_pic_31__38_InstructionList enumerator_6929 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_6929.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6929.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_6929.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'pic18PerformRoutineInline'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_PerformRoutineInline (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                              GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                              GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7466 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 233)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7548 (ioArgument_ioInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_7548.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_7746 ;
    {
    routine_performInlineFromInstructionList (enumerator_7548.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_7746, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7466.addAssign_operation (enumerator_7548.current_mInterruptName (HERE), enumerator_7548.current_mFastReturn (HERE), var_instructionList_7746, enumerator_7548.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7548.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7466 ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_7988 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 250)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8066 (ioArgument_ioRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_8066.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8264 ;
    {
    routine_performInlineFromInstructionList (enumerator_8066.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8264, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_7988.addAssign_operation (enumerator_8066.current_mRoutineName (HERE), enumerator_8066.current_mRequiredBank (HERE), enumerator_8066.current_mReturnedBank (HERE), enumerator_8066.current_mPreservesBank (HERE), enumerator_8066.current_mIsNoReturn (HERE), var_instructionList_8264, enumerator_8066.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8066.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_7988 ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'displayBlockList'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayBlockList (const GALGAS_string constinArgument_inTitle,
                               GALGAS_string & ioArgument_ioListFileContents,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1366 (constinArgument_inGeneratedBlockList, kENUMERATION_UP) ;
  GALGAS_uint index_1338 ((uint32_t) 0) ;
  while (enumerator_1366.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1408 ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel_1408 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).getter_mLabel (HERE).getter_string (HERE) ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel_1408 = GALGAS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1366.current_mBlock (HERE), var_nextBlockLabel_1408, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1366.gotoNextObject () ;
    index_1338.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6553 ;
  GALGAS_bitSliceTable joker_6559 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, object->mProperty_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 178)), var_IPICregisterDescription_6553, joker_6559, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 173)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction_5F_FDA_5F_base_5F_code, var_IPICregisterDescription_6553, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 183)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7471 ;
  GALGAS_bitSliceTable joker_7477 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_7471, joker_7477, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 203)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7548 ;
  switch (object->mProperty_mFAinstruction.enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 219)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)), GALGAS_string ("*** INTERNAL ERROR ***"), fixItArray0  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)) ;
      var_code_7548.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, var_code_7548, var_IPICregisterDescription_7471  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 223)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_8856 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mProperty_mSourceRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_sourceIPICregisterDescription_8856, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 241)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9121 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mProperty_mDestinationRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_destinationIPICregisterDescription_9121, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 248)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mProperty_mInstructionLocation, var_sourceIPICregisterDescription_8856, var_destinationIPICregisterDescription_9121  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 255)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_9999 ;
  GALGAS_bitSliceTable var_bitSliceTable_10037 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_9999, var_bitSliceTable_10037, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 273)) ;
  GALGAS_uint var_bitNumber_10196 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10037, var_bitNumber_10196, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 283)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mBitOrientedOp, var_IPICregisterDescription_9999, var_bitNumber_10196  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 290)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_result_10914 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_10914, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 309)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_10914.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_10914.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_10914.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mLiteralInstruction, var_result_10914.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 315)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_result_11832 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11832, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 333)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_11832.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_11832.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_11832.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (object->mProperty_mInstructionLocation, var_result_11832.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 341))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 339)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mFSRindex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mFSRindex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), GALGAS_string ("the LFSR register idx (").add_operation (object->mProperty_mFSRindex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)) ;
  }
  GALGAS_sint_36__34_ var_result_12848 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12848, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_result_12848.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_12848.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_12848.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mFSRindex, var_result_12848.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 365)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_13721 ;
  GALGAS_uint var_requiredBank_13745 ;
  GALGAS_uint var_returnedBank_13769 ;
  GALGAS_bool var_preservesBank_13794 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_13721, var_requiredBank_13745, var_returnedBank_13769, var_preservesBank_13794, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_13745.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_13745.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_13893 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (var_requiredBank_13745.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)) ;
    var_errorMessage_13893.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_13893.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_13893.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)), var_errorMessage_13893, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_13721.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)), GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)) ;
  }
  const enumGalgasBool test_5 = var_preservesBank_13794.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 398)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioCurrentBank = var_returnedBank_13769 ;
    const enumGalgasBool test_6 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)), GALGAS_string ("the routine call should preserve bank selection"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)) ;
    }
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, object->mProperty_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 405)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_checkbank analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mBankIndex.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("Bank index should be <= 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 455)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (object->mProperty_mBankIndex)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (object->mProperty_mBankIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)) ;
      }
    }
  }
  ioArgument_ioCurrentBank = object->mProperty_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checkbank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_checknobank analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 484)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checknobank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18PiccoloSimpleInstruction analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_ipic_31__38_SequentialInstruction var_instruction_18449 ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction temp_0 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18449, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 506)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction_18449, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction.mSlotID,
                                extensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_PiccoloSimpleInstruction_analyze (defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_FOREVER analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray0  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 540)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 543)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_19466 = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_loopLabel_19518 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 551)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_loopLabel_19518, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 554)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 555)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 559)) ;
  ioArgument_ioBlockLabel = var_loopLabel_19518 ;
  {
  routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 561)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list execution is endless"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_loopLabel_19518, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 587)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 588)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19466)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 594)) ;
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 597)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_nobanksel analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 621)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_savebank analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_registerExpression var_BSRregister_22762 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23097 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister_22762.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_BSR_5F_IPICregisterDescription_23097, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 650)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23386 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mProperty_mRegister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_save_5F_IPICregisterDescription_23386, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mProperty_mInstructionLocation, var_BSR_5F_IPICregisterDescription_23097, var_save_5F_IPICregisterDescription_23386  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 671)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)) ;
  GALGAS_uint var_finalBank_23708 = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_23708, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 675)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 694)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mProperty_mInstructionLocation, var_save_5F_IPICregisterDescription_23386, var_BSR_5F_IPICregisterDescription_23097  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_savebank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_repetitionStatique analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_lowerBound_25293 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25293, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  GALGAS_sint_36__34_ var_upperBound_25398 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25398, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 726)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound_25293.objectCompare (var_upperBound_25398)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound_25293.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (var_upperBound_25398.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
    }
  }
  GALGAS_uint var_finalBank_25825 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_25863 = constinArgument_inConstantMap ;
  {
  var_tempConstantMap_25863.setter_insertKey (object->mProperty_mConstantName, var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  {
  routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_25863, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_25825, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstruction, GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 756)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_finalBank_25825.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstruction, GALGAS_string ("enclosed instruction list should not modify bank selection"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 759)) ;
  }
  GALGAS_sint_36__34_ var_idx_26661 = var_lowerBound_25293.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  if (var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).isValid ()) {
    uint32_t variant_26685 = var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).uintValue () ;
    bool loop_26685 = true ;
    while (loop_26685) {
      GALGAS_bool test_8 = GALGAS_bool (kIsInfOrEqual, var_idx_26661.objectCompare (var_upperBound_25398)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_26685 = test_8.isValid () ;
      if (loop_26685) {
        loop_26685 = test_8.boolValue () ;
      }
      if (loop_26685 && (0 == variant_26685)) {
        loop_26685 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
      }
      if (loop_26685) {
        variant_26685 -- ;
        GALGAS_constantMap var_constantMap_26798 = constinArgument_inConstantMap ;
        {
        var_constantMap_26798.setter_insertKey (object->mProperty_mConstantName, var_idx_26661, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        {
        routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_26798, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 766)) ;
        }
        var_idx_26661.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_banksel analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 807)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 809)).objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mBankIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)), GALGAS_string ("selected bank idx should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 811)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 812)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 813)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mBankIndex  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = object->mProperty_mWarningOnUselessBanksel.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticWarning (object->mProperty_mBankIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_banksel_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_banksel_register analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
  }
  GALGAS_uint var_registerAddress_29725 ;
  callExtensionMethod_getRegisterAddress ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_29725, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 842)) ;
  GALGAS_uint var_newBank_29838 = var_registerAddress_29725.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_29838)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_newBank_29838 ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mProperty_mInstructionLocation, GALGAS_luint::constructor_new (var_newBank_29838, object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 855)).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 855))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 857)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = object->mProperty_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticWarning (object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_29838.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 877)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 895)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_MNOP analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 919)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mOccurrenceFactor.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 927)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_MNOP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_NOPBRA analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 950)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mOccurrenceFactor.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 958)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_LTBLPTR analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_result_34283 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34283, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_34283.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_34283.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_34283.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
  }
  GALGAS_uint var_address_34509 = var_result_34283.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
  GALGAS_registerExpression var_TBLPTRU_34555 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_34921 ;
  GALGAS_bitSliceTable joker_34927 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_34555.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_34921, joker_34927, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)) ;
  GALGAS_uint var_upper_34972 = var_address_34509.right_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_upper_34972.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1006)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_upper_34972.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1022)), var_upper_34972  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1029)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRH_35942 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1036)) ;
  GALGAS_bitSliceTable joker_36270 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_35942.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_34921, joker_36270, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1041)) ;
  GALGAS_uint var_high_36314 = var_address_34509.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_high_36314.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_high_36314.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)) ;
    }else if (kBoolFalse == test_5) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)), var_high_36314  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRL_37288 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1085)) ;
  GALGAS_bitSliceTable joker_37615 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_37288.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_34921, joker_37615, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  GALGAS_uint var_low_37658 = var_address_34509.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_low_37658.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1104)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1107)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)) ;
  }else if (kBoolFalse == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_low_37658.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1112)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1115)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)) ;
    }else if (kBoolFalse == test_7) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1120)), var_low_37658  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_LDATA16PTR analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uintlist var_data_39337 ;
  GALGAS_bool var_isData_38__39350 ;
  constinArgument_inDataMap.method_searchKey (object->mProperty_mDataName, var_data_39337, var_isData_38__39350, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1154)) ;
  const enumGalgasBool test_0 = var_isData_38__39350.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mDataName.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)), GALGAS_string ("this data is a byte array; use ldata8ptr"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)).objectCompare (var_data_39337.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mDataIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), GALGAS_string ("index should be < ").add_operation (var_data_39337.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)) ;
  }
  GALGAS_registerExpression var_TBLPTRU_39597 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_39964 ;
  GALGAS_bitSliceTable joker_39970 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_39597.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_39964, joker_39970, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1184)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1188)), var_outIPICregisterDescription_39964  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1191)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)) ;
  GALGAS_registerExpression var_TBLPTRH_40404 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)) ;
  GALGAS_bitSliceTable joker_40731 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_40404.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_39964, joker_40731, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription_39964  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
  GALGAS_registerExpression var_TBLPTRL_41163 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1228))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1225)) ;
  GALGAS_bitSliceTable joker_41491 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_41163.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_39964, joker_41491, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1230)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)), var_outIPICregisterDescription_39964  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_LDATA8PTR analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uintlist var_data_42637 ;
  GALGAS_bool var_isData_38__42650 ;
  constinArgument_inDataMap.method_searchKey (object->mProperty_mDataName, var_data_42637, var_isData_38__42650, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
  const enumGalgasBool test_0 = var_isData_38__42650.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mDataName.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)), GALGAS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).objectCompare (var_data_42637.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mDataIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), GALGAS_string ("index should be < ").add_operation (var_data_42637.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)) ;
  }
  GALGAS_registerExpression var_TBLPTRU_42921 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1288))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_43288 ;
  GALGAS_bitSliceTable joker_43294 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_42921.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_43288, joker_43294, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1290)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1306)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)), var_outIPICregisterDescription_43288  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
  GALGAS_registerExpression var_TBLPTRH_43724 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1316)) ;
  GALGAS_bitSliceTable joker_44051 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_43724.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_43288, joker_44051, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1334)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), var_outIPICregisterDescription_43288  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1344)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  GALGAS_registerExpression var_TBLPTRL_44479 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1347)) ;
  GALGAS_bitSliceTable joker_44807 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_44479.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_43288, joker_44807, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1352)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1365)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)), var_outIPICregisterDescription_43288  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1375)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_JUMP analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_45989 ;
  GALGAS_uint var_requiredBank_46013 ;
  GALGAS_uint joker_46015 ; // Joker input parameter
  GALGAS_bool joker_46018 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_45989, var_requiredBank_46013, joker_46015, joker_46018, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_46013.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_46013.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_46118 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (var_requiredBank_46013.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
    var_errorMessage_46118.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1401)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1402)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_46118.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_46118.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)), var_errorMessage_46118, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_45989.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1418)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1421)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_computed_rcall analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_allPreserveBank_47717 = GALGAS_bool (true) ;
  GALGAS_bool var_someReturnsBank_47748 = GALGAS_bool (false) ;
  GALGAS_uint var_returnedBankSelection_47786 = ioArgument_ioCurrentBank ;
  cEnumerator_lstringlist enumerator_47829 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_47829.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_47890 ;
    GALGAS_uint var_requiredBank_47914 ;
    GALGAS_uint var_returnedBank_47938 ;
    GALGAS_bool var_preservesBank_47963 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_47829.current_mValue (HERE), var_isNoReturn_47890, var_requiredBank_47914, var_returnedBank_47938, var_preservesBank_47963, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_47914.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_47914.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_48066 = GALGAS_string ("the routine '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)).add_operation (var_requiredBank_47914.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
      var_errorMessage_48066.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1452)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_48066.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_48066.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)) ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1458)), var_errorMessage_48066, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1458)) ;
    }
    const enumGalgasBool test_3 = var_isNoReturn_47890.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)) ;
    }
    const enumGalgasBool test_5 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_47963.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)), GALGAS_string ("the '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).operator_and (var_preservesBank_47963.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = var_someReturnsBank_47748.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_returnedBankSelection_47786 = var_returnedBank_47938 ;
          var_someReturnsBank_47748 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection_47786.objectCompare (var_returnedBank_47938)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string var_errorMessage_48976 = GALGAS_string ("the '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedBank_47938.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1472)) ;
            }else if (kBoolFalse == test_10) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank_47938.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)) ;
            }
            var_errorMessage_48976.plusAssign_operation(GALGAS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1476)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_returnedBankSelection_47786.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1478)) ;
            }else if (kBoolFalse == test_11) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_47786.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)) ;
            }
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)), var_errorMessage_48976, fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_13 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484)).operator_and (var_preservesBank_47963 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484)).boolEnum () ;
        if (kBoolTrue == test_13) {
        }
      }
    }
    enumerator_47829.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_47786 ;
  GALGAS_sint_36__34_ var_size_49717 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_49717, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1490)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size_49717.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_49717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_size_49717.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_49717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)) ;
    }else if (kBoolFalse == test_16) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_size_49717.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).objectCompare (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (var_size_49717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)) ;
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList_50253 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1499)) ;
  cEnumerator_lstringlist enumerator_50326 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_50326.hasCurrentObject ()) {
    var_targetInstructionList_50253.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_50326.current_mValue (HERE).getter_location (HERE), enumerator_50326.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501)) ;
    enumerator_50326.gotoNextObject () ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mProperty_mInstructionLocation, var_targetInstructionList_50253, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1504)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1510)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1504)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_computed_goto analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  cEnumerator_lstringlist enumerator_51374 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_51374.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_51435 ;
    GALGAS_uint var_requiredBank_51459 ;
    GALGAS_uint joker_51461 ; // Joker input parameter
    GALGAS_bool joker_51464 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_51374.current_mValue (HERE), var_isNoReturn_51435, var_requiredBank_51459, joker_51461, joker_51464, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_51459.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_51459.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_51568 = GALGAS_string ("the routine '").add_operation (enumerator_51374.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)).add_operation (var_requiredBank_51459.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)) ;
      var_errorMessage_51568.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1537)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_51568.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1539)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_51568.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1541)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1541)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1541)) ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_51374.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1543)), var_errorMessage_51568, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1543)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_51435.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_51374.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)), GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_51374.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1546)) ;
    }
    enumerator_51374.gotoNextObject () ;
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
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1553)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_52430 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_52430, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1556)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_size_52430.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_52430.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)) ;
  }else if (kBoolFalse == test_6) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_size_52430.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_52430.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)) ;
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_size_52430.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).objectCompare (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).add_operation (var_size_52430.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1566)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabels, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1569)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1573)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1576)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1578)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_computed_bra analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_allPreserveBankSetting_54056 = GALGAS_bool (true) ;
  GALGAS_bool var_allReturnBank_54085 = GALGAS_bool (true) ;
  GALGAS_uint var_returnedBankValue_54116 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1602)) ;
  cEnumerator_lstringlist enumerator_54156 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_54156.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_54217 ;
    GALGAS_uint var_requiredBank_54241 ;
    GALGAS_uint var_returnedBank_54265 ;
    GALGAS_bool var_preservesBank_54290 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_54156.current_mValue (HERE), var_isNoReturn_54217, var_requiredBank_54241, var_returnedBank_54265, var_preservesBank_54290, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_54241.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_54241.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_54422 = GALGAS_string ("the routine '").add_operation (enumerator_54156.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)).add_operation (var_requiredBank_54241.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
      var_errorMessage_54422.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_54422.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1610)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_54422.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1612)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1612)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1612)) ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_54156.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1614)), var_errorMessage_54422, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1614)) ;
    }
    const enumGalgasBool test_3 = var_preservesBank_54290.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_allReturnBank_54085 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_returnedBankValue_54116.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue_54116.objectCompare (var_returnedBank_54265)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_54156.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_54265.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (var_returnedBankValue_54116.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1621)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1621)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1621)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)) ;
      }else if (kBoolFalse == test_4) {
        var_allPreserveBankSetting_54056 = GALGAS_bool (false) ;
        var_returnedBankValue_54116 = var_returnedBank_54265 ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_54217.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_54156.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)), GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_54156.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1627)) ;
    }
    enumerator_54156.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = var_allReturnBank_54085.operator_and (var_allPreserveBankSetting_54056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1631)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1631)).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioCurrentBank = var_returnedBankValue_54116 ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_9 = var_allReturnBank_54085.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)).operator_and (var_allPreserveBankSetting_54056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1634)) ;
    }
  }
  const enumGalgasBool test_11 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_54056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)).boolEnum () ;
  if (kBoolTrue == test_11) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1637)) ;
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
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1644)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_56210 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_56210, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1647)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size_56210.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_56210.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_size_56210.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_56210.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)) ;
    }else if (kBoolFalse == test_16) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_size_56210.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).objectCompare (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).add_operation (var_size_56210.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1657)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabels, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1660)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1664)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1667)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1669)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_computed_retlw analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray0  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1693)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1695)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_58208 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_58208, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1698)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_size_58208.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_58208.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_size_58208.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_58208.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_size_58208.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).objectCompare (object->mProperty_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the constant list length (").add_operation (object->mProperty_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).add_operation (var_size_58208.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)) ;
      }
    }
  }
  GALGAS_uintlist var_literalValues_58757 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)) ;
  cEnumerator_immediatExpressionList enumerator_58818 (object->mProperty_mImmediateExpressionList, kENUMERATION_UP) ;
  GALGAS_uint index_58786 ((uint32_t) 0) ;
  while (enumerator_58818.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v_58895 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_58818.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_58895, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_v_58895.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v_58895.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value with idx ").add_operation (index_58786.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)).add_operation (var_v_58895.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)) ;
    }
    var_literalValues_58757.addAssign_operation (var_v_58895.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713)) ;
    enumerator_58818.gotoNextObject () ;
    index_58786.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1717)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mProperty_mInstructionLocation, var_literalValues_58757, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1720)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1724)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1727)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1729)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_JUMPCC analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_60320 ;
  GALGAS_uint var_requiredBank_60344 ;
  GALGAS_uint joker_60346 ; // Joker input parameter
  GALGAS_bool joker_60349 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_60320, var_requiredBank_60344, joker_60346, joker_60349, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_60344.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_60344.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_60449 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)).add_operation (var_requiredBank_60344.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
    var_errorMessage_60449.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1753)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_60449.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1755)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_60449.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1759)), var_errorMessage_60449, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1759)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_60320.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1762)), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1762)) ;
  }
  GALGAS_conditionalBranchMode var_mode_60956 ;
  const enumGalgasBool test_5 = object->mProperty_mIsBcc.boolEnum () ;
  if (kBoolTrue == test_5) {
    var_mode_60956 = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1767)) ;
  }else if (kBoolFalse == test_5) {
    var_mode_60956 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1769)) ;
  }
  GALGAS_lstring var_label_30__61119 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1773)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1776)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mConditionalBranch, object->mProperty_mTargetLabel, var_mode_60956, var_label_30__61119, var_mode_60956  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1779)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1786)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1789)) ;
  ioArgument_ioBlockLabel = var_label_30__61119 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_IF_BitTest analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_62613 ;
  GALGAS_bitSliceTable var_bitSliceTable_62651 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_62613, var_bitSliceTable_62651, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1813)) ;
  GALGAS_uint var_bitNumber_62810 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_62651, var_bitNumber_62810, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1823)) ;
  GALGAS_uint var_currentBank_62868 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_63158 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_62868, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_63158, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1832)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank_62868.objectCompare (var_currentBank_62868)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1845)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1845)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mProperty_mInstructionLocation, var_embeddedInstruction_63158, object->mProperty_mSkipIfSet, var_IPICregisterDescription_62613, var_bitNumber_62810  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1848)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1855)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1848)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_64327 ;
  switch (object->mProperty_mOpCode.enumValue ()) {
  case GALGAS_if_5F_semi_5F_colon_5F_op::kNotBuilt:
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSEQ:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1879)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1880)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1881)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1882)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_64919 ;
  GALGAS_bitSliceTable joker_64925 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_64919, joker_64925, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1884)) ;
  GALGAS_uint var_currentBank_65006 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_65296 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_65006, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_65296, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1896)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank_65006.objectCompare (var_currentBank_65006)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1909)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1909)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mProperty_mInstructionLocation, var_embeddedInstruction_65296, var_baseCode_64327, var_IPICregisterDescription_64919  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1918)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_IF_IncDec analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_66436 ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.operator_and (object->mProperty_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mProperty_mIncrement.operator_and (object->mProperty_mSkipIfZero.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mProperty_mIncrement.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)).operator_and (object->mProperty_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1947)) ;
      }else if (kBoolFalse == test_2) {
        var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1949)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_67027 ;
  GALGAS_bitSliceTable joker_67033 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_67027, joker_67033, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1952)) ;
  GALGAS_uint var_currentBank_67114 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_67404 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_67114, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_67404, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_currentBank_67114.objectCompare (var_currentBank_67114)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mProperty_mInstructionLocation, var_embeddedInstruction_67404, var_baseCode_66436, var_IPICregisterDescription_67027, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1980)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1980)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_structured_if analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  GALGAS_uint var_elseBranchFinalBank_68520 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_68564 = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_conditionTrueLabel_68617 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)) ;
  GALGAS_lstring var_conditionFalseLabel_68742 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)) ;
  GALGAS_lstring var_exitLabel_68857 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2018)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_69278 ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mIfCondition.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_68617, var_conditionFalseLabel_68742, ioArgument_ioUsedRegisters, var_testTerminator_69278, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2020)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2034)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_69278, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2038)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2033))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2033)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2041)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_68617 ;
  {
  routine_analyzeInstructionList (object->mProperty_mThenInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_68564, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2044)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_70064 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = var_thenContinuesInSequence_70064.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2065)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_68857, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2069)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2064))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2064)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2073)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_68742 ;
  {
  routine_analyzeInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_68520, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2076)) ;
  }
  GALGAS_bool var_elseContinuesInSequence_70965 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_1 = var_elseContinuesInSequence_70965.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2097)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_68857, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2100))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2100)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2101)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2096))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2096)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2105)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_68520.objectCompare (var_thenBranchFinalBank_68564)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank_68520 ;
  }else if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2110)) ;
    var_elseBranchFinalBank_68520 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2111)) ;
  }
  const enumGalgasBool test_4 = var_thenContinuesInSequence_70064.operator_or (var_elseContinuesInSequence_70965 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2114)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioBlockLabel = var_exitLabel_68857 ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2117)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_macro analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_macro_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_macro * object = (const cPtr_pic_31__38_Instruction_5F_macro *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_macro) ;
  GALGAS_lstringlist var_constantNameList_72488 ;
  GALGAS_pic_31__38_InstructionList var_instructionList_72509 ;
  constinArgument_inMacroMap.method_searchKey (object->mProperty_mMacroName, var_constantNameList_72488, var_instructionList_72509, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)).objectCompare (var_constantNameList_72488.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, var_constantNameList_72488.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2143)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2143)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2143)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)) ;
  }
  GALGAS_constantMap var_constantMap_72705 = constinArgument_inConstantMap ;
  cEnumerator_immediatExpressionList enumerator_72749 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
  cEnumerator_lstringlist enumerator_72785 (var_constantNameList_72488, kENUMERATION_UP) ;
  while (enumerator_72749.hasCurrentObject () && enumerator_72785.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue_72869 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_72749.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_72705, var_expressionValue_72869, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
    {
    var_constantMap_72705.setter_insertKey (enumerator_72785.current_mValue (HERE), var_expressionValue_72869, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)) ;
    }
    enumerator_72749.gotoNextObject () ;
    enumerator_72785.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList (var_instructionList_72509, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_72705, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2151)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_macro_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_macro_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_macro_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                               GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                               GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                               GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                               GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                               GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_SimpleConstantCaseItem * object = (const cPtr_pic_31__38_SimpleConstantCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_SimpleConstantCaseItem) ;
  GALGAS_sint_36__34_ var_result_74768 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mCaseExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_74768, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2208)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_74768.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_74768.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2210)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("case value is evaluated as ").add_operation (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2211)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2211)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2211)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2211)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2214)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2214)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)) ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2216)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2216)), GALGAS_string ("the '").add_operation (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2216)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2216)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2216)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2216)) ;
  }else if (kBoolFalse == test_2) {
    {
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2218)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2218)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2218)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2223)), ioArgument_ioLastComparisonValue.substract_operation (var_result_74768, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2226)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)) ;
  ioArgument_ioLastComparisonValue = var_result_74768 ;
  GALGAS_lstring var_conditionFalseLabel_75788 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2231)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2231)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2231)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_75986 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2236)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2238)), var_conditionFalseLabel_75788, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2240))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2243)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_75986, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2247)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2242))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2242)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2250)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_75788 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                         GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                         GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_IntervalCaseItem * object = (const cPtr_pic_31__38_IntervalCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_IntervalCaseItem) ;
  GALGAS_sint_36__34_ var_minBound_77139 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mMinExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_77139, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2268)) ;
  GALGAS_sint_36__34_ var_maxBound_77235 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mMaxExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_77235, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2269)) ;
  GALGAS_bool var_ok_77268 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_minBound_77139.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound_77139.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2272)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_77139.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2273)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2273)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2273)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2273)) ;
    var_ok_77268 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_maxBound_77235.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound_77235.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2276)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_77235.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2277)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2277)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2277)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2277)) ;
    var_ok_77268 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsInfOrEqual, var_maxBound_77235.objectCompare (var_minBound_77139)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("max bound (").add_operation (var_maxBound_77235.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2281)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2281)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2281)).add_operation (var_minBound_77139.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2281)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2281)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2281)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2281)) ;
    var_ok_77268 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_6 = var_ok_77268.boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_range enumerator_77924 (GALGAS_range::constructor_new (var_minBound_77139.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)), var_maxBound_77235.substract_operation (var_minBound_77139, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)), kENUMERATION_UP) ;
    while (enumerator_77924.hasCurrentObject ()) {
      const enumGalgasBool test_7 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_77924.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (enumerator_77924.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)) ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_77924.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), GALGAS_string ("the '").add_operation (enumerator_77924.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)) ;
      }else if (kBoolFalse == test_7) {
        {
        ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_77924.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2291)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2291)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2291)) ;
        }
      }
      enumerator_77924.gotoNextObject () ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2297)), ioArgument_ioLastComparisonValue.substract_operation (var_minBound_77139, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2298)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2298)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2298))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2295)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2300)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2295)) ;
    GALGAS_lstring var_greaterThanLowBoundLabel_78659 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2303)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2303)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2303)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2304)) ;
    GALGAS_lstring var_conditionIntermediateLabel_78798 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2305)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2305)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2305)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2306)) ;
    GALGAS_lstring var_conditionRejectedLabel_78933 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2307)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2307)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2307)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2308)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_79131 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2312)), var_greaterThanLowBoundLabel_78659, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2314)), var_conditionIntermediateLabel_78798, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2316))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2310)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2320)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_79131, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2324)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2319))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2319)) ;
    GALGAS_ipic_31__38_SequentialInstruction var_instruction_79702 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2331)), var_maxBound_77235.substract_operation (var_minBound_77139, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2332)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2332)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2332)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2332)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2332))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2329)) ;
    GALGAS_ipic_31__38_SequentialInstructionList temp_10 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2338)) ;
    temp_10.addAssign_operation (var_instruction_79702, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2338)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2338)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2336)), var_conditionIntermediateLabel_78798, temp_10, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mCaseExpressionLocation, var_conditionRejectedLabel_78933, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2339))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2339)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2340)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2335))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2335)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__80295 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)), var_conditionRejectedLabel_78933, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2344)) ;
    GALGAS_ipic_31__38_SequentialInstructionList temp_11 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)) ;
    temp_11.addAssign_operation (var_instruction_79702, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2354)), var_greaterThanLowBoundLabel_78659, temp_11, var_t_32__80295, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2358)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2353))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2353)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2362)) ;
    ioArgument_ioBlockLabel = var_conditionRejectedLabel_78933 ;
    ioArgument_ioLastComparisonValue = var_maxBound_77235.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2365)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2365)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_switch analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_caseConstantMap var_caseConstantMap_81582 = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2388)) ;
  GALGAS_lstring var_exitLabel_81639 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2390)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2390)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2390)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2391)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_81790 = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence_81869 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_81907 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_81948 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2398)) ;
  GALGAS_bool var_finalBankSettingDefined_81997 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_82033 (object->mProperty_mCaseList, kENUMERATION_UP) ;
  while (enumerator_82033.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel_82076 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2403)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2403)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2403)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2404)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_82240 (enumerator_82033.current_mCaseExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_82240.hasCurrentObject ()) {
      callExtensionMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_82240.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_82076, ioArgument_ioUsedRegisters, var_caseConstantMap_81582, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_81790, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2407)) ;
      enumerator_82240.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_82638 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_82076 ;
    GALGAS_uint var_branchFinalBank_82717 = var_initialBankSetting_81907 ;
    {
    routine_analyzeInstructionList (enumerator_82033.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_82717, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2424)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_continuesInSequence_81869 = GALGAS_bool (true) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2445)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_81639, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2448))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2448)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2449)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2444))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2444)) ;
    }
    const enumGalgasBool test_1 = var_finalBankSettingDefined_81997.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_81948.objectCompare (var_branchFinalBank_82717)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_branchFinalBank_82717.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2456)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = var_branchFinalBank_82717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2456)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_finalBankSetting_81948.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2458)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_finalBankSetting_81948.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2458)) ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_82033.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2455)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2456)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2457)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2458)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2455)) ;
      }
    }else if (kBoolFalse == test_1) {
      var_finalBankSettingDefined_81997 = GALGAS_bool (true) ;
      var_finalBankSetting_81948 = var_branchFinalBank_82717 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2465)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_82638 ;
    enumerator_82033.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_84257 = var_initialBankSetting_81907 ;
  {
  routine_analyzeInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_84257, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2470)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_84705 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_8 = var_thenContinuesInSequence_84705.boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2491)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_81639, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2494))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2494)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2495)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2490))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2490)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2499)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_81948.objectCompare (var_branchFinalBank_84257)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_branchFinalBank_84257.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2503)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = var_branchFinalBank_84257.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2503)) ;
    }
    GALGAS_string temp_12 ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_finalBankSetting_81948.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2505)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_13) {
      temp_12 = var_finalBankSetting_81948.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2505)) ;
    }
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (object->mProperty_mElseBranchStartLocation, GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2502)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2503)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2504)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2505)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2502)) ;
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_81948 ;
  const enumGalgasBool test_15 = var_continuesInSequence_81869.boolEnum () ;
  if (kBoolTrue == test_15) {
    ioArgument_ioBlockLabel = var_exitLabel_81639 ;
  }else if (kBoolFalse == test_15) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2513)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_switch_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_do_while analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  GALGAS_lstring var_startLabel_86292 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2536)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2536)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2536)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2537)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2540)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_startLabel_86292, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2543))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2543)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2544)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2539))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2539)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2547)) ;
  ioArgument_ioBlockLabel = var_startLabel_86292 ;
  GALGAS_uint var_repeatedBranchFinalBank_86839 = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mProperty_mRepeatedInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_86839, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence_87310 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_86839)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2571)) ;
  }
  const enumGalgasBool test_2 = var_repeatedInstructionsContinuesInSequence_87310.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2573)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfRepeatedInstructionList, GALGAS_string ("This branch makes the next code unreachable"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2574)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_87689 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_87689.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel_87733 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2579)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2579)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2579)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2580)) ;
    GALGAS_lstring var_conditionFalseLabel_87861 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2581)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2581)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2581)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_88305 ;
    callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) enumerator_87689.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_87733, var_conditionFalseLabel_87861, ioArgument_ioUsedRegisters, var_testTerminator_88305, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_88305, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2601)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2596))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2596)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2604)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_87733 ;
    GALGAS_uint var_branchFinalBank_88641 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList (enumerator_87689.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_88641, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2607)) ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_88641)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_87689.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2626)) ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_87689.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2629)) ;
    }
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2632)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_startLabel_86292, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2635))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2635)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2636)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2631))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2631)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_87861 ;
    enumerator_87689.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioVisitedBlockSet */,
                                                                                      const GALGAS_blockInstructionBlockMap /* constinArgument_inBlockMap */,
                                                                                      const GALGAS_string constinArgument_inCurrentBlockName,
                                                                                      const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                                      GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                                      GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                      GALGAS_bool & /* ioArgument_ioContinueAccessibilityExploration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_exitBlockTerminationForBlockInstruction * object = (const cPtr_exitBlockTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_exitBlockTerminationForBlockInstruction) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2689)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_otherInitialBlockSetting_91564 ;
    GALGAS_string var_otherBlockName_91592 ;
    ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2690)), var_otherInitialBlockSetting_91564, var_otherBlockName_91592, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2690)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_91564.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2693)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2693)) ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_91564.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2695)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = var_otherInitialBlockSetting_91564.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2695)) ;
      }
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2692)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2693)).add_operation (var_otherBlockName_91592, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2694)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2694)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2694)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2695)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2692)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2699)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2699)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@gotoTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioVisitedBlockSet,
                                                                                 const GALGAS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                                 const GALGAS_string constinArgument_inCurrentBlockName,
                                                                                 const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                                 GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                 GALGAS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gotoTerminationForBlockInstruction * object = (const cPtr_gotoTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gotoTerminationForBlockInstruction) ;
  const enumGalgasBool test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (object->mProperty_mNextBlock.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2713)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2713)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioVisitedBlockSet.addAssign_operation (object->mProperty_mNextBlock.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2714)) ;
    ioArgument_ioContinueAccessibilityExploration = GALGAS_bool (true) ;
    GALGAS_pic_31__38_InstructionList joker_92835 ; // Joker input parameter
    GALGAS_abstractBlockTerminationForBlockInstruction joker_92838 ; // Joker input parameter
    GALGAS_location joker_92841 ; // Joker input parameter
    constinArgument_inBlockMap.method_searchKey (object->mProperty_mNextBlock, joker_92835, joker_92838, joker_92841, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2716)) ;
    const enumGalgasBool test_1 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (object->mProperty_mNextBlock.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2717)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_otherInitialBlockSetting_93010 ;
      GALGAS_string var_otherBlockName_93038 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (object->mProperty_mNextBlock, var_otherInitialBlockSetting_93010, var_otherBlockName_93038, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2718)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_93010.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2721)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2721)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_93010.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2723)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_otherInitialBlockSetting_93010.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2723)) ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mNextBlock.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2720)), GALGAS_string ("this block goes to '").add_operation (object->mProperty_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2720)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2720)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2720)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2720)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2721)).add_operation (var_otherBlockName_93038, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2722)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2722)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2722)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2723)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2720)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (object->mProperty_mNextBlock, constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2727)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@testTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioVisitedBlockSet,
                                                                                 const GALGAS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                                 const GALGAS_string constinArgument_inCurrentBlockName,
                                                                                 const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                                 GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                                 GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                 GALGAS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testTerminationForBlockInstruction * object = (const cPtr_testTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_testTerminationForBlockInstruction) ;
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mTrueTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2742)) ;
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mFalseTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_testTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@gotoTerminationForBlockInstruction generateBlock'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gotoTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                              const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                              const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                              const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                              GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                              const GALGAS_string constinArgument_inLabelForBlock,
                                                                              GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gotoTerminationForBlockInstruction * object = (const cPtr_gotoTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gotoTerminationForBlockInstruction) ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mNextBlock.getter_location (HERE), GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (object->mProperty_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2789)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2789)), object->mProperty_mNextBlock.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2789)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2790))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2787)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_gotoTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_generateBlock (defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@exitBlockTerminationForBlockInstruction generateBlock'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_exitBlockTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                   const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                   const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                                   const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                   const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                   const GALGAS_string constinArgument_inLabelForBlock,
                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_exitBlockTerminationForBlockInstruction * object = (const cPtr_exitBlockTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_exitBlockTerminationForBlockInstruction) ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mLocation, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2808)), object->mProperty_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2808)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2809))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2806)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_exitBlockTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_generateBlock (defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@testTerminationForBlockInstruction generateBlock'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                              const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                              const GALGAS_uint constinArgument_inCurrentBank,
                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                              GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                              const GALGAS_string constinArgument_inLabelForBlock,
                                                                              GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testTerminationForBlockInstruction * object = (const cPtr_testTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_testTerminationForBlockInstruction) ;
  GALGAS_lstring var_conditionTrueLabel_96866 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)), object->mProperty_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2826)) ;
  GALGAS_lstring var_conditionFalseLabel_96980 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2827)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2827)), object->mProperty_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2827)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2828)) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_96866, var_conditionFalseLabel_96980, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_97664 ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mTrueTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_97664, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2843)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2855)), var_conditionTrueLabel_96866, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2857)), var_trueTerminator_97664, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2859)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2854))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2854)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_98175 ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mFalseTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_98175, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2863)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2875)), var_conditionFalseLabel_96980, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2877)), var_falseTerminator_98175, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2879)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2874))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2874)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_testTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_generateBlock (defineExtensionMethod_testTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_block analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_block_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  GALGAS_string var_labelForBlock_99072 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2904)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2904)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2904)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2905)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2908)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mStartBlockName.getter_location (HERE), GALGAS_lstring::constructor_new (var_labelForBlock_99072.add_operation (object->mProperty_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2913)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2913)), object->mProperty_mStartBlockName.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2913)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2914))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2911)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2915)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2907))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2907)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2918)) ;
  GALGAS_blockInstructionBlockMap var_blockMap_99635 = GALGAS_blockInstructionBlockMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2920)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_99697 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_99697.hasCurrentObject ()) {
    {
    var_blockMap_99635.setter_insertKey (enumerator_99697.current_mBlockName (HERE), enumerator_99697.current_mInstructionList (HERE), enumerator_99697.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_99697.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2922)) ;
    }
    enumerator_99697.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InstructionList joker_99890 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_99893 ; // Joker input parameter
  GALGAS_location joker_99896 ; // Joker input parameter
  var_blockMap_99635.method_searchKey (object->mProperty_mStartBlockName, joker_99890, joker_99893, joker_99896, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2925)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_99933 = GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2926)) ;
  {
  var_blockInitialBankSelectionMap_99933.setter_insertKey (object->mProperty_mStartBlockName, ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2927)) ;
  }
  GALGAS_stringset var_accessibleBlockSet_100113 = GALGAS_stringset::constructor_setWithString (object->mProperty_mStartBlockName.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2929)) ;
  GALGAS_stringset var_handledBlockSet_100187 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2930)) ;
  GALGAS_bool var_continueAccessibilityExploration_100251 = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence_100286 = GALGAS_bool (false) ;
  if (object->mProperty_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)).isValid ()) {
    uint32_t variant_100301 = object->mProperty_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)).uintValue () ;
    bool loop_100301 = true ;
    while (loop_100301) {
      loop_100301 = var_continueAccessibilityExploration_100251.isValid () ;
      if (loop_100301) {
        loop_100301 = var_continueAccessibilityExploration_100251.boolValue () ;
      }
      if (loop_100301 && (0 == variant_100301)) {
        loop_100301 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)) ;
      }
      if (loop_100301) {
        variant_100301 -- ;
        var_continueAccessibilityExploration_100251 = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_100479 (var_accessibleBlockSet_100113.substract_operation (var_handledBlockSet_100187, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2935)), kENUMERATION_UP) ;
        while (enumerator_100479.hasCurrentObject ()) {
          var_handledBlockSet_100187.addAssign_operation (enumerator_100479.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2936)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList_100638 ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination_100713 ;
          GALGAS_location var_endOfBlock_100747 ;
          var_blockMap_99635.method_searchKey (enumerator_100479.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2938)), var_instructionList_100638, var_blockTermination_100713, var_endOfBlock_100747, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2937)) ;
          GALGAS_uint var_currentBank_100875 ;
          GALGAS_string joker_100877 ; // Joker input parameter
          var_blockInitialBankSelectionMap_99933.method_searchKey (enumerator_100479.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2944)), var_currentBank_100875, joker_100877, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2944)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_99072.add_operation (enumerator_100479.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2945)), var_blockMap_99635.getter_locationForKey (enumerator_100479.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2945))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2945)) ;
          {
          routine_analyzeInstructionList (var_instructionList_100638, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_100875, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2946)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator_101753 ;
          callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_100713.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_100875, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_99072, var_terminator_101753, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2964)) ;
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (var_endOfBlock_100747, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2976)) ;
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2979)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_101753, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2983)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2978))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2978)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2986)) ;
          callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_100713.ptr (), var_accessibleBlockSet_100113, var_blockMap_99635, enumerator_100479.current (HERE), var_currentBank_100875, var_blockInitialBankSelectionMap_99933, var_continuesInSequence_100286, var_continueAccessibilityExploration_100251, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2988)) ;
          enumerator_100479.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_102461 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_102461.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_accessibleBlockSet_100113.getter_hasKey (enumerator_102461.current_mBlockName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2993)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2993)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (enumerator_102461.current_mBlockName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2994)), GALGAS_string ("this block is not accessible from '").add_operation (object->mProperty_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2994)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2994)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2994)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2994)) ;
    }
    enumerator_102461.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = var_continuesInSequence_100286.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_99072.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2999)), object->mProperty_mStartBlockName.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2999)) ;
    GALGAS_string joker_102832 ; // Joker input parameter
    var_blockInitialBankSelectionMap_99933.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3000)), ioArgument_ioCurrentBank, joker_102832, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3000)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3002)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_block_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_block_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18BccInStructuredCondition analyzeCondition'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                  const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                  const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                  GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                  const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                  const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BccInStructuredCondition * object = (const cPtr_pic_31__38_BccInStructuredCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BccInStructuredCondition) ;
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mConditionLocation, object->mProperty_mCondition, constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3042)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3044))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18RegisterComparisonCondition analyzeCondition'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                     const GALGAS_uint constinArgument_inCurrentBank,
                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                     const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                     const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonCondition * object = (const cPtr_pic_31__38_RegisterComparisonCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_105036 ;
  GALGAS_bitSliceTable joker_105042 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_105036, joker_105042, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison_105135 ;
  GALGAS_bool var_complementaryBranch_105163 ;
  switch (object->mProperty_mComparison.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison_105135 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3075)) ;
      var_complementaryBranch_105163 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison_105135 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3078)) ;
      var_complementaryBranch_105163 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison_105135 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3081)) ;
      var_complementaryBranch_105163 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison_105135 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3084)) ;
      var_complementaryBranch_105163 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison_105135 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3087)) ;
      var_complementaryBranch_105163 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison_105135 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3090)) ;
      var_complementaryBranch_105163 = GALGAS_bool (true) ;
    }
    break ;
  }
  GALGAS_location var_location_105957 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3094)).getter_location (HERE) ;
  const enumGalgasBool test_0 = var_complementaryBranch_105163.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_105957, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105957, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3098))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3098)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105957, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3099))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3099)), var_IPICregisterDescription_105036, var_ipicComparison_105135  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3096)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_105957, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105957, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105957, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3106))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3106)), var_IPICregisterDescription_105036, var_ipicComparison_105135  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3103)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition.mSlotID,
                                         extensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (defineExtensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18IncDecRegisterInCondition analyzeCondition'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                   const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                   const GALGAS_uint constinArgument_inCurrentBank,
                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                   const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                   const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_IncDecRegisterInCondition * object = (const cPtr_pic_31__38_IncDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_IncDecRegisterInCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_107501 ;
  GALGAS_bitSliceTable joker_107507 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_107501, joker_107507, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3125)) ;
  GALGAS_location var_location_107597 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3136)).getter_location (HERE) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_107597, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107597, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3140))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3140)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107597, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3141))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3141)), var_IPICregisterDescription_107501, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3138)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_107597, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107597, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3148))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3148)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107597, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3149))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3149)), var_IPICregisterDescription_107501, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3146)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition.mSlotID,
                                         extensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (defineExtensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18RegisterTestCondition analyzeCondition'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                               const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                               const GALGAS_uint constinArgument_inCurrentBank,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                               const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterTestCondition * object = (const cPtr_pic_31__38_RegisterTestCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterTestCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_109168 ;
  GALGAS_bitSliceTable joker_109174 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_109168, joker_109174, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)) ;
  GALGAS_location var_location_109264 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3180)).getter_location (HERE) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_109264, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109264, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3184))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3184)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109264, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3185))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3185)), var_IPICregisterDescription_109168  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3182)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_109264, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109264, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3190))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3190)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109264, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3191))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3191)), var_IPICregisterDescription_109168  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3188)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition.mSlotID,
                                         extensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterTestCondition_analyzeCondition (defineExtensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18BitTestInStructuredCondition analyzeCondition'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                      const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                      const GALGAS_uint constinArgument_inCurrentBank,
                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                      GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                      const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                      const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                      GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestInStructuredCondition * object = (const cPtr_pic_31__38_BitTestInStructuredCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestInStructuredCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_110750 ;
  GALGAS_bitSliceTable var_bitSliceTable_110788 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_110750, var_bitSliceTable_110788, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3209)) ;
  GALGAS_uint var_bitNumber_110947 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_110788, var_bitNumber_110947, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)) ;
  GALGAS_location var_location_111014 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3227)).getter_location (HERE) ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (var_location_111014, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_111014, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3230))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3230)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_111014, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3231))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3231)), var_IPICregisterDescription_110750, var_bitNumber_110947  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3228)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18NegateCondition analyzeCondition'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_NegateCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                         const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GALGAS_uint constinArgument_inCurrentBank,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                         const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                         const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_NegateCondition * object = (const cPtr_pic_31__38_NegateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_NegateCondition) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_NegateCondition.mSlotID,
                                         extensionMethod_pic_31__38_NegateCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_NegateCondition_analyzeCondition (defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18AndCondition analyzeCondition'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_AndCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                      const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                      const GALGAS_uint constinArgument_inCurrentBank,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                      GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                      const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_AndCondition * object = (const cPtr_pic_31__38_AndCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_AndCondition) ;
  GALGAS_lstring var_conditionTrueLabel_112744 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3278)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3278)), constinArgument_inConditionTrueLabel.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3278)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3279)) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_112744, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3281)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_113495 ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_113495, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3308)), var_conditionTrueLabel_112744, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3310)), var_secondTestBlockTerminator_113495, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3312)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3307))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3307)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_AndCondition.mSlotID,
                                         extensionMethod_pic_31__38_AndCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_AndCondition_analyzeCondition (defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeInstructionList'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
  cEnumerator_pic_31__38_InstructionList enumerator_114533 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_114533.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_114533.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)) ;
      ioArgument_ioBlockLabel = GALGAS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3343)) ;
    }
    callExtensionMethod_analyze ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_114533.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3345)) ;
    enumerator_114533.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'pic18_analyze_data_sections'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38__5F_analyze_5F_data_5F_sections (const GALGAS_dataList constinArgument_inDataDefinitionList,
                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                         GALGAS_pic_31__38__5F_dataMap & outArgument_outDataMap,
                                                         GALGAS_constantMap & ioArgument_ioConstantMap,
                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDataMap.drop () ; // Release 'out' argument
  outArgument_outDataMap = GALGAS_pic_31__38__5F_dataMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)) ;
  cEnumerator_dataList enumerator_115826 (constinArgument_inDataDefinitionList, kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_115826.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3383)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3383)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3384)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3384)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3384)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3384)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3385)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3385)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3385)) ;
    while (enumerator_115826.hasCurrentObject () && bool_0) {
      GALGAS_uintlist var_data_116112 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)) ;
      const enumGalgasBool test_1 = enumerator_115826.current_mIsByteList (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_115826.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3389)).operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3389)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_115826.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)), GALGAS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)) ;
        }
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data8 '").add_operation (enumerator_115826.current_mDataName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)).add_operation (enumerator_115826.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)).add_operation (enumerator_115826.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3393)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3393)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3393)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3393)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3392)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_115826.current_mDataName (HERE).getter_string (HERE).add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3394)), enumerator_115826.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3394))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3394)), enumerator_115826.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3394)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3394)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3394)) ;
        }
        GALGAS_sint var_byte_116512 = GALGAS_sint ((int32_t) 0L) ;
        cEnumerator_immediatExpressionList enumerator_116568 (enumerator_115826.current_mValueList (HERE), kENUMERATION_UP) ;
        GALGAS_uint index_116527 ((uint32_t) 0) ;
        while (enumerator_116568.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_116653 ;
          callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_116568.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_116653, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)) ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_value_116653.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_116568.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_116653.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_value_116653.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_116568.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_116653.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)).add_operation (GALGAS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, index_116527.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3402)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_byte_116512 = var_value_116653.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)) ;
              }else if (kBoolFalse == test_8) {
                var_data_116112.addAssign_operation (var_value_116653.left_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405)).operator_or (var_byte_116512.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405)) ;
              }
            }
          }
          enumerator_116568.gotoNextObject () ;
          index_116527.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3396)) ;
        }
      }else if (kBoolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data16 '").add_operation (enumerator_115826.current_mDataName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).add_operation (enumerator_115826.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).add_operation (enumerator_115826.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_115826.current_mDataName (HERE).getter_string (HERE).add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3411)), enumerator_115826.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3411))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3411)), enumerator_115826.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3411)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3411)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3411)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3411)) ;
        }
        cEnumerator_immediatExpressionList enumerator_117308 (enumerator_115826.current_mValueList (HERE), kENUMERATION_UP) ;
        while (enumerator_117308.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_117388 ;
          callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_117308.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_117388, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)) ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_value_117388.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_117308.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_117388.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3415)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3415)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3415)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3415)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_value_117388.objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_117308.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_117388.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)).add_operation (GALGAS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)) ;
            }else if (kBoolFalse == test_11) {
              var_data_116112.addAssign_operation (var_value_117388.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3419))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3419)) ;
            }
          }
          enumerator_117308.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_115826.current_mDataName (HERE), var_data_116112, enumerator_115826.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3423)) ;
      }
      enumerator_115826.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'build_ipic18_block_representation_list'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (const GALGAS_string constinArgument_inSourceFileName,
                                                                       const GALGAS_sint_36__34_ constinArgument_inROMSize,
                                                                       const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_luint constinArgument_inBootloaderReservedROMsize,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_declaredByteMap constinArgument_inDeclaredByteMap,
                                                                       const GALGAS_pic_31__38_RoutineDefinitionList constinArgument_inRoutineDefinitionList,
                                                                       const GALGAS_programKind constinArgument_inProgramKind,
                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                       const GALGAS_stringset constinArgument_inUsedRegisters,
                                                                       const GALGAS_dataList constinArgument_inDataList,
                                                                       const GALGAS_pic_31__38_InterruptDefinitionList constinArgument_inInterruptDefinitionList,
                                                                       const GALGAS_lstringlist constinArgument_inUnusedRegisterList,
                                                                       const GALGAS_ramBankTable constinArgument_inRamBank,
                                                                       const GALGAS_bool constinArgument_inHasHighInterrupt,
                                                                       const GALGAS_bool constinArgument_inHasLowInterrupt,
                                                                       const GALGAS_string constinArgument_inProcessorName,
                                                                       const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                       const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                       const GALGAS_location constinArgument_inEndOfProgram,
                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap var_constantMap_119102 = constinArgument_inConstantMap ;
  GALGAS_stringset var_usedRegisters_119138 = constinArgument_inUsedRegisters ;
  GALGAS_routineMap var_routineMap_119225 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3460)) ;
  cEnumerator_routineDeclarationList enumerator_119318 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_119318.hasCurrentObject ()) {
    {
    var_routineMap_119225.setter_insertKey (enumerator_119318.current_mRoutineName (HERE), enumerator_119318.current_mIsNoReturn (HERE), enumerator_119318.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3462)), enumerator_119318.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3462)), enumerator_119318.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3462)) ;
    }
    enumerator_119318.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_119519 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_119519.hasCurrentObject ()) {
    {
    var_routineMap_119225.setter_insertKey (enumerator_119519.current_mRoutineName (HERE), enumerator_119519.current_mIsNoReturn (HERE), enumerator_119519.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3465)), enumerator_119519.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3465)), enumerator_119519.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3465)) ;
    }
    enumerator_119519.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_119681 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_119681.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_119681.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_119681.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_119681.current_mRequiredBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_119681.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_119681.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_119681.current_mReturnedBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)) ;
    }
    {
    var_routineMap_119225.setter_insertKey (enumerator_119681.current_mRoutineName (HERE), enumerator_119681.current_mIsNoReturn (HERE), enumerator_119681.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3474)), enumerator_119681.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3474)), enumerator_119681.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3474)) ;
    }
    enumerator_119681.gotoNextObject () ;
  }
  GALGAS_pic_31__38__5F_dataMap var_dataMap_121410 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_119102, ioArgument_ioListFileContents, var_dataMap_121410, var_constantMap_119102, var_usedRegisters_119138, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3497)) ;
  }
  {
  routine_print_5F_constant_5F_definition (var_constantMap_119102, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3512)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    const enumGalgasBool test_5 = var_routineMap_119225.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_bool var_isNoReturn_121768 ;
      GALGAS_uint var_requiredBank_121793 ;
      GALGAS_uint joker_121891 ; // Joker input parameter
      GALGAS_bool joker_121894 ; // Joker input parameter
      var_routineMap_119225.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516)), var_isNoReturn_121768, var_requiredBank_121793, joker_121891, joker_121894, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516)) ;
      const enumGalgasBool test_6 = var_isNoReturn_121768.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3517)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3518)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3518)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_121793.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3521)), GALGAS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3521)) ;
      }
    }else if (kBoolFalse == test_5) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3524)) ;
    }
  }
  GALGAS_ipic_31__38_BlockList var_generatedBlockList_122446 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3528)) ;
  GALGAS_uint var_entryPoint_122495 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_122578 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_122578.hasCurrentObject ()) {
    var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122495, enumerator_122578.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3534)), GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3535))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3535)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3536)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3531))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3531)) ;
    var_entryPoint_122495 = var_entryPoint_122495.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3539)) ;
    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_entryPoint_122495.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      var_entryPoint_122495 = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_entryPoint_122495.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_entryPoint_122495 = GALGAS_uint ((uint32_t) 28U) ;
      }
    }
    enumerator_122578.gotoNextObject () ;
  }
  var_entryPoint_122495 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3547)) ;
  cEnumerator_routineDeclarationList enumerator_123173 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_123173.hasCurrentObject ()) {
    var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122495, GALGAS_string ("_entry_user_").add_operation (var_entryPoint_122495.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3552)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_123173.current_mRoutineName (HERE).getter_location (HERE), enumerator_123173.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3554)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)) ;
    var_entryPoint_122495 = var_entryPoint_122495.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3557)) ;
    enumerator_123173.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3564)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)), GALGAS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3561))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3561)) ;
  }
  GALGAS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_124089 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_124089.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_lstring var_routineName_124292 ;
    {
    GALGAS_luint joker_124294 ; // Joker input parameter
    GALGAS_luint joker_124297 ; // Joker input parameter
    GALGAS_bool joker_124300 ; // Joker input parameter
    GALGAS_bool joker_124303 ; // Joker input parameter
    var_tempBootloaderRoutineDeclarationList_124089.setter_popFirst (var_routineName_124292, joker_124294, joker_124297, joker_124300, joker_124303, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3573)) ;
    }
    var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 4U), GALGAS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3577)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_124292.getter_location (HERE), var_routineName_124292, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3578))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3578)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3579)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)) ;
  }
  const enumGalgasBool test_15 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_15) {
    var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 8U), GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)), GALGAS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3590)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3585))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3585)) ;
  }
  var_entryPoint_122495 = GALGAS_uint ((uint32_t) 12U) ;
  if (var_tempBootloaderRoutineDeclarationList_124089.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596)).isValid ()) {
    uint32_t variant_125187 = var_tempBootloaderRoutineDeclarationList_124089.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596)).uintValue () ;
    bool loop_125187 = true ;
    while (loop_125187) {
      loop_125187 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_124089.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3597)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_122495.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3597)).isValid () ;
      if (loop_125187) {
        loop_125187 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_124089.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3597)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_122495.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3597)).boolValue () ;
      }
      if (loop_125187 && (0 == variant_125187)) {
        loop_125187 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596)) ;
      }
      if (loop_125187) {
        variant_125187 -- ;
        GALGAS_lstring var_routineName_125402 ;
        {
        GALGAS_luint joker_125404 ; // Joker input parameter
        GALGAS_luint joker_125407 ; // Joker input parameter
        GALGAS_bool joker_125410 ; // Joker input parameter
        GALGAS_bool joker_125413 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_124089.setter_popFirst (var_routineName_125402, joker_125404, joker_125407, joker_125410, joker_125413, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3599)) ;
        }
        var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122495, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_122495.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3603)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_125402.getter_location (HERE), var_routineName_125402, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3604))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3604)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3605)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600)) ;
        var_entryPoint_122495 = var_entryPoint_122495.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3608)) ;
      }
    }
  }
  const enumGalgasBool test_16 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_16) {
    var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 24U), GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3614)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616)), GALGAS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3617)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612)) ;
  }
  var_entryPoint_122495 = GALGAS_uint ((uint32_t) 28U) ;
  cEnumerator_routineDeclarationList enumerator_126337 (var_tempBootloaderRoutineDeclarationList_124089, kENUMERATION_UP) ;
  while (enumerator_126337.hasCurrentObject ()) {
    var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122495, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_122495.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3626)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3626)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3626)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3627)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_126337.current_mRoutineName (HERE).getter_location (HERE), enumerator_126337.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3628))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3628)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3629)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3624))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3624)) ;
    var_entryPoint_122495 = var_entryPoint_122495.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3632)) ;
    enumerator_126337.gotoNextObject () ;
  }
  GALGAS_uint var_localLabelIndex_126841 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_17 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_17) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_126914 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
    while (enumerator_126914.hasCurrentObject ()) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_126914.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_uint var_currentBank_126988 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_127048 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)) ;
        GALGAS_lstring var_currentBlockLabel_127125 = GALGAS_lstring::constructor_new (GALGAS_string ("_low_interrupt"), enumerator_126914.current_mInterruptName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)) ;
        {
        routine_analyzeInstructionList (enumerator_126914.current_mInstructionList (HERE), var_generatedBlockList_122446, constinArgument_inAccessBankSplitOffset, var_routineMap_119225, constinArgument_inRegisterTable, var_dataMap_121410, var_constantMap_119102, constinArgument_inMacroMap, var_localLabelIndex_126841, var_generatedInstructionList_127048, var_currentBlockLabel_127125, ioArgument_ioListFileContents, var_currentBank_126988, enumerator_126914.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3657)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3658)), var_usedRegisters_119138, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3643)) ;
        }
        const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_currentBlockLabel_127125.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_126914.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray20  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3662)) ;
        }
        var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3666)), var_currentBlockLabel_127125, var_generatedInstructionList_127048, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_126914.current_mInterruptName (HERE).getter_location (HERE), enumerator_126914.current_mFastReturn (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3669)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3670)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3665))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3665)) ;
      }
      enumerator_126914.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_21 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_21) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_128339 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
    while (enumerator_128339.hasCurrentObject ()) {
      const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, enumerator_128339.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3679)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_22) {
        GALGAS_uint var_currentBank_128414 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3680)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_128474 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3681)) ;
        GALGAS_lstring var_currentBlockLabel_128551 = GALGAS_lstring::constructor_new (GALGAS_string ("_high_interrupt"), enumerator_128339.current_mInterruptName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3682)) ;
        {
        routine_analyzeInstructionList (enumerator_128339.current_mInstructionList (HERE), var_generatedBlockList_122446, constinArgument_inAccessBankSplitOffset, var_routineMap_119225, constinArgument_inRegisterTable, var_dataMap_121410, var_constantMap_119102, constinArgument_inMacroMap, var_localLabelIndex_126841, var_generatedInstructionList_128474, var_currentBlockLabel_128551, ioArgument_ioListFileContents, var_currentBank_128414, enumerator_128339.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3697)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3698)), var_usedRegisters_119138, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3683)) ;
        }
        const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, var_currentBlockLabel_128551.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (enumerator_128339.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3702)) ;
        }
        var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)), var_currentBlockLabel_128551, var_generatedInstructionList_128474, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_128339.current_mInterruptName (HERE).getter_location (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3710)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3705))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3705)) ;
      }
      enumerator_128339.gotoNextObject () ;
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_129703 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_129703.hasCurrentObject ()) {
    GALGAS_uint var_currentBank_129728 = enumerator_129703.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)) ;
    GALGAS_routineKind var_routineKind_129780 ;
    const enumGalgasBool test_25 = enumerator_129703.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_25) {
      var_routineKind_129780 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3721)) ;
    }else if (kBoolFalse == test_25) {
      var_routineKind_129780 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3723)) ;
    }
    GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_129953 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3725)) ;
    GALGAS_lstring var_currentBlockLabel_130031 = enumerator_129703.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList (enumerator_129703.current_mInstructionList (HERE), var_generatedBlockList_122446, constinArgument_inAccessBankSplitOffset, var_routineMap_119225, constinArgument_inRegisterTable, var_dataMap_121410, var_constantMap_119102, constinArgument_inMacroMap, var_localLabelIndex_126841, var_generatedInstructionList_129953, var_currentBlockLabel_130031, ioArgument_ioListFileContents, var_currentBank_129728, enumerator_129703.current_mPreservesBank (HERE), var_routineKind_129780, var_usedRegisters_119138, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3727)) ;
    }
    GALGAS_bool var_continuesInSequence_130483 = GALGAS_bool (kIsNotEqual, var_currentBlockLabel_130031.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
    const enumGalgasBool test_26 = var_continuesInSequence_130483.boolEnum () ;
    if (kBoolTrue == test_26) {
      var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3749)), var_currentBlockLabel_130031, var_generatedInstructionList_129953, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (enumerator_129703.current_mRoutineName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3752)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3753)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3748))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3748)) ;
    }
    const enumGalgasBool test_27 = enumerator_129703.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_129703.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_129728.objectCompare (enumerator_129703.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)).boolEnum () ;
    if (kBoolTrue == test_27) {
      TC_Array <C_FixItDescription> fixItArray28 ;
      inCompiler->emitSemanticError (enumerator_129703.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3759)), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_129703.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3759)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3759)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3759)), fixItArray28  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3759)) ;
    }
    const enumGalgasBool test_29 = enumerator_129703.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_130483 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3761)).boolEnum () ;
    if (kBoolTrue == test_29) {
      TC_Array <C_FixItDescription> fixItArray30 ;
      inCompiler->emitSemanticError (enumerator_129703.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3762)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray30  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3762)) ;
    }
    enumerator_129703.gotoNextObject () ;
  }
  GALGAS_registerExpression var_WREGregister_131383 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("WREG"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3769))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3769)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3770))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3770))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3770)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3771))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3768)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_131741 ;
  GALGAS_bitSliceTable joker_131747 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_WREGregister_131383.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119102, GALGAS_bool (false), var_WREG_5F_IPICregisterDescription_131741, joker_131747, var_usedRegisters_119138, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3773)) ;
  GALGAS_registerExpression var_TOSLregister_131825 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_132182 ;
  GALGAS_bitSliceTable joker_132188 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSLregister_131825.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119102, GALGAS_bool (true), var_TOSL_5F_IPICregisterDescription_132182, joker_132188, var_usedRegisters_119138, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3789)) ;
  GALGAS_registerExpression var_TOSHregister_132266 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3801))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3801)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3802))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3802))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3802)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3803))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3800)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_132622 ;
  GALGAS_bitSliceTable joker_132628 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSHregister_132266.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119102, GALGAS_bool (true), var_TOSH_5F_IPICregisterDescription_132622, joker_132628, var_usedRegisters_119138, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3805)) ;
  GALGAS_registerExpression var_TOSUregister_132706 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3817))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3817)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3818))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3818))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3818)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3819))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3816)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_133061 ;
  GALGAS_bitSliceTable joker_133067 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSUregister_132706.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119102, GALGAS_bool (true), var_TOSU_5F_IPICregisterDescription_133061, joker_133067, var_usedRegisters_119138, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3821)) ;
  GALGAS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_133143 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3833)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3834)), var_WREG_5F_IPICregisterDescription_131741, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3832)) ;
  GALGAS_ipic_31__38_Block var_goto_34_Block_133356 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3840)), GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3841)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_listWithValue (var_ADDWF_5F_WREG_133143, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3842)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3842)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3843)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3843)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3843))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3843)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3844)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3839)) ;
  var_generatedBlockList_122446.addAssign_operation (var_goto_34_Block_133356  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3847)) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_133753 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3849)) ;
  var_goto_32_InstructionList_133753.addAssign_operation (var_ADDWF_5F_WREG_133143, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3850)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3850)) ;
  var_goto_32_InstructionList_133753.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3852)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3853)), var_TOSL_5F_IPICregisterDescription_132182, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3851)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3855)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3851)) ;
  var_goto_32_InstructionList_133753.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3857)), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3858)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3856)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3859)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3856)) ;
  var_goto_32_InstructionList_133753.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3861)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3862)), var_TOSH_5F_IPICregisterDescription_132622, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3864)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)) ;
  var_goto_32_InstructionList_133753.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3866)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3867)), var_TOSU_5F_IPICregisterDescription_133061, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3865)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3871)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3865)) ;
  GALGAS_ipic_31__38_Block var_goto_32_Block_134723 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3875)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3876)), var_goto_32_InstructionList_133753, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3878))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3878)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3879)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3874)) ;
  var_generatedBlockList_122446.addAssign_operation (var_goto_32_Block_134723  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3882)) ;
  var_entryPoint_122495 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3884)) ;
  cEnumerator_routineDeclarationList enumerator_135137 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_135137.hasCurrentObject ()) {
    const enumGalgasBool test_31 = enumerator_135137.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_31) {
      var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122495, enumerator_135137.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3890)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_135137.current_mRoutineName (HERE).getter_location (HERE), enumerator_135137.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3891))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3891)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3892)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3887))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3887)) ;
    }else if (kBoolFalse == test_31) {
      GALGAS_ipic_31__38_SequentialInstructionList var_instructionList_135493 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3896)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, enumerator_135137.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3897)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3897)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_instructionList_135493.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3898)), enumerator_135137.current_mReturnedBank (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3898)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3898)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3898)) ;
      }
      var_generatedBlockList_122446.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122495, enumerator_135137.current_mRoutineName (HERE), var_instructionList_135493, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3904))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3904)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3905)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3900))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3900)) ;
    }
    var_entryPoint_122495 = var_entryPoint_122495.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3909)) ;
    enumerator_135137.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_136103 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3912)) ;
  cEnumerator_lstringlist enumerator_136160 (constinArgument_inUnusedRegisterList, kENUMERATION_UP) ;
  while (enumerator_136160.hasCurrentObject ()) {
    const enumGalgasBool test_33 = constinArgument_inRegisterTable.getter_hasKey (enumerator_136160.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3914)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3914)).boolEnum () ;
    if (kBoolTrue == test_33) {
      TC_Array <C_FixItDescription> fixItArray34 ;
      inCompiler->emitSemanticError (enumerator_136160.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3915)), GALGAS_string ("the '").add_operation (enumerator_136160.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3915)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3915)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3915)), fixItArray34  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3915)) ;
    }else if (kBoolFalse == test_33) {
      const enumGalgasBool test_35 = var_unusedDeclarationUnicity_136103.getter_hasKey (enumerator_136160.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3916)).boolEnum () ;
      if (kBoolTrue == test_35) {
        TC_Array <C_FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticWarning (enumerator_136160.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3917)), GALGAS_string ("the '").add_operation (enumerator_136160.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3917)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3917)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3917)), fixItArray36  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3917)) ;
      }else if (kBoolFalse == test_35) {
        const enumGalgasBool test_37 = var_usedRegisters_119138.getter_hasKey (enumerator_136160.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3918)).boolEnum () ;
        if (kBoolTrue == test_37) {
          TC_Array <C_FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticWarning (enumerator_136160.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3919)), GALGAS_string ("the '").add_operation (enumerator_136160.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3919)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3919)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3919)), fixItArray38  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3919)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_136103.addAssign_operation (enumerator_136160.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3921)) ;
    enumerator_136160.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_136660 (constinArgument_inDeclaredByteMap, kENUMERATION_UP) ;
  while (enumerator_136660.hasCurrentObject ()) {
    const enumGalgasBool test_39 = var_usedRegisters_119138.getter_hasKey (enumerator_136660.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)).operator_and (var_unusedDeclarationUnicity_136103.getter_hasKey (enumerator_136660.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)).boolEnum () ;
    if (kBoolTrue == test_39) {
      TC_Array <C_FixItDescription> fixItArray40 ;
      inCompiler->emitSemanticWarning (enumerator_136660.current_lkey (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)), GALGAS_string ("the '").add_operation (enumerator_136660.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)), fixItArray40  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)) ;
    }
    enumerator_136660.gotoNextObject () ;
  }
  {
  routine_displayBlockList (GALGAS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_122446, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3929)) ;
  }
  const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3931)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_41) {
    {
    routine_ipic_31__38_OptimizeBlocks (ioArgument_ioListFileContents, var_generatedBlockList_122446, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3932)) ;
    }
    {
    routine_displayBlockList (GALGAS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_122446, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3933)) ;
    }
  }
  const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_42) {
    {
    routine_ipic_31__38_OptimizeBlockOrdering (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_122446, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3937)) ;
    }
  }
  const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3944)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_43) {
    {
    routine_ipic_31__38_RelativesResolution (ioArgument_ioListFileContents, var_generatedBlockList_122446, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3945)) ;
    }
  }
  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3951)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3951)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3951)).boolEnum () ;
  if (kBoolTrue == test_44) {
    {
    routine_ipic_31__38_StackComputations (ioArgument_ioListFileContents, var_generatedBlockList_122446, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3952)) ;
    }
  }
  GALGAS_blockDurationMap var_blockDurationMap_138161 = GALGAS_blockDurationMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3958)) ;
  const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3959)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_45) {
    {
    routine_ipic_31__38_DurationComputations (var_generatedBlockList_122446, var_blockDurationMap_138161, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3960)) ;
    }
  }
  const enumGalgasBool test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3963)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_46) {
    GALGAS_uint var_usedROMsize_138723 ;
    GALGAS_generatedCodeMap var_generatedCodeMap_138776 ;
    {
    routine_ipic_31__38_GenerateCode (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3967)), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3968)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_121410, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_122446, var_usedROMsize_138723, var_generatedCodeMap_138776, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3964)) ;
    }
    const enumGalgasBool test_47 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3980)).boolEnum () ;
    if (kBoolTrue == test_47) {
      GALGAS_string var_verboseMessage_138925 = GALGAS_string ("Resource usage:\n") ;
      var_verboseMessage_138925.plusAssign_operation(GALGAS_string ("  ROM size: ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3982)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3982)).add_operation (GALGAS_string (" bytes;"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3982)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3982)) ;
      var_verboseMessage_138925.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_138723.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3983)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3983)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3983)) ;
      var_verboseMessage_138925.plusAssign_operation(var_usedROMsize_138723.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3984)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3984)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3984)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3984)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3984)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3984)) ;
      cEnumerator_ramBankTable enumerator_139182 (constinArgument_inRamBank, kENUMERATION_UP) ;
      while (enumerator_139182.hasCurrentObject ()) {
        GALGAS_uint var_bankSize_139208 = enumerator_139182.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_139182.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3986)) ;
        GALGAS_uint var_usedSize_139269 = enumerator_139182.current_mFirstFreeAddress (HERE).substract_operation (enumerator_139182.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3987)) ;
        var_verboseMessage_138925.plusAssign_operation(GALGAS_string ("  RAM bank '").add_operation (enumerator_139182.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3988)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3988)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3988)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3988)) ;
        var_verboseMessage_138925.plusAssign_operation(var_bankSize_139208.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3989)).add_operation (GALGAS_string (" bytes, used "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3989)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3989)) ;
        var_verboseMessage_138925.plusAssign_operation(var_usedSize_139269.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3990)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3990)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3990)) ;
        var_verboseMessage_138925.plusAssign_operation(var_usedSize_139269.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3991)).divide_operation (var_bankSize_139208, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3991)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3991)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3991)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3991)) ;
        enumerator_139182.gotoNextObject () ;
      }
      inCompiler->printMessage (var_verboseMessage_138925  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3993)) ;
    }
  }
  const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3997)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_48) {
    {
    routine_ipic_31__38_PrintDurations (ioArgument_ioListFileContents, var_blockDurationMap_138161, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3998)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                  const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                  const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                  const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                  const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                  GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                   const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                   const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                   const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                   GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@ipic18JumpTerminator optimizeTerminator'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                           const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                           GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mProperty_mLabel.getter_string (HERE))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_uint var_targetBlockIndex_2048 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mLabel, var_targetBlockIndex_2048, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
    GALGAS_ipic_31__38_Block var_targetBlock_2082 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2048, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock_2082.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_2082.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2082.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_optimize_2354 ;
      const enumGalgasBool test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.getter_mTerminator (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_ipic_31__38_JumpTerminator temp_4 ;
        if (var_targetBlock_2082.getter_mTerminator (HERE).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.getter_mTerminator (HERE).ptr ())) {
            temp_4 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2082.getter_mTerminator (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2082.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_candidate_2466 = temp_4 ;
        var_optimize_2354 = GALGAS_bool (kIsNotEqual, object->mProperty_mLabel.getter_string (HERE).objectCompare (var_candidate_2466.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 61)).getter_string (HERE))) ;
      }else if (kBoolFalse == test_3) {
        var_optimize_2354 = GALGAS_bool (true) ;
      }
      const enumGalgasBool test_5 = var_optimize_2354.boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outOptimizedTerminator = var_targetBlock_2082.getter_mTerminator (HERE) ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)) ;
        const GALGAS_ipic_31__38_JumpTerminator temp_6 = object ;
        ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_6.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 70)) ;
        ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@ipic18ConditionalJumpTerminator optimizeTerminator'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                      const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                      const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                      GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTargetLabelWhenTrue.getter_string (HERE).objectCompare (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabelWhenFalse, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 93))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 90)) ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (object->mProperty_mTargetLabelWhenFalse.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)) ;
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 96)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_optimized_3986 = GALGAS_bool (false) ;
    GALGAS_lstring var_targetLabelWhenTrue_4054 = object->mProperty_mTargetLabelWhenTrue ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mProperty_mTargetLabelWhenTrue.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_targetBlockIndex_4214 ;
      constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenTrue, var_targetBlockIndex_4214, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 102)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_4250 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_4214, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 103)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetBlock_4250.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 104)))).operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mTargetLabelWhenTrue.getter_string (HERE).objectCompare (var_targetLabelWhenTrue_4054.getter_string (HERE))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 104)).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_4250.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 106)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4250.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 106)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_ipic_31__38_JumpTerminator temp_4 ;
        if (var_targetBlock_4250.getter_mTerminator (HERE).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4250.getter_mTerminator (HERE).ptr ())) {
            temp_4 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_4250.getter_mTerminator (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_4250.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 108)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp_4600 = temp_4 ;
        var_targetLabelWhenTrue_4054 = var_jp_4600.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 109)) ;
        var_optimized_3986 = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 111)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 111)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mTargetLabelWhenTrue.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenTrue_4054.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 115)) ;
      }
    }
    GALGAS_lstring var_targetLabelWhenFalse_5068 = object->mProperty_mTargetLabelWhenFalse ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_uint var_targetBlockIndex_5231 ;
      constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenFalse, var_targetBlockIndex_5231, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 121)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_5267 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_5231, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 122)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_targetBlock_5267.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 123)))).operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mTargetLabelWhenFalse.getter_string (HERE).objectCompare (var_targetLabelWhenFalse_5068.getter_string (HERE))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_5267.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 125)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 124)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5267.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 125)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_ipic_31__38_JumpTerminator temp_7 ;
        if (var_targetBlock_5267.getter_mTerminator (HERE).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5267.getter_mTerminator (HERE).ptr ())) {
            temp_7 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_5267.getter_mTerminator (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_5267.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 127)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp_5619 = temp_7 ;
        var_targetLabelWhenFalse_5068 = var_jp_5619.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 128)) ;
        var_optimized_3986 = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 130)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 130)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mTargetLabelWhenFalse.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenFalse_5068.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 133)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 134)) ;
      }
    }
    const enumGalgasBool test_8 = var_optimized_3986.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mConditionalBranch, var_targetLabelWhenTrue_4054, object->mProperty_mBranchModeOnTrueLabel, var_targetLabelWhenFalse_5068, object->mProperty_mBranchModeOnFalseLabel  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 140)) ;
    }else if (kBoolFalse == test_8) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
      outArgument_outOptimizedTerminator = temp_9 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@ipic18IncDecRegisterTerminator optimizeTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     const GALGAS_string constinArgument_inBlockLabel,
                                                                                     GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  GALGAS_bool var_optimization_9135 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_9372 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_9441 ;
  GALGAS_bool var_identicalTerminators_9477 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_9135, ioArgument_ioListFileContents, var_optimizedTrueTerminator_9372, var_optimizedFalseTerminator_9441, var_identicalTerminators_9477, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 215)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_9477.boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
    outArgument_outOptimizedTerminator = temp_2 ;
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("useless decf/incf condition should be replaced by decf/incf instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 228)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_4 = var_optimization_9135.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_9372, var_optimizedFalseTerminator_9441, object->mProperty_mRegisterDescription, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 230)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_4) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = object ;
      outArgument_outOptimizedTerminator = temp_5 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18BitTestTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                             const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                             const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                             const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                             const GALGAS_string constinArgument_inBlockLabel,
                                                                             GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  GALGAS_bool var_optimization_10436 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_10673 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_10742 ;
  GALGAS_bool var_identicalTerminators_10778 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_10436, ioArgument_ioListFileContents, var_optimizedTrueTerminator_10673, var_optimizedFalseTerminator_10742, var_identicalTerminators_10778, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 255)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_10778.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_10673 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 269)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 269)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_10673.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 269)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization_10436.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_10673, var_optimizedFalseTerminator_10742, object->mProperty_mRegisterDescription, object->mProperty_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                           extensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@pic18RegisterComparisonTerminator optimizeTerminator'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_bool var_optimization_11876 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_12108 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_12177 ;
  GALGAS_bool var_identicalTerminators_12213 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_11876, ioArgument_ioListFileContents, var_optimizedTrueTerminator_12108, var_optimizedFalseTerminator_12177, var_identicalTerminators_12213, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 295)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_12213.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_12108 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 309)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 309)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_12108.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 309)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 309)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization_11876.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_12108, var_optimizedFalseTerminator_12177, object->mProperty_mRegisterDescription, object->mProperty_mComparison  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                           extensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18TestRegisterTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                  const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                  GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_bool var_optimization_13317 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_13549 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_13618 ;
  GALGAS_bool var_identicalTerminators_13654 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_13317, ioArgument_ioListFileContents, var_optimizedTrueTerminator_13549, var_optimizedFalseTerminator_13618, var_identicalTerminators_13654, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 335)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_13654.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_13549 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 349)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 349)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_13549.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 349)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 349)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization_13317.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_13549, var_optimizedFalseTerminator_13618, object->mProperty_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                           extensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@ipic18RetfieTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                             const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                             const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                             const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                             const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                             GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@ipic18RetlwTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                            const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                            const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                            const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                            const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                            GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@ipic18ReturnTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                             const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                             const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                             const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                             const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                             GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ReturnTerminator * object = (const cPtr_ipic_31__38_ReturnTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ReturnTerminator) ;
  const GALGAS_ipic_31__38_ReturnTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@ipic18ComputedRETLWTerminator optimizeTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                    const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                    const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                    GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                                    GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto2block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_32_block (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 425)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 425)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 426)) ;
    GALGAS_uint var_blockIndex_16841 ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 427)), var_blockIndex_16841, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 427)) ;
    GALGAS_ipic_31__38_Block var_b_16865 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_16841, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 428)) ;
    extensionMethod_enterReferencedLabels (var_b_16865, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 429)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto4block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_34_block (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 443)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 443)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 444)) ;
    GALGAS_uint var_blockIndex_17443 ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 445)), var_blockIndex_17443, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 445)) ;
    GALGAS_ipic_31__38_Block var_b_17467 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17443, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 446)) ;
    extensionMethod_enterReferencedLabels (var_b_17467, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 447)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                 const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 468)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 481)) ;
  }
  cEnumerator_lstringlist enumerator_18685 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_18685.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_18685.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 487)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 487)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_18685.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 488)) ;
      GALGAS_uint var_blockIndex_18855 ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_18685.current_mValue (HERE), var_blockIndex_18855, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 489)) ;
      GALGAS_ipic_31__38_Block var_b_18881 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_18855, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 490)) ;
      extensionMethod_enterReferencedLabels (var_b_18881, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 491)) ;
    }
    enumerator_18685.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 506)) ;
  }
  cEnumerator_lstringlist enumerator_19455 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_19455.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19455.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 512)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 512)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_19455.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 513)) ;
      GALGAS_uint var_blockIndex_19625 ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_19455.current_mValue (HERE), var_blockIndex_19625, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 514)) ;
      GALGAS_ipic_31__38_Block var_b_19651 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19625, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 515)) ;
      extensionMethod_enterReferencedLabels (var_b_19651, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 516)) ;
    }
    enumerator_19455.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ipic18JumpTerminator enterTerminatorReferencedLabels'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mLabel.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 531)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 531)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 532)) ;
    GALGAS_uint var_blockIndex_20264 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mLabel, var_blockIndex_20264, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 533)) ;
    GALGAS_ipic_31__38_Block var_b_20288 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20264, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 534)) ;
    extensionMethod_enterReferencedLabels (var_b_20288, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 535)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                   const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                   GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mTargetLabelWhenTrue.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 549)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 549)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mTargetLabelWhenTrue.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 550)) ;
    GALGAS_uint var_blockIndex_20936 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenTrue, var_blockIndex_20936, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 551)) ;
    GALGAS_ipic_31__38_Block var_b_20960 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20936, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 552)) ;
    extensionMethod_enterReferencedLabels (var_b_20960, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 553)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 559)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 559)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 560)) ;
    GALGAS_uint var_blockIndex_21318 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenFalse, var_blockIndex_21318, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 561)) ;
    GALGAS_ipic_31__38_Block var_b_21342 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21318, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 562)) ;
    extensionMethod_enterReferencedLabels (var_b_21342, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 563)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                                     const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                     const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                     GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callExtensionMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mProperty_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 585)) ;
  callExtensionMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mProperty_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 586)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@ipic18_intermediate_JSR enterInstructionReferencedLabels'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 607)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 607)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 608)) ;
    GALGAS_uint var_blockIndex_23259 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_blockIndex_23259, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 609)) ;
    GALGAS_ipic_31__38_Block var_b_23283 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_23259, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 610)) ;
    extensionMethod_enterReferencedLabels (var_b_23283, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 611)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 625)) ;
  }
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_23864 (object->mProperty_mTargetInstructions, kENUMERATION_UP) ;
  while (enumerator_23864.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_23864.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 631)) ;
    enumerator_23864.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callExtensionMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 645)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@ipic18_intermediate_JSR optimizeInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                     const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                     GALGAS_bool & outArgument_outOptimizationDone,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                     GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_uint var_targetBlockIndex_25735 ;
  constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_targetBlockIndex_25735, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 688)) ;
  GALGAS_ipic_31__38_Block var_targetBloc_25767 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_25735, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 689)) ;
  const enumGalgasBool test_1 = constinArgument_inOptimizeFlagStruct.getter_mRemoveEmptyRoutine (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25767.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 692)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25767.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 693)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 692)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_25767.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 693)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to empty ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)).add_operation (GALGAS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 698)) ;
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mProperty_mInstructionLocation, GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 699))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)) ;
    outArgument_outNOPsubstitution = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoRETLWreplacedByMOVLW (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25767.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 703)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 702)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25767.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 704)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 703)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_25767.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 704)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_ipic_31__38_RetlwTerminator temp_3 ;
      if (var_targetBloc_25767.getter_mTerminator (HERE).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_25767.getter_mTerminator (HERE).ptr ())) {
          temp_3 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc_25767.getter_mTerminator (HERE).ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc_25767.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)) ;
        }
      }
      GALGAS_ipic_31__38_RetlwTerminator var_t_26821 = temp_3 ;
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to RETLW ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)).add_operation (GALGAS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 710)) ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 713)), var_t_26821.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 714))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoOneInstructionRoutineReplacedByInstruction (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25767.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 717)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 716)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25767.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 718)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 717)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_25767.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 718)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outOptimizedInstruction = var_targetBloc_25767.getter_mInstructionList (HERE).getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)) ;
        outArgument_outOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to single instruction routine ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)).add_operation (GALGAS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 724)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                            extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                  const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                  const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                                  GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                                  GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_28582 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 743)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_28620 (object->mProperty_mTargetInstructions, kENUMERATION_UP) ;
  while (enumerator_28620.hasCurrentObject ()) {
    GALGAS_bool var_opt_28637 = GALGAS_bool (false) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28620.current_mInstruction (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 ;
      if (enumerator_28620.current_mInstruction (HERE).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28620.current_mInstruction (HERE).ptr ())) {
          temp_1 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_28620.current_mInstruction (HERE).ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_28620.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 747)) ;
        }
      }
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_28742 = temp_1 ;
      GALGAS_uint var_targetBlockIndex_28867 ;
      constinArgument_inSymbolTable.method_searchKey (var_jsr_28742.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 748)), var_targetBlockIndex_28867, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 748)) ;
      GALGAS_ipic_31__38_Block var_targetBloc_28903 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_28867, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 749)) ;
      const enumGalgasBool test_2 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_28903.getter_mTerminator (HERE).ptr ())).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28903.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 751)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 750)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28903.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 753)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 752)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_opt_28637 = GALGAS_bool (true) ;
          outArgument_outOptimizationDone = GALGAS_bool (true) ;
          var_optimizedInstructionList_28582.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_new (var_jsr_28742.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_28742.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 758)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 758)).add_operation (GALGAS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 758)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 758)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 759)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28903.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 761)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_ipic_31__38_SequentialInstruction var_inst_29900 = var_targetBloc_28903.getter_mInstructionList (HERE).getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 762)) ;
            const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst_29900.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 763)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_opt_28637 = GALGAS_bool (true) ;
              outArgument_outOptimizationDone = GALGAS_bool (true) ;
              var_optimizedInstructionList_28582.addAssign_operation (var_inst_29900, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_28742.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 768)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 768)).add_operation (GALGAS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 768)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 768)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 769)) ;
            }
          }
        }
      }
    }
    const enumGalgasBool test_6 = var_opt_28637.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 774)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_optimizedInstructionList_28582.addAssign_operation (enumerator_28620.current_mInstruction (HERE), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 775)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 775)) ;
    }
    enumerator_28620.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mProperty_mInstructionLocation, var_optimizedInstructionList_28582, object->mProperty_mUsesRCALL  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 779)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = object ;
    outArgument_outOptimizedInstruction = temp_8 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                            extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                    const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                    const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                    const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                    const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                    GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                    GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_31526 ;
  GALGAS_bool joker_31532 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_31526, joker_31532, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 801)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mProperty_mInstructionLocation, var_optimizedEmbeddedInstruction_31526, object->mProperty_mSkipIfSet, object->mProperty_mRegisterDescription, object->mProperty_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 812)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@ipic18_skip_instruction_compare_register optimizeInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                            const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                            const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                            const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                            GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                            GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_32567 ;
  GALGAS_bool joker_32573 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_32567, joker_32573, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 836)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mProperty_mInstructionLocation, var_optimizedEmbeddedInstruction_32567, object->mProperty_mCompareInstruction, object->mProperty_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 847)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction, NULL) ;

