#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_string var_s = GALGAS_string ("COMPUTED ") ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 956)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string ("(uses CALL)")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 957)) ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 959)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_31368 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_31368.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_31420 (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_31368.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 961)), kEnumeration_up) ;
    while (enumerator_31420.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GALGAS_string ("   ").add_operation (enumerator_31420.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 962))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 962)) ;
      enumerator_31420.gotoNextObject () ;
    }
    enumerator_31368.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_uint temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address = constinArgument_inAddress.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 974)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_31894 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_31894.hasCurrentObject ()) {
    callCategoryMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_31894.current_mInstruction (HERE).ptr (), var_address, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 976)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 982)) ;
    enumerator_31894.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 985)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 985)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 985)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 986)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (void) {
  enterCategoryMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                         categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_uint var_unusedConversionCount = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_unusedListing = GALGAS_string::makeEmptyString () ;
  GALGAS_uint temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address = constinArgument_inAddress.add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1003)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32855 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_32855.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction joker_33081 ; // Joker input parameter
    callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32855.current_mInstruction (HERE).ptr (), var_address, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount, var_unusedListing, joker_33081, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1006)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
    enumerator_32855.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1017)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1017)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1017)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1018)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1019)).add_operation (GALGAS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1019))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1019)) ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetInstructions, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1020)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18_intermediate_instruction_computed_rcall generateCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                          const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                          GALGAS_codeList & outArgument_outCode,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_lstring var_target = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_goto_4"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1035)) ;
  GALGAS_uint var_computetedGoto_34_Address ;
  constinArgument_inSymbolTable.method_searchKey (var_target, var_computetedGoto_34_Address, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)) ;
  GALGAS_uint var_currentInstructionAddress ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_currentInstructionAddress = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address, var_target, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1042)) ;
  }else if (kBoolFalse == test_0) {
    var_currentInstructionAddress = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1044)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address, var_target, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1045)) ;
  }
  GALGAS_uint var_instructionFollowingComputedRcallAddress = var_currentInstructionAddress.add_operation (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)).multiply_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)) ;
  GALGAS_lstring var_nextInstructionLabel = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.reader_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1048)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1048)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1048)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34648 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_34648.hasCurrentObject ()) {
    var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1051)) ;
    GALGAS_codeList var_instructionCode ;
    callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_34648.current_mInstruction (HERE).ptr (), var_currentInstructionAddress, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
    outArgument_outCode.dotAssign_operation (var_instructionCode  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1058)) ;
    var_currentInstructionAddress = var_currentInstructionAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1059)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1060)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress, var_instructionFollowingComputedRcallAddress, var_nextInstructionLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1061))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1061)) ;
      var_currentInstructionAddress = var_currentInstructionAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1062)) ;
    }
    enumerator_34648.gotoNextObject () ;
  }
  outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1066))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1066)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_IF_BitTest addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                    const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                                const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_IF_IncDec addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_JUMP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_JUMPCC addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_FOREVER addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@pic18Instruction_repetitionStatique addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_checkbank addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_LDATAPTR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_LTBLPTR addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_MNOP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_banksel addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_checknobank addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                  const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@pic18Instruction_banksel_register addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_computed_bra addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                      const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  cEnumerator_lstringlist enumerator_3933 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_3933.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_3933.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 135)) ;
    enumerator_3933.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_computed_goto addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  cEnumerator_lstringlist enumerator_4224 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_4224.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4224.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 146)) ;
    enumerator_4224.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_computed_rcall addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  cEnumerator_lstringlist enumerator_4516 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_4516.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4516.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 157)) ;
    enumerator_4516.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_computed_retlw addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_do_while addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                  const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                  GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mRepeatedInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 175)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5122 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_5122.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_5122.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 177)) ;
    }
    enumerator_5122.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_nobanksel addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_savebank addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 195)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_structured_if addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 204)) ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 205)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_switch addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_switch * object = (const cPtr_pic_31__38_Instruction_5F_switch *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_switch) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_6375 (object->mAttribute_mCaseList, kEnumeration_up) ;
  while (enumerator_6375.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_6375.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 215)) ;
    }
    enumerator_6375.gotoNextObject () ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 217)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_macro addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_macro * object = (const cPtr_pic_31__38_Instruction_5F_macro *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_macro) ;
  GALGAS_pic_31__38_InstructionList var_instructionList ;
  GALGAS_lstringlist joker_6815 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (object->mAttribute_mMacroName, joker_6815, var_instructionList, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 226)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (var_instructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 227)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pic18Instruction_FA addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_FBA addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_FDA addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_JSR addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 260)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_LFSR addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_MOVFF addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_TBLWT addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_TBLRD addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@pic18Instruction_literalOperation addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                       GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_fnop addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_withNoOperand addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                    const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_block addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9584 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_9584.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_9584.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 326)) ;
    }
    enumerator_9584.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_block_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_block_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_FOREVER performInlining'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                              const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                              GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  GALGAS_pic_31__38_InstructionList var_instructionList ;
  {
  routine_performInlineFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 32)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (object->mAttribute_mInstructionLocation, var_instructionList, object->mAttribute_mEndOfInstructionList  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 39))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 39)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (void) {
  enterCategoryMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_FOREVER_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_do_while performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                  const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                  const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                  const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                  GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  GALGAS_pic_31__38_InstructionList var_repeatedInstructionList ;
  {
  routine_performInlineFromInstructionList (object->mAttribute_mRepeatedInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 52)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 59)) ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_1995 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_1995.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList ;
    {
    routine_performInlineFromInstructionList (enumerator_1995.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 61)) ;
    }
    var_whilePartList.addAssign_operation (enumerator_1995.current_mCondition (HERE), var_instructionList, enumerator_1995.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 68)) ;
    enumerator_1995.gotoNextObject () ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (object->mAttribute_mInstructionLocation, var_repeatedInstructionList, object->mAttribute_mEndOfRepeatedInstructionList, var_whilePartList  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 70))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 70)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (void) {
  enterCategoryMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (defineCategoryMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_savebank performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_savebank_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                               GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  GALGAS_pic_31__38_InstructionList var_instructionList ;
  {
  routine_performInlineFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegister, var_instructionList, object->mAttribute_mEndOfSaveBankInstruction  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 91))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 91)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_savebank_performInlining (void) {
  enterCategoryMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_savebank_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_performInlining (defineCategoryMethod_pic_31__38_Instruction_5F_savebank_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_structured_if performInlining'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                       const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                       const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                       GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  GALGAS_pic_31__38_InstructionList var_thenInstructionList ;
  {
  routine_performInlineFromInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 105)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList ;
  {
  routine_performInlineFromInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 112)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mIfCondition, var_thenInstructionList, var_elseInstructionList, object->mAttribute_mEndOfElsePartLocation  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 119))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 119)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (void) {
  enterCategoryMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (defineCategoryMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_JSR performInlining'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JSR_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                          const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                          const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                          const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                          GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  GALGAS_bool var_inlineDone ;
  const enumGalgasBool test_0 = constinArgument_inDeclaredRoutineMap.reader_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 135)).operator_and (constinArgument_inInlinedRoutineSet.reader_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 136)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 135)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.reader_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 136)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_luint var_requiredBank ;
    GALGAS_bool var_isNoReturn ;
    GALGAS_pic_31__38_InstructionList var_instructionList ;
    GALGAS_luint joker_4648 ; // Joker input parameter
    GALGAS_bool joker_4680 ; // Joker input parameter
    constinArgument_inDeclaredRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_requiredBank, joker_4648, joker_4680, var_isNoReturn, var_instructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 138)) ;
    const enumGalgasBool test_1 = var_isNoReturn.boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a \"noreturn\" routine cannot be inlined")  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 147)) ;
      var_inlineDone.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_requiredBank.mAttribute_uint.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 149)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (object->mAttribute_mInstructionLocation, var_requiredBank.mAttribute_uint  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 150))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 150)) ;
      }
      GALGAS_stringset var_currentlyInlinedRoutineSet = constinArgument_inCurrentlyInlinedRoutineSet ;
      var_currentlyInlinedRoutineSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 153)) ;
      cEnumerator_pic_31__38_InstructionList enumerator_5275 (var_instructionList, kEnumeration_up) ;
      while (enumerator_5275.hasCurrentObject ()) {
        callCategoryMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_5275.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 156)) ;
        enumerator_5275.gotoNextObject () ;
      }
      var_inlineDone = GALGAS_bool (true) ;
    }
  }else if (kBoolFalse == test_0) {
    var_inlineDone = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_4 = var_inlineDone.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_5 = object ;
    ioArgument_ioInstructionList.addAssign_operation (temp_5  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JSR_performInlining (void) {
  enterCategoryMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_JSR_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_performInlining (defineCategoryMethod_pic_31__38_Instruction_5F_JSR_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 139)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_FDA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_5896 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_5896, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 156)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, var_IPICregisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 165)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_FA analyzeSimpleInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_6792 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_6792, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 185)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code ;
  switch (object->mAttribute_mFAinstruction.enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 196)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 197)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 198)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 199)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 200)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 202)), GALGAS_string ("*** INTERNAL ERROR ***")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 202)) ;
      var_code.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, var_code, var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 204)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_MOVFF analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mSourceRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_sourceIPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 222)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mDestinationRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_destinationIPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 228)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_sourceIPICregisterDescription, var_destinationIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 234)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_FBA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable var_bitSliceTable ;
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 252)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 261)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBitOrientedOp, var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 265)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@pic18Instruction_literalOperation analyzeSimpleInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 284)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 286)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 287)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 287)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLiteralInstruction, var_result.operator_and (GALGAS_sint ((int32_t) 255L).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 293)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 293)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 293))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 290)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_fnop analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 308)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 310)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (object->mAttribute_mInstructionLocation, var_result.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 316))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 314)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_LFSR analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFSRindex.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the LFSR register idx (").add_operation (object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 332)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 332)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 332))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 332)) ;
  }
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 337)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 338)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 338))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 338)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mFSRindex, var_result.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 343))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 340)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_JSR analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_bool var_isNoReturn ;
  GALGAS_uint var_requiredBank ;
  GALGAS_uint var_returnedBank ;
  GALGAS_bool var_preservesBank ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 359)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 361)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 361)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 361)) ;
    var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 364)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 366))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 366)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 371)) ;
  }
  const enumGalgasBool test_5 = var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 373)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioCurrentBank = var_returnedBank ;
    const enumGalgasBool test_6 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("the routine call should preserve bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 376)) ;
    }
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, object->mAttribute_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 380)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pic18Instruction_checkbank analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_checkbank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBankIndex.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("Bank index should be <= 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 429)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 430)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checkbank fail: there is no selected bank")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 431)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (object->mAttribute_mBankIndex)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 433)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 433)).add_operation (object->mAttribute_mBankIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 433))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 433)) ;
      }
    }
  }
  ioArgument_ioCurrentBank = object->mAttribute_mBankIndex ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_checkbank_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_checkbank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_checkbank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_checknobank analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_checknobank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 457)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 459)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_checknobank_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_checknobank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_checknobank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18PiccoloSimpleInstruction analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_PiccoloSimpleInstruction_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_ipic_31__38_SequentialInstruction var_instruction ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction temp_0 = object ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 481)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 492)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_PiccoloSimpleInstruction_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction.mSlotID,
                               categoryMethod_pic_31__38_PiccoloSimpleInstruction_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_PiccoloSimpleInstruction_analyze (defineCategoryMethod_pic_31__38_PiccoloSimpleInstruction_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@pic18Instruction_FOREVER analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FOREVER_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 515)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 518)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_loopLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 522)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 522)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 523)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 526)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 529))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 529))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 525))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 525)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 531)) ;
  ioArgument_ioBlockLabel = var_loopLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 533)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list execution is endless")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 553)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 556)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 559))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 559))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 555))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 555)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 563)) ;
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 566)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_FOREVER_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pic18Instruction_nobanksel analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_nobanksel_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 588)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 590)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_nobanksel_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_nobanksel_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_nobanksel_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@pic18Instruction_savebank analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_savebank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_registerExpression var_BSRregister = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 615))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 615)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 616))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 616))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 616)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 617))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 614)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_BSR_5F_IPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mRegister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 626)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_BSR_5F_IPICregisterDescription, var_save_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 633))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 633)) ;
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 639)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_save_5F_IPICregisterDescription, var_BSR_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 661))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 661)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_savebank_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_savebank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_savebank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_repetitionStatique analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_sint_36__34_ var_repeatCount ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRepeatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_repeatCount, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 685)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_repeatCount.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsInfOrEqual, var_repeatCount.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 687)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_repeatCount.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 688)).add_operation (GALGAS_string (" (should be > 0 and <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 688))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 688)) ;
  }
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 692)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 711)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_finalBank.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("enclosed instruction list should not modify bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)) ;
  }
  cEnumerator_range enumerator_25377 (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), var_repeatCount.substract_operation (GALGAS_sint ((int32_t) 1L).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 717)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 717))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 717)), kEnumeration_up) ;
  bool bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 717)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_25377.hasCurrentObject () && bool_3) {
    while (enumerator_25377.hasCurrentObject () && bool_3) {
      {
      routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 718)) ;
      }
      enumerator_25377.gotoNextObject () ;
      if (enumerator_25377.hasCurrentObject ()) {
        bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 717)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@pic18Instruction_banksel analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_banksel_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 758)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 760)).objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mBankIndex.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("selected bank idx should be lower or equal to 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioCurrentBank = object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 764)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBankIndex  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mBankIndex.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_5, GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 767)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 767))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 767)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_banksel_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_banksel_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_banksel_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_banksel_register analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 791)) ;
  }
  GALGAS_uint var_registerAddress ;
  callCategoryMethod_getRegisterAddress ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_registerAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 793)) ;
  GALGAS_uint var_newBank = var_registerAddress.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 795)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioCurrentBank = var_newBank ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_luint::constructor_new (var_newBank, object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 800)).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 800))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 798))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 798)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 802)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_3, GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 802)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 802))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 802)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_TBLRD analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 819)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_TBLWT analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 837)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (void) {
  enterCategoryMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                                categoryMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (defineCategoryMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@pic18Instruction_MNOP analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_MNOP_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 861)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("occurrence argument is zero: no generated code")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 862)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 865))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 865)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_MNOP_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_MNOP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_MNOP_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@pic18Instruction_LTBLPTR analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 888)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 890)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 891)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 891)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 891))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 891)) ;
  }
  GALGAS_uint var_address = var_result.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 893)) ;
  GALGAS_registerExpression var_TBLPTRU = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 896)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 897))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 897))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 897)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 898))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 895)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription ;
  GALGAS_bitSliceTable joker_32324 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_32324, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 900)) ;
  GALGAS_uint var_upper = var_address.right_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 909)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_upper.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 913)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 911))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 911)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_upper.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 919)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 917))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 917)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 925)), var_upper  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 929)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 927))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 927)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRH = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 935)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 936))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 936))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 936)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 937))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 934)) ;
  GALGAS_bitSliceTable joker_33552 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_33552, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 939)) ;
  GALGAS_uint var_high = var_address.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 948)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 948)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_high.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 952)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 950))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 950)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_high.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 957)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 955))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 955)) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 962)), var_high  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 960))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 960)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 966)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 964))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 964)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRL = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 971)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 972))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 972))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 972)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 973))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 970)) ;
  GALGAS_bitSliceTable joker_34767 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_34767, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 975)) ;
  GALGAS_uint var_low = var_address.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 984)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_low.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 988)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 986))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 986)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_low.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 993)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 991))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 991)) ;
    }else if (kBoolFalse == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 998)), var_low  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 996))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 996)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1000))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1000)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@pic18Instruction_LDATAPTR analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_LDATAPTR * object = (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
  GALGAS_uintlist var_data ;
  constinArgument_inDataMap.method_searchKey (object->mAttribute_mDataName, var_data, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)).objectCompare (var_data.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDataIndex.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("index should be < ").add_operation (var_data.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)) ;
  }
  GALGAS_registerExpression var_TBLPTRU = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1033))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1033))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1033)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1034))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1031)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription ;
  GALGAS_bitSliceTable joker_36888 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_36888, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1036)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1048)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1048)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1045))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1045)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1052)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1050))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1050)) ;
  GALGAS_registerExpression var_TBLPTRH = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1056)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1057))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1057))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1057)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)) ;
  GALGAS_bitSliceTable joker_37585 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_37585, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1060)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1072)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1072)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)) ;
  GALGAS_registerExpression var_TBLPTRL = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1080)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1082))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1079)) ;
  GALGAS_bitSliceTable joker_38281 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_38281, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1084)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1096)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1096)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1093))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1093)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1098))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1098)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@pic18Instruction_JUMP analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JUMP_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_bool var_isNoReturn ;
  GALGAS_uint var_requiredBank ;
  GALGAS_uint joker_39451 ; // Joker input parameter
  GALGAS_bool joker_39454 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, joker_39451, joker_39454, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1124)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1124)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
    var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1126)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1128)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1134)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1135)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1139)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1142))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1142))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1138))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1138)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1143)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JUMP_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_JUMP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_JUMP_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_computed_rcall analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_bool var_allPreserveBank = GALGAS_bool (true) ;
  GALGAS_bool var_someReturnsBank = GALGAS_bool (false) ;
  GALGAS_uint var_returnedBankSelection = ioArgument_ioCurrentBank ;
  cEnumerator_lstringlist enumerator_41240 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_41240.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint var_returnedBank ;
    GALGAS_bool var_preservesBank ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_41240.current_mValue (HERE), var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1171)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1172)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1172)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_41240.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1173)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1173)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1173)) ;
      var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1174)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1175)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1176)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)) ;
      }
      GALGAS_location location_2 (enumerator_41240.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1180)) ;
    }
    const enumGalgasBool test_3 = var_isNoReturn.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_41240.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_41240.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1183)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1183)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1183))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1183)) ;
    }
    const enumGalgasBool test_5 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1185)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1185)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_41240.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (enumerator_41240.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)).operator_and (var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = var_someReturnsBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1188)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_returnedBankSelection = var_returnedBank ;
          var_someReturnsBank = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection.objectCompare (var_returnedBank)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string var_errorMessage = GALGAS_string ("the '").add_operation (enumerator_41240.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1192)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1192)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1192)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1193)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("no bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)) ;
            }else if (kBoolFalse == test_10) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)) ;
            }
            var_errorMessage.dotAssign_operation (GALGAS_string (", but previous routine(s) return(s) ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1198)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_returnedBankSelection.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("no bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1200)) ;
            }else if (kBoolFalse == test_11) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1202)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1202))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1202)) ;
            }
            GALGAS_location location_12 (enumerator_41240.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_12, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1204)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_13 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1206)).operator_and (var_preservesBank COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1206)).boolEnum () ;
        if (kBoolTrue == test_13) {
        }
      }
    }
    enumerator_41240.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection ;
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1214)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1214)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1214))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1214)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_15) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1216)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1216)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1216))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1216)) ;
    }else if (kBoolFalse == test_15) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)).objectCompare (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)) ;
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1221)) ;
  cEnumerator_lstringlist enumerator_43737 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_43737.hasCurrentObject ()) {
    var_targetInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_43737.current_mValue (HERE).mAttribute_location, enumerator_43737.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1223))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1223))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1223)) ;
    enumerator_43737.gotoNextObject () ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, var_targetInstructionList, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_computed_goto analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  cEnumerator_lstringlist enumerator_44746 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_44746.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint joker_44833 ; // Joker input parameter
    GALGAS_bool joker_44836 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_44746.current_mValue (HERE), var_isNoReturn, var_requiredBank, joker_44833, joker_44836, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_44746.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1254)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1254)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1254)) ;
      var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1255)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1256)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1257)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1259)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1259))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1259)) ;
      }
      GALGAS_location location_2 (enumerator_44746.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1261)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1263)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1263)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1263)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_44746.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_44746.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264)) ;
    }
    enumerator_44746.gotoNextObject () ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed goto instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1271)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1274)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1279)).objectCompare (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1279)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1284)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1283))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1283)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1291)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1293)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_computed_bra analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_bool var_allPreserveBankSetting = GALGAS_bool (true) ;
  GALGAS_bool var_allReturnBank = GALGAS_bool (true) ;
  GALGAS_uint var_returnedBankValue = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)) ;
  cEnumerator_lstringlist enumerator_47501 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_47501.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint var_returnedBank ;
    GALGAS_bool var_preservesBank ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_47501.current_mValue (HERE), var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_47501.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1322)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1322)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1322)) ;
      var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1323)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1324)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1325)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)) ;
      }
      GALGAS_location location_2 (enumerator_47501.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1329)) ;
    }
    const enumGalgasBool test_3 = var_preservesBank.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_allReturnBank = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_returnedBankValue.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1334)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue.objectCompare (var_returnedBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1334)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (enumerator_47501.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1335)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1335)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1335)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1335)).add_operation (var_returnedBankValue.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1336)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1336))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1335)) ;
      }else if (kBoolFalse == test_4) {
        var_allPreserveBankSetting = GALGAS_bool (false) ;
        var_returnedBankValue = var_returnedBank ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_47501.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_47501.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)) ;
    }
    enumerator_47501.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = var_allReturnBank.operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1346)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1346)).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioCurrentBank = var_returnedBankValue ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_9 = var_allReturnBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)).operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)) ;
    }
  }
  const enumGalgasBool test_10 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1351)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1351)).boolEnum () ;
  if (kBoolTrue == test_10) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invoked routine(s) do(es) not preserve bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1352)) ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed bra instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1359)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_11) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1364)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1364)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1364))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1364)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_12) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1366)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1366)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1366))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1366)) ;
    }else if (kBoolFalse == test_12) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1367)).objectCompare (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1367)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1375))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1371))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1371)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1379)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1381)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_computed_retlw analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1415)).objectCompare (object->mAttribute_mImmediateExpressionList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1415)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the constant list length (").add_operation (object->mAttribute_mImmediateExpressionList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)) ;
      }
    }
  }
  GALGAS_uintlist var_literalValues = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1419)) ;
  cEnumerator_immediatExpressionList enumerator_52136 (object->mAttribute_mImmediateExpressionList, kEnumeration_up) ;
  GALGAS_uint index_52104 ((uint32_t) 0) ;
  while (enumerator_52136.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_52136.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1421)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_v.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1422)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1422)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value with idx ").add_operation (index_52104.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)).add_operation (var_v.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
    }
    var_literalValues.addAssign_operation (var_v.operator_and (GALGAS_sint ((int32_t) 255L).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1425)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1425)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1425))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1425)) ;
    enumerator_52136.gotoNextObject () ;
    index_52104.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1420)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1429)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_literalValues, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1432))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1428))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1428)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1436)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1438)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@pic18Instruction_JUMPCC analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_bool var_isNoReturn ;
  GALGAS_uint var_requiredBank ;
  GALGAS_uint joker_53637 ; // Joker input parameter
  GALGAS_bool joker_53640 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, joker_53637, joker_53640, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)) ;
    var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)) ;
  }
  GALGAS_conditionalBranchMode var_mode ;
  const enumGalgasBool test_5 = object->mAttribute_mIsBcc.boolEnum () ;
  if (kBoolTrue == test_5) {
    var_mode = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1476)) ;
  }else if (kBoolFalse == test_5) {
    var_mode = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1478)) ;
  }
  GALGAS_lstring var_label_30_ = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1485)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, object->mAttribute_mTargetLabel, var_mode, var_label_30_, var_mode  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1488))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)) ;
  ioArgument_ioBlockLabel = var_label_30_ ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_JUMPCC_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_JUMPCC_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pic18Instruction_IF_BitTest analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable var_bitSliceTable ;
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1519)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1528)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.reader_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, object->mAttribute_mSkipIfSet, var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1550))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1550)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_IF_FA_SEMI_COLON analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode ;
  switch (object->mAttribute_mOpCode.enumValue ()) {
  case GALGAS_if_5F_semi_5F_colon_5F_op::kNotBuilt:
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSEQ:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1578)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1579)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1580)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1581)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_58060 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_58060, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1583)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1594)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.reader_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, var_baseCode, var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1610))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1610)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pic18Instruction_IF_IncDec analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1637)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1638)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1639)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1639)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1640)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_mIncrement.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1641)).operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1641)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1642)) ;
      }else if (kBoolFalse == test_2) {
        var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1644)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_60125 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_60125, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1647)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1658)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.reader_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1671)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1671)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, var_baseCode, var_IPICregisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1674))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1674)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_structured_if analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_uint var_elseBranchFinalBank = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1704)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1705)) ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1706)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1706)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1706)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)) ;
  GALGAS_lstring var_exitLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, var_testTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1711)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1725)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1724))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1724)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1729)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mThenInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1732)) ;
  }
  GALGAS_bool var_thenContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = var_thenContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1753)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1758)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)) ;
  }
  GALGAS_bool var_elseContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_1 = var_elseContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1782)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1785))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1785))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1781))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1781)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1787)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank.objectCompare (var_thenBranchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank ;
  }else if (kBoolFalse == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1792)) ;
    var_elseBranchFinalBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1793)) ;
  }
  const enumGalgasBool test_3 = var_thenContinuesInSequence.operator_or (var_elseContinuesInSequence COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1796)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = var_exitLabel ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1799)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@pic18Instruction_macro analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_macro_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_lstringlist var_constantNameList ;
  GALGAS_pic_31__38_InstructionList var_instructionList ;
  constinArgument_inMacroMap.method_searchKey (object->mAttribute_mMacroName, var_constantNameList, var_instructionList, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1822)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1823)).objectCompare (var_constantNameList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1823)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, var_constantNameList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1825)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1825)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1825))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1824)) ;
  }
  GALGAS_constantMap var_constantMap = constinArgument_inConstantMap ;
  cEnumerator_immediatExpressionList enumerator_65733 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  cEnumerator_lstringlist enumerator_65769 (var_constantNameList, kEnumeration_up) ;
  while (enumerator_65733.hasCurrentObject () && enumerator_65769.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_65733.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap, var_expressionValue, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1829)) ;
    {
    var_constantMap.modifier_insertKey (enumerator_65769.current_mValue (HERE), var_expressionValue, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1830)) ;
    }
    enumerator_65733.gotoNextObject () ;
    enumerator_65769.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList (var_instructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1833)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_macro_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_macro_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_macro_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18SimpleConstantCaseItem analyzeCaseItem'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
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
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mCaseExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1890)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1892)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("case value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1893)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1893))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1893)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCaseConstantMap.reader_hasKey (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1896)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1896)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1897)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1897)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1897))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1897)) ;
    inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.reader_locationForKey (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1898)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1898)), GALGAS_string ("the '").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1898)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1898)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1898))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1898)) ;
  }else if (kBoolFalse == test_1) {
    {
    ioArgument_ioCaseConstantMap.modifier_insertKey (GALGAS_lstring::constructor_new (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1900)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1900)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1900)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1905)), ioArgument_ioLastComparisonValue.substract_operation (var_result, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1906)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1906)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1906))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1903))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1903)) ;
  ioArgument_ioLastComparisonValue = var_result ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1910)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1910)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1910)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1911)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1915)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1919))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1913)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1922)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1921))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1921)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1926)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (void) {
  enterCategoryMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem.mSlotID,
                                       categoryMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (defineCategoryMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18IntervalCaseItem analyzeCaseItem'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
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
  GALGAS_sint_36__34_ var_minBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMinExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)) ;
  GALGAS_sint_36__34_ var_maxBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMaxExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_minBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1947)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_maxBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1951)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1952)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1952)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1952))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1952)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, var_maxBound.objectCompare (var_minBound)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound (").add_operation (var_maxBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1956)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1956)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1956)).add_operation (var_minBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1956)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1956)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1956))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1956)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_3 = var_ok.boolEnum () ;
  if (kBoolTrue == test_3) {
    cEnumerator_range enumerator_70894 (GALGAS_range::constructor_new (var_minBound.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961)), var_maxBound.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961)), kEnumeration_up) ;
    while (enumerator_70894.hasCurrentObject ()) {
      const enumGalgasBool test_4 = ioArgument_ioCaseConstantMap.reader_hasKey (enumerator_70894.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1962)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1962)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (enumerator_70894.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963)) ;
        inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.reader_locationForKey (enumerator_70894.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964)), GALGAS_string ("the '").add_operation (enumerator_70894.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1964)) ;
      }else if (kBoolFalse == test_4) {
        {
        ioArgument_ioCaseConstantMap.modifier_insertKey (GALGAS_lstring::constructor_new (enumerator_70894.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1966)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1966)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1966)) ;
        }
      }
      enumerator_70894.gotoNextObject () ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1972)), ioArgument_ioLastComparisonValue.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1973)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1973)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1973))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1970))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1970)) ;
    GALGAS_lstring var_greaterThanLowBoundLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1975)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1975)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1975)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1976)) ;
    GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1978)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1982)), var_greaterThanLowBoundLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1984)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1980)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1989)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1988))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1988)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1993)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1998)), var_maxBound.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1999)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1999)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1999)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1999)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1999))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1996))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1996)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32_ = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2003)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2005)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2007))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2001)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2010)), var_greaterThanLowBoundLabel, ioArgument_ioGeneratedInstructionList, var_t_32_  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2009))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2009)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    ioArgument_ioLastComparisonValue = var_maxBound.add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (void) {
  enterCategoryMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem.mSlotID,
                                       categoryMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (defineCategoryMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@pic18Instruction_switch analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_switch_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_caseConstantMap var_caseConstantMap = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2039)) ;
  GALGAS_lstring var_exitLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2041)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2041)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2041)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2042)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2049)) ;
  GALGAS_bool var_finalBankSettingDefined = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_74682 (object->mAttribute_mCaseList, kEnumeration_up) ;
  while (enumerator_74682.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2054)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2054)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2054)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_74889 (enumerator_74682.current_mCaseExpressionList (HERE), kEnumeration_up) ;
    while (enumerator_74889.hasCurrentObject ()) {
      callCategoryMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_74889.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel, ioArgument_ioUsedRegisters, var_caseConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2058)) ;
      enumerator_74889.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel ;
    GALGAS_uint var_branchFinalBank = var_initialBankSetting ;
    {
    routine_analyzeInstructionList (enumerator_74682.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_continuesInSequence = GALGAS_bool (true) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2096)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095)) ;
    }
    const enumGalgasBool test_1 = var_finalBankSettingDefined.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_finalBankSetting.objectCompare (var_branchFinalBank)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_branchFinalBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2104)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = var_branchFinalBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2104)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_finalBankSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2106)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_finalBankSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2106)) ;
        }
        inCompiler->emitSemanticError (enumerator_74682.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2103)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2104)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2105)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2106))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2103)) ;
      }
    }else if (kBoolFalse == test_1) {
      var_finalBankSettingDefined = GALGAS_bool (true) ;
      var_finalBankSetting = var_branchFinalBank ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2113)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    enumerator_74682.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank = var_initialBankSetting ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2118)) ;
  }
  GALGAS_bool var_thenContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_7 = var_thenContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2139)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2144)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_finalBankSetting.objectCompare (var_branchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_branchFinalBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_10) {
      temp_9 = var_branchFinalBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)) ;
    }
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_finalBankSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2150)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_12) {
      temp_11 = var_finalBankSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2150)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mElseBranchStartLocation, GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2149)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2150))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
  }
  ioArgument_ioCurrentBank = var_finalBankSetting ;
  const enumGalgasBool test_13 = var_continuesInSequence.boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioBlockLabel = var_exitLabel ;
  }else if (kBoolFalse == test_13) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2158)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_switch_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_switch_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_switch_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@pic18Instruction_do_while analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_lstring var_startLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2181)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2181)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2181)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2182)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2185)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2188))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2188))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2184))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2184)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)) ;
  ioArgument_ioBlockLabel = var_startLabel ;
  GALGAS_uint var_repeatedBranchFinalBank = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2193)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2213)) ;
  }
  const enumGalgasBool test_1 = var_repeatedInstructionsContinuesInSequence.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2216)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_80310 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_80310.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2222)) ;
    GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2223)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2223)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2223)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator ;
    callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) enumerator_80310.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, var_testTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2226)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2239)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2238))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2238)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2243)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel ;
    GALGAS_uint var_branchFinalBank = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList (enumerator_80310.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2246)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_80310.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2265)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (enumerator_80310.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2268)) ;
    }
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2271)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2274))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2274))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2270))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2270)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    enumerator_80310.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_do_5F_while_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_do_5F_while_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
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
  const enumGalgasBool test_0 = ioArgument_ioBlockInitialBankSelectionMap.reader_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2325)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_otherInitialBlockSetting ;
    GALGAS_string var_otherBlockName ;
    ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2326)), var_otherInitialBlockSetting, var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2326)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2329)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2329)) ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2331)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = var_otherInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2331)) ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2328)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2329)).add_operation (var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2330)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2330)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2330)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2331))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2328)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.modifier_insertKey (GALGAS_string ("-").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2335)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2335)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterCategoryMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                        categoryMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (defineCategoryMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@gotoTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
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
  const enumGalgasBool test_0 = ioArgument_ioVisitedBlockSet.reader_hasKey (object->mAttribute_mNextBlock.mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2349)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2349)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioVisitedBlockSet.addAssign_operation (object->mAttribute_mNextBlock.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2350)) ;
    ioArgument_ioContinueAccessibilityExploration = GALGAS_bool (true) ;
    GALGAS_pic_31__38_InstructionList joker_85398 ; // Joker input parameter
    GALGAS_abstractBlockTerminationForBlockInstruction joker_85401 ; // Joker input parameter
    GALGAS_location joker_85404 ; // Joker input parameter
    constinArgument_inBlockMap.method_searchKey (object->mAttribute_mNextBlock, joker_85398, joker_85401, joker_85404, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)) ;
    const enumGalgasBool test_1 = ioArgument_ioBlockInitialBankSelectionMap.reader_hasKey (object->mAttribute_mNextBlock.mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2353)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_otherInitialBlockSetting ;
      GALGAS_string var_otherBlockName ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (object->mAttribute_mNextBlock, var_otherInitialBlockSetting, var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2354)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2357)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = constinArgument_inInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2357)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2359)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_otherInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2359)) ;
        }
        GALGAS_location location_7 (object->mAttribute_mNextBlock.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this block goes to '").add_operation (object->mAttribute_mNextBlock.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2357)).add_operation (var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2358)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2358)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2358)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2359))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      ioArgument_ioBlockInitialBankSelectionMap.modifier_insertKey (object->mAttribute_mNextBlock, constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2363)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterCategoryMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                        categoryMethod_gotoTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (defineCategoryMethod_gotoTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@testTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
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
  callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2378)) ;
  callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2387)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterCategoryMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                        categoryMethod_testTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_addVisitedBlocks (defineCategoryMethod_testTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@gotoTerminationForBlockInstruction generateBlock'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_gotoTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mNextBlock.mAttribute_location, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (object->mAttribute_mNextBlock.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2425)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2425)), object->mAttribute_mNextBlock.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2425)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2426))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2423)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_gotoTerminationForBlockInstruction_generateBlock (void) {
  enterCategoryMethod_generateBlock (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                     categoryMethod_gotoTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_generateBlock (defineCategoryMethod_gotoTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@exitBlockTerminationForBlockInstruction generateBlock'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_exitBlockTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mLocation, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2444)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2444)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2445))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_exitBlockTerminationForBlockInstruction_generateBlock (void) {
  enterCategoryMethod_generateBlock (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                     categoryMethod_exitBlockTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_generateBlock (defineCategoryMethod_exitBlockTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@testTerminationForBlockInstruction generateBlock'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2461)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2461)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2461)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462)) ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2463)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2463)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2463)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2464)) ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2466)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator ;
  callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2479)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2491)), var_conditionTrueLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2493)), var_trueTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2490))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2490)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator ;
  callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2496)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2508)), var_conditionFalseLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2510)), var_falseTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2507))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2507)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testTerminationForBlockInstruction_generateBlock (void) {
  enterCategoryMethod_generateBlock (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                     categoryMethod_testTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_generateBlock (defineCategoryMethod_testTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@pic18Instruction_block analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_block_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_string var_labelForBlock = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2533)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2533)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2533)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2534)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2537)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mStartBlockName.mAttribute_location, GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (object->mAttribute_mStartBlockName.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2542)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2542)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2542)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2543))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2540))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2536))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2536)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2544)) ;
  GALGAS_blockInstructionBlockMap var_blockMap = GALGAS_blockInstructionBlockMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2546)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_92183 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_92183.hasCurrentObject ()) {
    {
    var_blockMap.modifier_insertKey (enumerator_92183.current_mBlockName (HERE), enumerator_92183.current_mInstructionList (HERE), enumerator_92183.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_92183.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2548)) ;
    }
    enumerator_92183.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InstructionList joker_92376 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_92379 ; // Joker input parameter
  GALGAS_location joker_92382 ; // Joker input parameter
  var_blockMap.method_searchKey (object->mAttribute_mStartBlockName, joker_92376, joker_92379, joker_92382, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap = GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2552)) ;
  {
  var_blockInitialBankSelectionMap.modifier_insertKey (object->mAttribute_mStartBlockName, ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2553)) ;
  }
  GALGAS_stringset var_accessibleBlockSet = GALGAS_stringset::constructor_setWithString (object->mAttribute_mStartBlockName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2555)) ;
  GALGAS_stringset var_handledBlockSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2556)) ;
  GALGAS_bool var_continueAccessibilityExploration = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence = GALGAS_bool (false) ;
  if (object->mAttribute_mBlockList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)).isValid ()) {
    uint32_t variant_92787 = object->mAttribute_mBlockList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)).uintValue () ;
    bool loop_92787 = true ;
    while (loop_92787) {
      loop_92787 = var_continueAccessibilityExploration.isValid () ;
      if (loop_92787) {
        loop_92787 = var_continueAccessibilityExploration.boolValue () ;
      }
      if (loop_92787 && (0 == variant_92787)) {
        loop_92787 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)) ;
      }
      if (loop_92787) {
        variant_92787 -- ;
        var_continueAccessibilityExploration = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_92965 (var_accessibleBlockSet.substract_operation (var_handledBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2561)), kEnumeration_up) ;
        while (enumerator_92965.hasCurrentObject ()) {
          var_handledBlockSet.addAssign_operation (enumerator_92965.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2562)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination ;
          GALGAS_location var_endOfBlock ;
          var_blockMap.method_searchKey (enumerator_92965.current (HERE).reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2564)), var_instructionList, var_blockTermination, var_endOfBlock, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2563)) ;
          GALGAS_uint var_currentBank ;
          GALGAS_string joker_93363 ; // Joker input parameter
          var_blockInitialBankSelectionMap.method_searchKey (enumerator_92965.current (HERE).reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2570)), var_currentBank, joker_93363, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2570)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (enumerator_92965.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2571)), var_blockMap.reader_locationForKey (enumerator_92965.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2571))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2571)) ;
          {
          routine_analyzeInstructionList (var_instructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2572)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator ;
          callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock, var_terminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2590)) ;
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            inCompiler->emitSemanticError (var_endOfBlock, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2602)) ;
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2605)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2604))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2604)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2610)) ;
          callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination.ptr (), var_accessibleBlockSet, var_blockMap, enumerator_92965.current (HERE), var_currentBank, var_blockInitialBankSelectionMap, var_continuesInSequence, var_continueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2612)) ;
          enumerator_92965.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_94917 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_94917.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_accessibleBlockSet.reader_hasKey (enumerator_94917.current_mBlockName (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2617)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2617)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_94917.current_mBlockName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_2, GALGAS_string ("this block is not accessible from '").add_operation (object->mAttribute_mStartBlockName.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2618)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2618)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2618))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2618)) ;
    }
    enumerator_94917.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = var_continuesInSequence.boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2623)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2623)) ;
    GALGAS_string joker_95288 ; // Joker input parameter
    var_blockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2624)), ioArgument_ioCurrentBank, joker_95288, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2624)) ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2626)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_block_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_block_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_block_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18BccInStructuredCondition analyzeCondition'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
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
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mConditionLocation, object->mAttribute_mCondition, constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2666)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2668))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2662)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (void) {
  enterCategoryMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition.mSlotID,
                                        categoryMethod_pic_31__38_BccInStructuredCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (defineCategoryMethod_pic_31__38_BccInStructuredCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@pic18RegisterComparisonCondition analyzeCondition'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_97479 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_97479, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2684)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison ;
  GALGAS_bool var_complementaryBranch ;
  switch (object->mAttribute_mComparison.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2698)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2701)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2704)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2707)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2710)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2713)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  }
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2717)).mAttribute_location ;
  const enumGalgasBool test_0 = var_complementaryBranch.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2721))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2721)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2722))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2722)), var_IPICregisterDescription, var_ipicComparison  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2719)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2728))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2728)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2729))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2729)), var_IPICregisterDescription, var_ipicComparison  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2726)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (void) {
  enterCategoryMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition.mSlotID,
                                        categoryMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (defineCategoryMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18IncDecRegisterInCondition analyzeCondition'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_99922 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_99922, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2748)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2758)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2762))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2762)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2763))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2763)), var_IPICregisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2760)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2770))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2770)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2771))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2771)), var_IPICregisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2768)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (void) {
  enterCategoryMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition.mSlotID,
                                        categoryMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (defineCategoryMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18RegisterTestCondition analyzeCondition'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterTestCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_101566 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_101566, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2791)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2801)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2805))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2805)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2806))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2806)), var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2803)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2811))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2811)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2812))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2812)), var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2809)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterTestCondition_analyzeCondition (void) {
  enterCategoryMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition.mSlotID,
                                        categoryMethod_pic_31__38_RegisterTestCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterTestCondition_analyzeCondition (defineCategoryMethod_pic_31__38_RegisterTestCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@pic18BitTestInStructuredCondition analyzeCondition'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable var_bitSliceTable ;
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2839)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2844)).mAttribute_location ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2855))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2855)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2856))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2856)), var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2853)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (void) {
  enterCategoryMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition.mSlotID,
                                        categoryMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (defineCategoryMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18NegateCondition analyzeCondition'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_NegateCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
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
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2876)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_NegateCondition_analyzeCondition (void) {
  enterCategoryMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_NegateCondition.mSlotID,
                                        categoryMethod_pic_31__38_NegateCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_NegateCondition_analyzeCondition (defineCategoryMethod_pic_31__38_NegateCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pic18AndCondition analyzeCondition'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_AndCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2904)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2904)), constinArgument_inConditionTrueLabel.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2904)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2905)) ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2907)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2920)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2934)), var_conditionTrueLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2936)), var_secondTestBlockTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_AndCondition_analyzeCondition (void) {
  enterCategoryMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_AndCondition.mSlotID,
                                        categoryMethod_pic_31__38_AndCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_AndCondition_analyzeCondition (defineCategoryMethod_pic_31__38_AndCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18ComputedBraTerminator optimizeTerminator'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18ComputedGotoTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@ipic18JumpTerminator optimizeTerminator'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mLabel.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_uint var_targetBlockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)) ;
    GALGAS_ipic_31__38_Block var_targetBlock = constinArgument_inBlockList.reader_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 57)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 58)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 59)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 58)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 59)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_optimize ;
      const enumGalgasBool test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_ipic_31__38_JumpTerminator temp_4 ;
        if (var_targetBlock.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) {
            temp_4 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 63)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_candidate = temp_4 ;
        var_optimize = GALGAS_bool (kIsNotEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (var_candidate.reader_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 64)).mAttribute_string)) ;
      }else if (kBoolFalse == test_3) {
        var_optimize = GALGAS_bool (true) ;
      }
      const enumGalgasBool test_5 = var_optimize.boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outOptimizedTerminator = var_targetBlock.mAttribute_mTerminator ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
        const GALGAS_ipic_31__38_JumpTerminator temp_6 = object ;
        ioArgument_ioListFileContents.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_6.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" -> ")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 73)) ;
        ioArgument_ioListFileContents.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 74))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 74)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 75)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_JumpTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_JumpTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18ConditionalJumpTerminator optimizeTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabelWhenFalse, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 96))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 93)) ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98)).add_operation (GALGAS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 99)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_optimized = GALGAS_bool (false) ;
    GALGAS_lstring var_targetLabelWhenTrue = object->mAttribute_mTargetLabelWhenTrue ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_targetBlockIndex ;
      constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)) ;
      GALGAS_ipic_31__38_Block var_targetBlock = constinArgument_inBlockList.reader_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 106)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 107)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 108)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 107)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 108)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_ipic_31__38_JumpTerminator temp_3 ;
        if (var_targetBlock.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) {
            temp_3 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp = temp_3 ;
        var_targetLabelWhenTrue = var_jp.reader_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 111)) ;
        var_optimized = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
        ioArgument_ioListFileContents.dotAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" -> ")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 115)) ;
        ioArgument_ioListFileContents.dotAssign_operation (var_targetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 116)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 117)) ;
      }
    }
    GALGAS_lstring var_targetLabelWhenFalse = object->mAttribute_mTargetLabelWhenFalse ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint var_targetBlockIndex ;
      constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)) ;
      GALGAS_ipic_31__38_Block var_targetBlock = constinArgument_inBlockList.reader_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 124)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 125)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 126)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 125)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38_JumpTerminator temp_6 ;
        if (var_targetBlock.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp = temp_6 ;
        var_targetLabelWhenFalse = var_jp.reader_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 129)) ;
        var_optimized = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
        ioArgument_ioListFileContents.dotAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" -> ")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 133)) ;
        ioArgument_ioListFileContents.dotAssign_operation (var_targetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 134)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 135)) ;
      }
    }
    const enumGalgasBool test_7 = var_optimized.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, var_targetLabelWhenTrue, object->mAttribute_mBranchModeOnTrueLabel, var_targetLabelWhenFalse, object->mAttribute_mBranchModeOnFalseLabel  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 141)) ;
    }else if (kBoolFalse == test_7) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18IncDecRegisterTerminator optimizeTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_bool var_optimization = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator ;
  GALGAS_bool var_identicalTerminators ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = object ;
  callCategoryMethod_getOptimizedTerminators ((const cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 216)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
    outArgument_outOptimizedTerminator = temp_2 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("useless decf/incf condition should be replaced by decf/incf instruction")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 229)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 231)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18BitTestTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_bool var_optimization = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator ;
  GALGAS_bool var_identicalTerminators ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  callCategoryMethod_getOptimizedTerminators ((const cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 256)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)).add_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 271)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 273)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_2) {
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
      outArgument_outOptimizedTerminator = temp_3 ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                          categoryMethod_pic_31__38_BitTestTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_optimizeTerminator (defineCategoryMethod_pic_31__38_BitTestTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@pic18RegisterComparisonTerminator optimizeTerminator'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_bool var_optimization = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator ;
  GALGAS_bool var_identicalTerminators ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  callCategoryMethod_getOptimizedTerminators ((const cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 296)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)).add_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 311)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription, object->mAttribute_mComparison  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 313)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_2) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = object ;
      outArgument_outOptimizedTerminator = temp_3 ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                          categoryMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18TestRegisterTerminator optimizeTerminator'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_bool var_optimization = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator ;
  GALGAS_bool var_identicalTerminators ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  callCategoryMethod_getOptimizedTerminators ((const cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 336)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)).add_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 351)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 353)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_2) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = object ;
      outArgument_outOptimizedTerminator = temp_3 ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                          categoryMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (defineCategoryMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ipic18RetfieTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_RetfieTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_RetfieTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ipic18RetlwTerminator optimizeTerminator'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_RetlwTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_RetlwTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ipic18ReturnTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_ReturnTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_ReturnTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18ComputedRETLWTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (void) {
  enterCategoryMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                          categoryMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 469)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (void) {
  enterCategoryMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                       categoryMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                              const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                              GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 482)) ;
  }
  cEnumerator_lstringlist enumerator_18636 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_18636.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.reader_hasKey (enumerator_18636.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 488)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 488)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_18636.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 489)) ;
      GALGAS_uint var_blockIndex ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_18636.current_mValue (HERE), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 490)) ;
      GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 491)) ;
      categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 492)) ;
    }
    enumerator_18636.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (void) {
  enterCategoryMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                       categoryMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 507)) ;
  }
  cEnumerator_lstringlist enumerator_19406 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_19406.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.reader_hasKey (enumerator_19406.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 513)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 513)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_19406.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 514)) ;
      GALGAS_uint var_blockIndex ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_19406.current_mValue (HERE), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 515)) ;
      GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 516)) ;
      categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 517)) ;
    }
    enumerator_19406.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (void) {
  enterCategoryMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                       categoryMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18JumpTerminator enterTerminatorReferencedLabels'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                       const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                       GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.reader_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 532)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 532)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 533)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 534)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 535)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 536)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (void) {
  enterCategoryMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                       categoryMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (defineCategoryMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.reader_hasKey (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 550)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 550)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 551)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 552)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 553)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 554)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioReferencedBlockSet.reader_hasKey (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 560)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 560)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 561)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 562)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 563)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 564)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (void) {
  enterCategoryMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                       categoryMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                    const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                                    const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                                    GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (void) {
  enterCategoryMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator.mSlotID,
                                                       categoryMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (defineCategoryMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                    const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                    GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callCategoryMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 586)) ;
  callCategoryMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 587)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (void) {
  enterCategoryMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                       categoryMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@ipic18_intermediate_JSR enterInstructionReferencedLabels'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                 const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.reader_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 608)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 608)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 609)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 610)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 611)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 612)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (void) {
  enterCategoryMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                        categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                              const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                              const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                              GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 626)) ;
  }
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_23819 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_23819.hasCurrentObject ()) {
    callCategoryMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_23819.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 632)) ;
    enumerator_23819.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (void) {
  enterCategoryMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                        categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                              const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                              GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 646)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (void) {
  enterCategoryMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                        categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@ipic18_intermediate_JSR optimizeInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_uint var_targetBlockIndex ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 688)) ;
  GALGAS_ipic_31__38_Block var_targetBloc = constinArgument_inBlockList.reader_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 689)) ;
  const enumGalgasBool test_1 = constinArgument_inOptimizeFlagStruct.mAttribute_mRemoveEmptyRoutine.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 692)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 693)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 692)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 693)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("call to empty ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)).add_operation (GALGAS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 698)) ;
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 699))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)) ;
    outArgument_outNOPsubstitution = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoRETLWreplacedByMOVLW.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 703)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 702)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 704)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 703)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 704)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_ipic_31__38_RetlwTerminator temp_3 ;
      if (var_targetBloc.mAttribute_mTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) {
          temp_3 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc.mAttribute_mTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)) ;
        }
      }
      GALGAS_ipic_31__38_RetlwTerminator var_t = temp_3 ;
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("call to RETLW ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)).add_operation (GALGAS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 710)) ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 713)), var_t.reader_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 714))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 717)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 716)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 718)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 717)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 718)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outOptimizedInstruction = var_targetBloc.mAttribute_mInstructionList.reader_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)) ;
        outArgument_outOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("call to single instruction routine ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)).add_operation (GALGAS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 724)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                           categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 742)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_28591 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_28591.hasCurrentObject ()) {
    GALGAS_bool var_opt = GALGAS_bool (false) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28591.current_mInstruction (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 ;
      if (enumerator_28591.current_mInstruction (HERE).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28591.current_mInstruction (HERE).ptr ())) {
          temp_1 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_28591.current_mInstruction (HERE).ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_28591.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 746)) ;
        }
      }
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr = temp_1 ;
      GALGAS_uint var_targetBlockIndex ;
      constinArgument_inSymbolTable.method_searchKey (var_jsr.reader_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 747)), var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 747)) ;
      GALGAS_ipic_31__38_Block var_targetBloc = constinArgument_inBlockList.reader_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 748)) ;
      const enumGalgasBool test_2 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 750)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 749)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 752)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 751)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_opt = GALGAS_bool (true) ;
          outArgument_outOptimizationDone = GALGAS_bool (true) ;
          var_optimizedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_new (var_jsr.reader_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 755)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("JSR ").add_operation (var_jsr.reader_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 757)).reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)).add_operation (GALGAS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 758)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 760)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 759)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_ipic_31__38_SequentialInstruction var_inst = var_targetBloc.mAttribute_mInstructionList.reader_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)) ;
            const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, callCategoryReader_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 762)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_opt = GALGAS_bool (true) ;
              outArgument_outOptimizationDone = GALGAS_bool (true) ;
              var_optimizedInstructionList.addAssign_operation (var_inst  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)) ;
              ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)) ;
              ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("JSR ").add_operation (var_jsr.reader_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 767)).reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)).add_operation (GALGAS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)) ;
              ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 768)) ;
            }
          }
        }
      }
    }
    const enumGalgasBool test_6 = var_opt.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 773)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_optimizedInstructionList.addAssign_operation (enumerator_28591.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 774)) ;
    }
    enumerator_28591.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedInstructionList, object->mAttribute_mUsesRCALL  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 778)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = object ;
    outArgument_outOptimizedInstruction = temp_8 ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                           categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction ;
  GALGAS_bool joker_31461 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_31461, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 800)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mSkipIfSet, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 811)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                           categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18_skip_instruction_compare_register optimizeInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction ;
  GALGAS_bool joker_32502 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_32502, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 835)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mCompareInstruction, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 846)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                           categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18_skip_instruction_FDA optimizeInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction ;
  GALGAS_bool joker_33526 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_33526, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 869)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 880)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                           categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18_intermediate_JSR buildInstructionInvocationGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (void) {
  enterCategoryMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                       categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@ipic18_intermediate_instruction_computed_rcall buildInstructionInvocationGraph'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_1326 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_1326.hasCurrentObject ()) {
    callCategoryMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_1326.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 39)) ;
    enumerator_1326.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (void) {
  enterCategoryMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                       categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18_condition_skip_instruction buildInstructionInvocationGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 51)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (void) {
  enterCategoryMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                       categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ReturnTerminator buildTerminatorInvocationGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                        const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                        GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                        const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18RetlwTerminator buildTerminatorInvocationGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                       const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                       GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                       const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18RetfieTerminator buildTerminatorInvocationGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                        const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                        GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                        const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18ComputedGotoTerminator buildTerminatorInvocationGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                              GALGAS_string & ioArgument_ioGraphVizString,
                                                                                              const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedRETLWTerminator buildTerminatorInvocationGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                               GALGAS_string & ioArgument_ioGraphVizString,
                                                                                               const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18ComputedBraTerminator buildTerminatorInvocationGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                             const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18AbstractConditionTerminator buildTerminatorInvocationGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                   GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                   const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 125)) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 126)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@pic18RegisterComparisonTerminator buildTerminatorInvocationGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                   GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                   const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 135)) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 136)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                      categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@pic18TestRegisterTerminator buildTerminatorInvocationGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                             const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 145)) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 146)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                      categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18JumpTerminator buildTerminatorInvocationGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                      GALGAS_string & ioArgument_ioGraphVizString,
                                                                                      const GALGAS_bool constinArgument_inDottedArrow,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)) ;
  const enumGalgasBool test_0 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" [style=dashed]")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 157)) ;
  }
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" ;\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 159)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@ipic18ConditionalJumpTerminator buildTerminatorInvocationGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                 GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                 const GALGAS_bool constinArgument_inDottedArrow,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)) ;
  const enumGalgasBool test_0 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" [style=dashed]")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 170)) ;
  }
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" ;\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 172)) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)) ;
  const enumGalgasBool test_1 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" [style=dashed]")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 175)) ;
  }
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" ;\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 177)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18ReturnTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                            const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18RetlwTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                           const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18RetfieTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                            const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18JumpTerminator needToInsertJumpInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  result_outResult = GALGAS_bool (kIsNotEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                  const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                   const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18ComputedBraTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                 const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  result_outResult = callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)).operator_and (callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 262)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outResult = callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 271)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                   categoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (defineCategoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@pic18TestRegisterTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outResult = callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 280)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                   categoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (defineCategoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18JumpTerminator buildTerminatorOrderedGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                   GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inBlockLabel, object->mAttribute_mLabel COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 299)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                   categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18ConditionalJumpTerminator buildTerminatorOrderedGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                              GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 307)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 308)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                   categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@pic18RegisterComparisonTerminator buildTerminatorOrderedGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 316)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                   categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@pic18TestRegisterTerminator buildTerminatorOrderedGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                          GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 327)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                   categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18IncDecRegisterTerminator buildTerminatorOrderedGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                             GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 338)) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 342)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                   categoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@pic18BitTestTerminator buildTerminatorOrderedGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                     GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 353)) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 357)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                   categoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@ipic18AbstractConditionTerminator exploreAccessibleBlocksForStackComputations'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                                GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callCategoryMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 37)) ;
  callCategoryMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 41)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@ipic18ComputedBraTerminator exploreAccessibleBlocksForStackComputations'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                          GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                          GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  cEnumerator_lstringlist enumerator_1883 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_1883.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (enumerator_1883.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 53)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 53)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_1883.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 54)) ;
    }
    enumerator_1883.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@ipic18ComputedGotoTerminator exploreAccessibleBlocksForStackComputations'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                           GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  cEnumerator_lstringlist enumerator_2274 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_2274.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (enumerator_2274.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 65)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 65)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2274.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 66)) ;
    }
    enumerator_2274.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18JumpTerminator exploreAccessibleBlocksForStackComputations'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                   GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 76)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 76)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 77)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@ipic18ConditionalJumpTerminator exploreAccessibleBlocksForStackComputations'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                              GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                              GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 86)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 86)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 87)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExploredBlockSet.reader_hasKey (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 89)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 89)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 90)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@ipic18ComputedRETLWTerminator exploreAccessibleBlocksForStackComputations'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                            GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                            GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18ReturnTerminator exploreAccessibleBlocksForStackComputations'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18RetlwTerminator exploreAccessibleBlocksForStackComputations'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                    GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                    GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18RetfieTerminator exploreAccessibleBlocksForStackComputations'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterCategoryMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                                   categoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations (defineCategoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18_intermediate_JSR buildCalledRoutineSetForStackComputations'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  ioArgument_ioRoutineCalledSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 137)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations (void) {
  enterCategoryMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                                 categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@ipic18_intermediate_instruction_computed_rcall buildCalledRoutineSetForStackComputations'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                       GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_5099 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_5099.hasCurrentObject ()) {
    callCategoryMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_5099.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 145)) ;
    enumerator_5099.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations (void) {
  enterCategoryMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                                 categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@ipic18_condition_skip_instruction buildCalledRoutineSetForStackComputations'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                       GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 153)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations (void) {
  enterCategoryMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                                 categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18ReturnTerminator terminatorMinMaxDuration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                  const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                  GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                  GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                  const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                  GALGAS_uint & outArgument_outMin,
                                                                                  GALGAS_uint & outArgument_outMax,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18RetlwTerminator terminatorMinMaxDuration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                 const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                 GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                 GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                 const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                 GALGAS_uint & outArgument_outMin,
                                                                                 GALGAS_uint & outArgument_outMax,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18RetfieTerminator terminatorMinMaxDuration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                  const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                  GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                  GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                  const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                  GALGAS_uint & outArgument_outMin,
                                                                                  GALGAS_uint & outArgument_outMax,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18JumpTerminator terminatorMinMaxDuration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                const GALGAS_blockMapForDurationComputation constinArgument_inBlockMapForDurationComputation,
                                                                                GALGAS_exploredBlockMap & ioArgument_ioExploredBlockMap,
                                                                                GALGAS_codeWithDuration & ioArgument_ioCodeWithDuration,
                                                                                const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                GALGAS_uint & outArgument_outMin,
                                                                                GALGAS_uint & outArgument_outMax,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
  const enumGalgasBool test_0 = ioArgument_ioExploredBlockMap.reader_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 94)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_min ;
    GALGAS_uint var_max ;
    ioArgument_ioExploredBlockMap.method_searchKey (object->mAttribute_mLabel, var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 95)) ;
    outArgument_outMin = outArgument_outMin.add_operation (var_min, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 96)) ;
    outArgument_outMax = outArgument_outMax.add_operation (var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 97)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_ipic_31__38_Block var_aBlock ;
    GALGAS_string var_nextLabel ;
    constinArgument_inBlockMapForDurationComputation.method_searchKey (object->mAttribute_mLabel, var_aBlock, var_nextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 99)) ;
    GALGAS_uint var_min ;
    GALGAS_uint var_max ;
    categoryMethod_computeMinMaxDuration (var_aBlock, constinArgument_inBlockMapForDurationComputation, ioArgument_ioExploredBlockMap, ioArgument_ioCodeWithDuration, var_nextLabel, var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 100)) ;
    outArgument_outMin = outArgument_outMin.add_operation (var_min, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 108)) ;
    outArgument_outMax = outArgument_outMax.add_operation (var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 109)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@ipic18ConditionalJumpTerminator terminatorMinMaxDuration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_blockMapForDurationComputation constinArgument_inBlockMapForDurationComputation,
                                                                                           GALGAS_exploredBlockMap & ioArgument_ioExploredBlockMap,
                                                                                           GALGAS_codeWithDuration & ioArgument_ioCodeWithDuration,
                                                                                           const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                           GALGAS_uint & outArgument_outMin,
                                                                                           GALGAS_uint & outArgument_outMax,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  GALGAS_ipic_31__38_Block var_trueBlock ;
  GALGAS_string var_trueLabel ;
  constinArgument_inBlockMapForDurationComputation.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_trueBlock, var_trueLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 124)) ;
  GALGAS_uint var_min_5F_true ;
  GALGAS_uint var_max_5F_true ;
  categoryMethod_computeMinMaxDuration (var_trueBlock, constinArgument_inBlockMapForDurationComputation, ioArgument_ioExploredBlockMap, ioArgument_ioCodeWithDuration, var_trueLabel, var_min_5F_true, var_max_5F_true, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 125)) ;
  GALGAS_ipic_31__38_Block var_falseBlock ;
  GALGAS_string var_falseLabel ;
  constinArgument_inBlockMapForDurationComputation.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_falseBlock, var_falseLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 133)) ;
  GALGAS_uint var_min_5F_false ;
  GALGAS_uint var_max_5F_false ;
  categoryMethod_computeMinMaxDuration (var_falseBlock, constinArgument_inBlockMapForDurationComputation, ioArgument_ioExploredBlockMap, ioArgument_ioCodeWithDuration, var_falseLabel, var_min_5F_false, var_max_5F_false, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 134)) ;
  GALGAS_uint temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_min_5F_true.objectCompare (var_min_5F_false)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = var_min_5F_true ;
  }else if (kBoolFalse == test_1) {
    temp_0 = var_min_5F_false ;
  }
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U).add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 142)) ;
  GALGAS_uint temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_max_5F_true.objectCompare (var_max_5F_false)).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = var_max_5F_true ;
  }else if (kBoolFalse == test_3) {
    temp_2 = var_max_5F_false ;
  }
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 143)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@pic18TestRegisterTerminator terminatorMinMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                       const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                       GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                       GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                       const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                       GALGAS_uint & outArgument_outMin,
                                                                                       GALGAS_uint & outArgument_outMax,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 10000U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                categoryMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration (defineCategoryMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@pic18RegisterComparisonTerminator terminatorMinMaxDuration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                             GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                             GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                             const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                             GALGAS_uint & outArgument_outMin,
                                                                                             GALGAS_uint & outArgument_outMax,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 20000U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                categoryMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18BitTestTerminator terminatorMinMaxDuration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                  const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                  GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                  GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                  const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                  GALGAS_uint & outArgument_outMin,
                                                                                  GALGAS_uint & outArgument_outMax,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 30000U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                categoryMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration (defineCategoryMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18IncDecRegisterTerminator terminatorMinMaxDuration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                          const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                          GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                          GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                          const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                          GALGAS_uint & outArgument_outMin,
                                                                                          GALGAS_uint & outArgument_outMax,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 40000U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ComputedGotoTerminator terminatorMinMaxDuration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                        const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                        GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                        GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                        const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                        GALGAS_uint & outArgument_outMin,
                                                                                        GALGAS_uint & outArgument_outMax,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 50000U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18ComputedRETLWTerminator terminatorMinMaxDuration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                         const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                         GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                         GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                         const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                         GALGAS_uint & outArgument_outMin,
                                                                                         GALGAS_uint & outArgument_outMax,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 60000U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ComputedBraTerminator terminatorMinMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                       const GALGAS_blockMapForDurationComputation /* constinArgument_inBlockMapForDurationComputation */,
                                                                                       GALGAS_exploredBlockMap & /* ioArgument_ioExploredBlockMap */,
                                                                                       GALGAS_codeWithDuration & /* ioArgument_ioCodeWithDuration */,
                                                                                       const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                       GALGAS_uint & outArgument_outMin,
                                                                                       GALGAS_uint & outArgument_outMax,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 70000U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration (void) {
  enterCategoryMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                categoryMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@byteDeclarationInRam handleDeclaration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_byteDeclarationInRam_handleDeclaration (const cPtr_declarationInRam * inObject,
                                                                   GALGAS_ramBankTable & ioArgument_ioRamBank,
                                                                   GALGAS_registerTable & ioArgument_ioRegisterTable,
                                                                   const GALGAS_lstring constinArgument_inCurrentRamBank,
                                                                   GALGAS_declaredByteMap & ioArgument_ioDeclaredByteMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_byteDeclarationInRam * object = (const cPtr_byteDeclarationInRam *) inObject ;
  macroValidSharedObject (object, cPtr_byteDeclarationInRam) ;
  GALGAS_uint var_lastAddressPlusOne ;
  GALGAS_uint var_firstFreeAddress ;
  GALGAS_uintlist var_mirrorOffsetList ;
  GALGAS_uint joker_981 ; // Joker input parameter
  ioArgument_ioRamBank.method_searchKey (constinArgument_inCurrentRamBank, joker_981, var_firstFreeAddress, var_lastAddressPlusOne, var_mirrorOffsetList, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 25)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSize.reader_uint (SOURCE_FILE ("ram_sections.galgas", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSize.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("zero size is not allowed")  COMMA_SOURCE_FILE ("ram_sections.galgas", 27)) ;
  }
  GALGAS_uintlist var_addressList = GALGAS_uintlist::constructor_listWithValue (var_firstFreeAddress  COMMA_SOURCE_FILE ("ram_sections.galgas", 29)) ;
  cEnumerator_uintlist enumerator_1210 (var_mirrorOffsetList, kEnumeration_up) ;
  while (enumerator_1210.hasCurrentObject ()) {
    var_addressList.addAssign_operation (var_firstFreeAddress.add_operation (enumerator_1210.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 31))  COMMA_SOURCE_FILE ("ram_sections.galgas", 31)) ;
    enumerator_1210.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = ioArgument_ioDeclaredByteMap.reader_hasKey (object->mAttribute_mName.mAttribute_string COMMA_SOURCE_FILE ("ram_sections.galgas", 33)).operator_not (SOURCE_FILE ("ram_sections.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioDeclaredByteMap.modifier_insertKey (object->mAttribute_mName, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 34)) ;
    }
  }
  {
  ioArgument_ioRegisterTable.modifier_insertKey (object->mAttribute_mName, var_addressList, object->mAttribute_mSize.reader_uint (SOURCE_FILE ("ram_sections.galgas", 36)), object->mAttribute_mBitSliceTable, object->mAttribute_mBitDefinitionString, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 36)) ;
  }
  var_firstFreeAddress = var_firstFreeAddress.add_operation (object->mAttribute_mSize.reader_uint (SOURCE_FILE ("ram_sections.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 37)) ;
  {
  ioArgument_ioRamBank.modifier_setMFirstFreeAddressForKey (var_firstFreeAddress, constinArgument_inCurrentRamBank.reader_string (SOURCE_FILE ("ram_sections.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 38)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress.objectCompare (var_lastAddressPlusOne)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("overflow in '").add_operation (constinArgument_inCurrentRamBank.reader_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' ram bank for '"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (object->mAttribute_mName.reader_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40))  COMMA_SOURCE_FILE ("ram_sections.galgas", 40)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_byteDeclarationInRam_handleDeclaration (void) {
  enterCategoryMethod_handleDeclaration (kTypeDescriptor_GALGAS_byteDeclarationInRam.mSlotID,
                                         categoryMethod_byteDeclarationInRam_handleDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_byteDeclarationInRam_handleDeclaration (defineCategoryMethod_byteDeclarationInRam_handleDeclaration, NULL) ;

