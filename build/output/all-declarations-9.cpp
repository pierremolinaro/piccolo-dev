#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18AbstractBlockTerminator.h"
#include "class-ipic18AbstractConditionTerminator.h"
#include "class-ipic18JumpTerminator.h"
#include "class-ipic18RetfieTerminator.h"
#include "class-ipic18RetlwTerminator.h"
#include "class-ipic18ReturnTerminator.h"
#include "class-ipic18SingleInstructionTerminator.h"
#include "class-midrange_conditionExpression.h"
#include "class-midrange_instruction.h"
#include "class-midrange_instruction_IF_IncDec.h"
#include "class-midrange_instruction_do_while.h"
#include "class-midrange_instruction_structured_if.h"
#include "class-midrange_intermediate_CALL.h"
#include "class-midrange_intermediate_GOTO.h"
#include "class-midrange_intermediate_JSR.h"
#include "class-midrange_intermediate_JUMP.h"
#include "class-midrange_intermediate_NULL.h"
#include "class-midrange_intermediate_actualInstruction.h"
#include "class-midrange_intermediate_incDecRegisterInCondition.h"
#include "class-midrange_intermediate_instruction.h"
#include "class-midrange_intermediate_instruction_BitTestSkip.h"
#include "class-midrange_intermediate_instruction_CLRW.h"
#include "class-midrange_intermediate_instruction_CLRWDT.h"
#include "class-midrange_intermediate_instruction_F.h"
#include "class-midrange_intermediate_instruction_FB.h"
#include "class-midrange_intermediate_instruction_FD.h"
#include "class-midrange_intermediate_instruction_MNOP.h"
#include "class-midrange_intermediate_instruction_NOP.h"
#include "class-midrange_intermediate_instruction_RETFIE.h"
#include "class-midrange_intermediate_instruction_RETURN.h"
#include "class-midrange_intermediate_instruction_SLEEP.h"
#include "class-midrange_intermediate_instruction_literalOperation.h"
#include "class-midrange_intermediate_pseudo_LABEL.h"
#include "class-midrange_intermediate_pseudo_ORG.h"
#include "class-pic18RegisterComparisonTerminator.h"
#include "class-pic18TestRegisterTerminator.h"
#include "class-registerExpression.h"
#include "enum-ipic18RegisterComparison.h"
#include "enum-jumpInstructionKind.h"
#include "enum-midrange_F_instruction_base_code.h"
#include "enum-midrange_bit_oriented_op.h"
#include "enum-midrange_call_goto_bit.h"
#include "enum-midrange_instruction_FD_base_code.h"
#include "enum-midrange_literal_instruction_opcode.h"
#include "enum-routineKind.h"
#include "func-pic18_BRA_RCALL_displacement.h"
#include "func-pic18_BRA_instruction_code.h"
#include "func-pic18_GOTO_instruction_code.h"
#include "func-pic18_checkBRA_RCALL.h"
#include "getter-ipic18AbstractBlockTerminator-isEqualToTerminator.h"
#include "getter-ipic18AbstractBlockTerminator-terminatorDisplay.h"
#include "getter-ipic18AbstractBlockTerminator-terminatorSize.h"
#include "getter-ipic18_intermediate_registerExpression-isEqualToRegister.h"
#include "getter-midrange_F_instruction_base_code-baseCode.h"
#include "getter-midrange_F_instruction_base_code-mnemonic.h"
#include "getter-midrange_bit_oriented_op-baseCode.h"
#include "getter-midrange_bit_oriented_op-mnemonic.h"
#include "getter-midrange_instruction_FD_base_code-basecode.h"
#include "getter-midrange_instruction_FD_base_code-mnemonic.h"
#include "getter-midrange_intermediate_instruction-instructionLength.h"
#include "getter-midrange_intermediate_instruction-isLABELorORG.h"
#include "getter-midrange_intermediate_instruction-isNULL.h"
#include "getter-midrange_intermediate_instruction-isSkippingInstruction.h"
#include "getter-midrange_intermediate_instruction-nextInstructionIsReachable.h"
#include "getter-midrange_literal_instruction_opcode-baseCode.h"
#include "getter-midrange_literal_instruction_opcode-mnemonic.h"
#include "list-codeList.h"
#include "list-midrange_instructionList.h"
#include "list-midrange_intermediate_instructionList.h"
#include "list-midrange_partList.h"
#include "listmap-branchOverflowMap.h"
#include "map-bitSliceTable.h"
#include "map-constantMap.h"
#include "map-midrange_symbolTable.h"
#include "map-midrange_symbolTableForConvertingRelatives.h"
#include "map-registerTable.h"
#include "map-routineMap.h"
#include "map-symbolTableForOptimizations.h"
#include "map-symbolTableForRelativesResolution.h"
#include "method-ipic18AbstractBlockTerminator-generateTerminatorCode.h"
#include "method-ipic18AbstractBlockTerminator-performTerminatorRelativeBranchResolution.h"
#include "method-ipic18AbstractBlockTerminator-terminatorRelativeBranchOverflow.h"
#include "method-midrange_conditionExpression-buildIPICinstructionForCondition.h"
#include "method-midrange_conditionExpression-computeInstructionCountForCondition.h"
#include "method-midrange_instruction-build_midrange_ipic_instructionList.h"
#include "method-midrange_intermediate_instruction-buildAssemblyCode.h"
#include "method-midrange_intermediate_instruction-compute.h"
#include "method-midrange_intermediate_instruction-defineLabel.h"
#include "method-midrange_intermediate_instruction-defineLabelAtAddress.h"
#include "method-midrange_intermediate_instruction-enterLabelAtAddress.h"
#include "method-midrange_intermediate_instruction-enterReferencedLabel.h"
#include "method-midrange_intermediate_instruction-generateBinaryCodeAtAddress.h"
#include "method-registerExpression-resolveMidrangeAccess.h"
#include "option-piccolo_options.h"
#include "proc-emitMidrangeCodeAtWordAddress.h"
#include "proc-emitMidrangeDirectCodeAtWordAddress.h"
#include "proc-emitNoMidrangeCodeAtWordAddress.h"
#include "proc-emit_midrange_CALLinstruction.h"
#include "proc-emit_midrange_CALLinstruction_nocheck.h"
#include "proc-emit_midrange_GOTOinstruction.h"
#include "proc-emit_midrange_GOTOinstruction_nocheck.h"
#include "proc-handleMidrangeInstructionList.h"
#include "proc-setEmitAddress.h"
#include "struct-ipic18_intermediate_registerExpression.h"
#include "struct-midrange_intermediate_registerExpression.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
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
  GALGAS_bool var_generateComplementaryCondition = GALGAS_bool (false) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_directCount ;
    callCategoryMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), GALGAS_bool (true), var_directCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1275)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1276)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_directCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1277)) ;
    }
    GALGAS_uint var_complementaryCount ;
    callCategoryMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), GALGAS_bool (false), var_complementaryCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1279)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mThenInstructionList.reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1280)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_complementaryCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1281)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_complementaryCount.objectCompare (var_directCount)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_generateComplementaryCondition = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1285)).reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1285)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1285)).add_operation (GALGAS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1285)).add_operation (var_directCount.substract_operation (var_complementaryCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1286)).reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1285)).add_operation (GALGAS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1286))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1285)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_directCount.substract_operation (var_complementaryCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1287)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("s")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1288)) ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (")\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1290)) ;
    }
  }
  GALGAS_uint var_elseBranchFinalBank = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank = ioArgument_ioCurrentBank ;
  GALGAS_bool var_elseContinuesInSequence ;
  GALGAS_bool var_thenContinuesInSequence ;
  const enumGalgasBool test_5 = var_generateComplementaryCondition.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_label_5F_nextCondition = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1299)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1299)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1299)) ;
    GALGAS_string var_label_5F_endOfIfinstruction = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1300)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1300)) ;
    callCategoryMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mAttribute_mInstructionLocation, var_label_5F_nextCondition, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1302)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1315)) ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mThenInstructionList.reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1331)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1332))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1332))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1332)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1334)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1334))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1334)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mThenInstructionList.reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1351)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1351))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1351)) ;
    }
  }else if (kBoolFalse == test_5) {
    GALGAS_string var_label_5F_nextCondition = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1355)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1355)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1355)) ;
    GALGAS_string var_label_5F_endOfIfinstruction = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1356)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1356)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1356)) ;
    callCategoryMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mAttribute_mInstructionLocation, var_label_5F_nextCondition, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1358)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)) ;
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1387)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1390)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1390))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1390)) ;
    {
    routine_handleMidrangeInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1391)) ;
    }
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1406)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1407)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1407))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1407)) ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank.objectCompare (var_thenBranchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_10) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank ;
  }else if (kBoolFalse == test_10) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1413)) ;
    var_elseBranchFinalBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1414)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence.operator_or (var_elseContinuesInSequence COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1417)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                                                    categoryMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (defineCategoryMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@midrange_instruction_do_while build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
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
  GALGAS_string var_labelInstructionBegin = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1436)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1436)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1438)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1438))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1438)) ;
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  {
  routine_handleMidrangeInstructionList (object->mAttribute_mRepeatedInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1441)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1457)) ;
  }
  cEnumerator_midrange_5F_partList enumerator_51714 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_51714.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_51714.current_mInstructionList (HERE).reader_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1461)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      callCategoryMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_51714.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mAttribute_mInstructionLocation, var_labelInstructionBegin, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1462)) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_string var_nextBranchLabel = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1475)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1475)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1475)) ;
      callCategoryMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_51714.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mAttribute_mInstructionLocation, var_nextBranchLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
      GALGAS_uint var_bank = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList (enumerator_51714.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1489)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_bank)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (enumerator_51714.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1505)) ;
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_labelInstructionBegin, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1507))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1507))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1507)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1508)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1508))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1508)) ;
    }
    enumerator_51714.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while.mSlotID,
                                                                    categoryMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (defineCategoryMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
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
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1531)) ;
  }else if (kBoolFalse == test_0) {
    var_baseCode = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1533)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_54392_0 ; // Joker input parameter
  callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, var_IPICregisterDescription, joker_54392_0, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1537)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, var_baseCode, var_IPICregisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1546))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1546)) ;
  GALGAS_bool var_unusedContinuesInSequence = GALGAS_bool (true) ;
  callCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) object->mAttribute_mInstruction.ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1553)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                                                    categoryMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (defineCategoryMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@midrange_intermediate_pseudo_ORG isLABELorORG'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (void) {
  enterCategoryReader_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                    categoryReader_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (defineCategoryReader_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@midrange_intermediate_pseudo_LABEL isLABELorORG'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (void) {
  enterCategoryReader_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    categoryReader_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (defineCategoryReader_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@midrange_intermediate_NULL isNULL'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_NULL_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_NULL_isNULL (void) {
  enterCategoryReader_isNULL (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                              categoryReader_midrange_5F_intermediate_5F_NULL_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_NULL_isNULL (defineCategoryReader_midrange_5F_intermediate_5F_NULL_isNULL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@midrange_intermediate_JUMP enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 53))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterCategoryMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@midrange_intermediate_GOTO enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 59))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterCategoryMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@midrange_intermediate_CALL enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 65))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterCategoryMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (defineCategoryMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@midrange_intermediate_JSR enterReferencedLabel'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 71))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterCategoryMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (defineCategoryMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterCategoryMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterCategoryReader_isSkippingInstruction (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                             categoryReader_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@midrange_intermediate_JUMP nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterCategoryReader_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                                  categoryReader_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineCategoryReader_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@midrange_intermediate_GOTO nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterCategoryReader_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                                  categoryReader_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineCategoryReader_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (void) {
  enterCategoryReader_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                                  categoryReader_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (void) {
  enterCategoryReader_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                                  categoryReader_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category reader '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
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

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterCategoryReader_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                  categoryReader_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineCategoryReader_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@midrange_intermediate_pseudo_LABEL defineLabel'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                    GALGAS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                    const GALGAS_uint constinArgument_inLineIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.modifier_insertKey (object->mAttribute_mLabel, constinArgument_inLineIndex, object->mAttribute_mIsDeletable, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterCategoryMethod_defineLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                   categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.modifier_insertKey (object->mAttribute_mLabel, ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 28)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (void) {
  enterCategoryMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                           GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioAddress.objectCompare (object->mAttribute_mOrigin)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GALGAS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.reader_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GALGAS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (object->mAttribute_mOrigin.reader_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
  }
  ioArgument_ioAddress = object->mAttribute_mOrigin ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (void) {
  enterCategoryMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@midrange_intermediate_actualInstruction defineLabelAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_actualInstruction * object = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = object ;
  GALGAS_uint var_nextAddress = ioArgument_ioAddress.add_operation (callCategoryReader_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_nextAddress.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("Routine too long, crosses page boundary at this instruction")  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
  }
  ioArgument_ioAddress = var_nextAddress ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (void) {
  enterCategoryMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@midrange_intermediate_NULL compute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_NULL_compute (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
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

static void defineCategoryMethod_midrange_5F_intermediate_5F_NULL_compute (void) {
  enterCategoryMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                               categoryMethod_midrange_5F_intermediate_5F_NULL_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_compute (defineCategoryMethod_midrange_5F_intermediate_5F_NULL_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@midrange_intermediate_actualInstruction compute'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_actualInstruction_compute (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
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

static void defineCategoryMethod_midrange_5F_intermediate_5F_actualInstruction_compute (void) {
  enterCategoryMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                               categoryMethod_midrange_5F_intermediate_5F_actualInstruction_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_compute (defineCategoryMethod_midrange_5F_intermediate_5F_actualInstruction_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@midrange_intermediate_pseudo_ORG compute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
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

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (void) {
  enterCategoryMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                               categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@midrange_intermediate_JUMP compute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JUMP_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
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
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 117)) ;
  GALGAS_uint var_flags = ioArgument_ioAddress.operator_xor (var_targetAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 119)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31_ ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_flags.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_bit_31__31_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 122)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetAddress.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 124)) ;
    }else if (kBoolFalse == test_1) {
      var_bit_31__31_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 126)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32_ ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_flags.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_bit_31__32_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 131)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetAddress.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 132)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 133)) ;
    }else if (kBoolFalse == test_3) {
      var_bit_31__32_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 135)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_bit_31__31_.objectCompare (object->mAttribute_mBit_31__31_)).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32_.objectCompare (object->mAttribute_mBit_31__32_)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction = GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, var_bit_31__31_, var_bit_31__32_  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 139)) ;
    {
    ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (var_instruction, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 144)) ;
    }
    ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (constinArgument_inIndex.reader_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)).add_operation (GALGAS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_compute (void) {
  enterCategoryMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                               categoryMethod_midrange_5F_intermediate_5F_JUMP_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_compute (defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@midrange_intermediate_JSR compute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JSR_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
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
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 161)) ;
  GALGAS_uint var_flags = ioArgument_ioAddress.operator_xor (var_targetAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 163)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31_ ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_flags.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_bit_31__31_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 166)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetAddress.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 168)) ;
    }else if (kBoolFalse == test_1) {
      var_bit_31__31_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 170)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32_ ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_flags.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_bit_31__32_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 175)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetAddress.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 177)) ;
    }else if (kBoolFalse == test_3) {
      var_bit_31__32_ = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 179)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_bit_31__31_.objectCompare (object->mAttribute_mBit_31__31_)).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32_.objectCompare (object->mAttribute_mBit_31__32_)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 182)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction = GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, var_bit_31__31_, var_bit_31__32_  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 183)) ;
    {
    ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (var_instruction, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)) ;
    }
    ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (constinArgument_inIndex.reader_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)).add_operation (GALGAS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JSR_compute (void) {
  enterCategoryMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                               categoryMethod_midrange_5F_intermediate_5F_JSR_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_compute (defineCategoryMethod_midrange_5F_intermediate_5F_JSR_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@midrange_intermediate_pseudo_LABEL compute'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
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
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetAddress.objectCompare (ioArgument_ioAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Internal second pass error: the '").add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)).add_operation (ioArgument_ioAddress.reader_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (var_targetAddress.reader_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 208))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (void) {
  enterCategoryMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                               categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@midrange_intermediate_NULL buildAssemblyCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                               GALGAS_string & /* ioArgument_ioString */,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                        GALGAS_string & ioArgument_ioString,
                                                                                        GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ORG ").add_operation (object->mAttribute_mOrigin.reader_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioString,
                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioString.dotAssign_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_instruction_FD buildAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_string & ioArgument_ioString,
                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_mnemonic (object->mAttribute_mInstruction_5F_FD_5F_base_5F_code, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 41)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 43)) ;
  }
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 45)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_instruction_FB buildAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_string & ioArgument_ioString,
                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_mnemonic (object->mAttribute_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string (", ").add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     GALGAS_string & ioArgument_ioString,
                                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string ("BTFSS")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string ("BTFSC")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string (", ").add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@midrange_intermediate_instruction_F buildAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_mnemonic (object->mAttribute_mFinstruction, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                    GALGAS_string & ioArgument_ioString,
                                                                                                    GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (GALGAS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (GALGAS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  ioArgument_ioString.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 96)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 98)) ;
  }
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 100)) ;
  const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_localLabel = GALGAS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
    ioArgument_ioString.dotAssign_operation (GALGAS_string ("  GOTO ").add_operation (var_localLabel, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
    ioArgument_ioString.dotAssign_operation (GALGAS_string ("  GOTO ").add_operation (object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
    ioArgument_ioString.dotAssign_operation (var_localLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioString.dotAssign_operation (GALGAS_string ("  GOTO ").add_operation (object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@midrange_intermediate_JUMP buildAssemblyCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  if (object->mAttribute_mBit_31__31_.isValid ()) {
    switch (object->mAttribute_mBit_31__31_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BSF PCLATH, 3\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 117)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BCF PCLATH, 3\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 118)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  if (object->mAttribute_mBit_31__32_.isValid ()) {
    switch (object->mAttribute_mBit_31__32_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BSF PCLATH, 4\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 122)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BCF PCLATH, 4\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 123)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  GOTO   ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@midrange_intermediate_GOTO buildAssemblyCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  GOTO   ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@midrange_intermediate_JSR buildAssemblyCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                              GALGAS_string & ioArgument_ioString,
                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  if (object->mAttribute_mBit_31__31_.isValid ()) {
    switch (object->mAttribute_mBit_31__31_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BSF PCLATH, 3\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 143)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BCF PCLATH, 3\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 144)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  if (object->mAttribute_mBit_31__32_.isValid ()) {
    switch (object->mAttribute_mBit_31__32_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BSF PCLATH, 4\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 148)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BCF PCLATH, 4\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 149)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  CALL  ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  if (object->mAttribute_mBit_31__31_.isValid ()) {
    switch (object->mAttribute_mBit_31__31_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BCF PCLATH, 3\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 154)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BSF PCLATH, 3\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 155)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  if (object->mAttribute_mBit_31__32_.isValid ()) {
    switch (object->mAttribute_mBit_31__32_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BCF PCLATH, 4\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 159)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      ioArgument_ioString.dotAssign_operation (GALGAS_string ("  BSF PCLATH, 4\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 160)) ;
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@midrange_intermediate_CALL buildAssemblyCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  CALL  ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                GALGAS_string & ioArgument_ioString,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  CLRWDT\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                              GALGAS_string & ioArgument_ioString,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  CLRW\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_instruction_NOP buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                             GALGAS_string & ioArgument_ioString,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  NOP\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                GALGAS_string & ioArgument_ioString,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  RETURN\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                GALGAS_string & ioArgument_ioString,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  RETFIE\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  SLEEP\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                          GALGAS_string & ioArgument_ioString,
                                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioString.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_mnemonic (object->mAttribute_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (object->mAttribute_mLiteralValue.reader_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                              GALGAS_string & ioArgument_ioString,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("No generated code")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
  }
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).isValid ()) {
    uint32_t variant_6836 = object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).uintValue () ;
    bool loop_6836 = true ;
    while (loop_6836) {
      loop_6836 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).isValid () ;
      if (loop_6836) {
        loop_6836 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).boolValue () ;
      }
      if (loop_6836 && (0 == variant_6836)) {
        loop_6836 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_6836) {
        variant_6836 -- ;
        ioArgument_ioString.dotAssign_operation (GALGAS_string ("  NOP\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (void) {
  enterCategoryMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                            GALGAS_uint & ioArgument_ioAddress,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.modifier_insertKey (object->mAttribute_mLabel, ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 68)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (void) {
  enterCategoryMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                           categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioAddress = object->mAttribute_mOrigin ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (void) {
  enterCategoryMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                           categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@midrange_intermediate_actualInstruction enterLabelAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                              GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                              GALGAS_uint & ioArgument_ioAddress,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_actualInstruction * object = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = object ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callCategoryReader_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (void) {
  enterCategoryMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                           categoryMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                         GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                  const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                  const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_uint & ioArgument_ioAddress,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioAddress = object->mAttribute_mOrigin ;
  {
  routine_setEmitAddress (object->mAttribute_mOrigin.add_operation (object->mAttribute_mOrigin, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 122)) ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 123)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  GALGAS_uint var_code = categoryReader_basecode (object->mAttribute_mInstruction_5F_FD_5F_base_5F_code, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 156)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 157)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 128U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 158)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 160)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 160)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 160)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 161)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  GALGAS_uint var_code = categoryReader_baseCode (object->mAttribute_mFinstruction, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 182)) ;
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 183)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 183)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 183)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 184)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  GALGAS_uint var_code = categoryReader_baseCode (object->mAttribute_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 206)) ;
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 207)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 207)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 207)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 208)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 208)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 209)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                               const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = GALGAS_uint ((uint32_t) 7168U) ;
  }else if (kBoolFalse == test_0) {
    var_code = GALGAS_uint ((uint32_t) 6144U) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 227)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 227)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 227)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 228)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 228)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 229)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_JUMP generateBinaryCodeAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_stringset var_usedRegisters = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 291)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 293)) ;
  GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 295))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 295)), GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 295))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 295))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 295)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_10870_0 ; // Joker input parameter
  callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 299)), constinArgument_inRegisterTable, var_PCLATH_5F_IPICregisterDescription, joker_10870_0, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 297)) ;
  if (object->mAttribute_mBit_31__31_.isValid ()) {
    switch (object->mAttribute_mBit_31__31_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 309)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 309)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 309)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 309)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 309)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 308)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 316)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 316)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 316)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 316)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 316)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 315)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  if (object->mAttribute_mBit_31__32_.isValid ()) {
    switch (object->mAttribute_mBit_31__32_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 326)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 325)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 333)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 333)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 333)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 333)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 333)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 332)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  {
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 341)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 354)) ;
  {
  routine_emit_5F_midrange_5F_GOTOinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 356)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                        const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                        const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_uint & ioArgument_ioAddress,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  GALGAS_stringset var_usedRegisters = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 367)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 370)) ;
  GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 372))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 372)), GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 372))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 372))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 372)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_13400_0 ; // Joker input parameter
  callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 376)), constinArgument_inRegisterTable, var_PCLATH_5F_IPICregisterDescription, joker_13400_0, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 374)) ;
  if (object->mAttribute_mBit_31__31_.isValid ()) {
    switch (object->mAttribute_mBit_31__31_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 386)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 393)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 393)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 393)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 393)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 393)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 392)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  if (object->mAttribute_mBit_31__32_.isValid ()) {
    switch (object->mAttribute_mBit_31__32_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 403)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 403)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 403)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 403)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 403)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 402)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 410)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 410)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 410)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 410)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 410)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 409)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 417)) ;
  }
  if (object->mAttribute_mBit_31__31_.isValid ()) {
    switch (object->mAttribute_mBit_31__31_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 421)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 421)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 421)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 421)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 421)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 420)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 428)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 428)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 428)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 428)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 428)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 427)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
  if (object->mAttribute_mBit_31__32_.isValid ()) {
    switch (object->mAttribute_mBit_31__32_.enumValue ()) {
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 438)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 438)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 438)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 438)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 438)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 437)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear: {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 445)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 445)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 445)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 445)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 445)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 444)) ;
      }
      } break ;
    case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange: {
      } break ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 464)) ;
  {
  routine_emit_5F_midrange_5F_CALLinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 466)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                              const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                              const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                              const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                                              GALGAS_uint & ioArgument_ioAddress,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_code ;
  GALGAS_string var_s ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = GALGAS_uint ((uint32_t) 3840U) ;
    var_s = GALGAS_string ("INCFSZ") ;
  }else if (kBoolFalse == test_0) {
    var_code = GALGAS_uint ((uint32_t) 2816U) ;
    var_s = GALGAS_string ("DECFSZ") ;
  }
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 484)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 128U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 485)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 487)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 487)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 487)) ;
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_build_binary_code.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 488))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 488)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code, ioArgument_ioAddress, var_s, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 489)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    routine_emit_5F_midrange_5F_GOTOinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, GALGAS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 492)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 492)) ;
    }
  }
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (object->mAttribute_mTargetLabel, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 496))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 496)), var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 496)) ;
  {
  routine_emit_5F_midrange_5F_GOTOinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, object->mAttribute_mTargetLabel, var_targetAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 497)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 100U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        const GALGAS_registerTable /* constinArgument_inRegisterTable */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 256U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 519)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_registerTable /* constinArgument_inRegisterTable */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 530)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 8U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 541)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 9U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 552)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 99U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 563)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                    const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                                    const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                    GALGAS_uint & ioArgument_ioAddress,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code = categoryReader_baseCode (object->mAttribute_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 589)) ;
  var_code = var_code.operator_or (object->mAttribute_mLiteralValue COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 590)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 591)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                    const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                    const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                    GALGAS_uint & ioArgument_ioAddress,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 602)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetAddress.objectCompare (ioArgument_ioAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Internal second pass error: the '").add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 604)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 604)).add_operation (ioArgument_ioAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 605)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 605)).add_operation (var_targetAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 605)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 606))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 604)) ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = object ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 608)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                        const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_uint & ioArgument_ioAddress,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 619)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("No generated code")  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 620)) ;
  }
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 623)).isValid ()) {
    uint32_t variant_21984 = object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 623)).uintValue () ;
    bool loop_21984 = true ;
    while (loop_21984) {
      loop_21984 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 624)))).isValid () ;
      if (loop_21984) {
        loop_21984 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 624)))).boolValue () ;
      }
      if (loop_21984 && (0 == variant_21984)) {
        loop_21984 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_build_binary_code.galgas", 623)) ;
      }
      if (loop_21984) {
        variant_21984 -- ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, GALGAS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 626)) ;
        }
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (void) {
  enterCategoryMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                                   categoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@ipic18ReturnTerminator terminatorDisplay'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ReturnTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                    const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETURN") ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ReturnTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ReturnTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ReturnTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ReturnTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@ipic18ReturnTerminator terminatorSize'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ReturnTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                               const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ReturnTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ReturnTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ReturnTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ReturnTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18ReturnTerminator generateTerminatorCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                const GALGAS_uint /* constinArgument_inAddress */,
                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RETURN"), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 18U)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18ReturnTerminator isEqualToTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ReturnTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ReturnTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ReturnTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ReturnTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ReturnTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@ipic18RetfieTerminator terminatorDisplay'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_RetfieTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  result_outResult = GALGAS_string ("RETFIE") ;
  const enumGalgasBool test_0 = object->mAttribute_mFastReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (" FAST")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetfieTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                         categoryReader_ipic_31__38_RetfieTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetfieTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_RetfieTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@ipic18RetfieTerminator terminatorSize'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_RetfieTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                               const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetfieTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                      categoryReader_ipic_31__38_RetfieTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetfieTerminator_terminatorSize (defineCategoryReader_ipic_31__38_RetfieTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18RetfieTerminator generateTerminatorCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                const GALGAS_uint /* constinArgument_inAddress */,
                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = object ;
  GALGAS_uint temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mFastReturn.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 17U) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 16U) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GALGAS_uintlist::constructor_listWithValue (temp_1  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18RetfieTerminator isEqualToTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_RetfieTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetfieTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                           categoryReader_ipic_31__38_RetfieTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetfieTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_RetfieTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@ipic18RetlwTerminator terminatorDisplay'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_RetlwTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  result_outResult = GALGAS_string ("RETLW ").add_operation (object->mAttribute_mLiteralValue.reader_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetlwTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                         categoryReader_ipic_31__38_RetlwTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetlwTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_RetlwTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@ipic18RetlwTerminator terminatorSize'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_RetlwTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                              const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetlwTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                      categoryReader_ipic_31__38_RetlwTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetlwTerminator_terminatorSize (defineCategoryReader_ipic_31__38_RetlwTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18RetlwTerminator generateTerminatorCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 3072U).operator_or (object->mAttribute_mLiteralValue COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@ipic18RetlwTerminator isEqualToTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_RetlwTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_RetlwTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_RetlwTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_RetlwTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 141)) ;
      }
    }
    GALGAS_ipic_31__38_RetlwTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mLiteralValue.objectCompare (var_t.reader_mLiteralValue (SOURCE_FILE ("ipic18_terminators.galgas", 142)))) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetlwTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                           categoryReader_ipic_31__38_RetlwTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetlwTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_RetlwTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@ipic18JumpTerminator terminatorSize'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_JumpTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                             const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 0U) ;
  }else if (kBoolFalse == test_0) {
    if (object->mAttribute_mKind.isValid ()) {
      switch (object->mAttribute_mKind.enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative: case GALGAS_jumpInstructionKind::kEnum_relative: {
        result_outSize = GALGAS_uint ((uint32_t) 2U) ;
        } break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute: {
        result_outSize = GALGAS_uint ((uint32_t) 4U) ;
        } break ;
      }
    }
  }
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_JumpTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                      categoryReader_ipic_31__38_JumpTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_JumpTerminator_terminatorSize (defineCategoryReader_ipic_31__38_JumpTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                        GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_mKind.isValid ()) {
      switch (object->mAttribute_mKind.enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative: case GALGAS_jumpInstructionKind::kEnum_relative: {
        const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 178)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 178)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 179)) ;
        }
        } break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute: {
        } break ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inNextBlockLabel.objectCompare (object->mAttribute_mLabel.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_1) {
    if (object->mAttribute_mKind.isValid ()) {
      switch (object->mAttribute_mKind.enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative: {
        const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 200)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 200)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 201)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202)).add_operation (GALGAS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202)) ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLabel, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 203))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203)) ;
        }
        } break ;
      case GALGAS_jumpInstructionKind::kEnum_relative: {
        const enumGalgasBool test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 206)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 206)).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).add_operation (GALGAS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)) ;
        }
        } break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute: {
        } break ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@ipic18JumpTerminator terminatorDisplay'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_JumpTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                  const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  GALGAS_string var_name ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative: {
      var_name = GALGAS_string ("JUMP ") ;
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_relative: {
      var_name = GALGAS_string ("BRA ") ;
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute: {
      var_name = GALGAS_string ("GOTO ") ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inNextBlockLabel.objectCompare (object->mAttribute_mLabel.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string ("(").add_operation (var_name, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 228)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 228)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 228)) ;
  }else if (kBoolFalse == test_0) {
    result_outResult = var_name.add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 230)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_JumpTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                         categoryReader_ipic_31__38_JumpTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_JumpTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_JumpTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@ipic18JumpTerminator generateTerminatorCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                              const GALGAS_uint constinArgument_inAddress,
                                                                              const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GALGAS_string constinArgument_inNextBlockLabel,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_terminators.galgas", 242)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_targetAddress ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 244)) ;
    if (object->mAttribute_mKind.isValid ()) {
      switch (object->mAttribute_mKind.enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative: case GALGAS_jumpInstructionKind::kEnum_relative: {
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, object->mAttribute_mLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 247)) ;
        } break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute: {
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress, object->mAttribute_mLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 249)) ;
        } break ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_JumpTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_JumpTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@ipic18JumpTerminator isEqualToTerminator'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_JumpTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                  const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_JumpTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_JumpTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_JumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 261)) ;
      }
    }
    GALGAS_ipic_31__38_JumpTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (var_t.reader_mLabel (SOURCE_FILE ("ipic18_terminators.galgas", 262)).mAttribute_string)).operator_and (GALGAS_bool (kIsEqual, object->mAttribute_mKind.objectCompare (var_t.reader_mKind (SOURCE_FILE ("ipic18_terminators.galgas", 262)))) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 262)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_JumpTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                           categoryReader_ipic_31__38_JumpTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_JumpTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_JumpTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18AbstractConditionTerminator terminatorSize'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_AbstractConditionTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 275)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 276)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_AbstractConditionTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                      categoryReader_ipic_31__38_AbstractConditionTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_AbstractConditionTerminator_terminatorSize (defineCategoryReader_ipic_31__38_AbstractConditionTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                                     const GALGAS_string constinArgument_inBlockLabel,
                                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                     GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callCategoryMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 288)) ;
  callCategoryMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 295)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@pic18RegisterComparisonTerminator terminatorSize'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_pic_31__38_RegisterComparisonTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 313)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 314)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_RegisterComparisonTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                      categoryReader_pic_31__38_RegisterComparisonTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_RegisterComparisonTerminator_terminatorSize (defineCategoryReader_pic_31__38_RegisterComparisonTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@pic18RegisterComparisonTerminator terminatorDisplay'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outResult = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 323)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 323)) ;
  if (object->mAttribute_mComparison.isValid ()) {
    switch (object->mAttribute_mComparison.enumValue ()) {
    case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
      break ;
    case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW: {
      result_outResult.dotAssign_operation (GALGAS_string ("==")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 326)) ;
      } break ;
    case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW: {
      result_outResult.dotAssign_operation (GALGAS_string (">")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 328)) ;
      } break ;
    case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW: {
      result_outResult.dotAssign_operation (GALGAS_string ("<")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 330)) ;
      } break ;
    }
  }
  result_outResult.dotAssign_operation (GALGAS_string (" W \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 332)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 333))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 333)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 334)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 335))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 335)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                         categoryReader_pic_31__38_RegisterComparisonTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (defineCategoryReader_pic_31__38_RegisterComparisonTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 349)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 358)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
    outArgument_outModifiedTerminator = temp_1 ;
  }else if (kBoolFalse == test_0) {
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_2 ;
    if (var_outModifiedTrueTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator.ptr ())) {
        temp_2 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 372)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 373)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription, object->mAttribute_mComparison  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 370)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                                 categoryMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@pic18RegisterComparisonTerminator generateTerminatorCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_uint var_binCode ;
  GALGAS_string var_assemblyCode ;
  if (object->mAttribute_mComparison.isValid ()) {
    switch (object->mAttribute_mComparison.enumValue ()) {
    case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
      break ;
    case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW: {
      var_binCode = GALGAS_uint ((uint32_t) 25088U) ;
      var_assemblyCode = GALGAS_string ("    CPFSEQ") ;
      } break ;
    case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW: {
      var_binCode = GALGAS_uint ((uint32_t) 25600U) ;
      var_assemblyCode = GALGAS_string ("    CPFSGT") ;
      } break ;
    case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW: {
      var_binCode = GALGAS_uint ((uint32_t) 24576U) ;
      var_assemblyCode = GALGAS_string ("    CPFSLT") ;
      } break ;
    }
  }
  var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 399))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 399)) ;
  var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 400)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 400)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 400)) ;
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 401)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 402)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 403)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 405)) ;
  GALGAS_codeList var_falseTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 409)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 408)) ;
  outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) ;
  GALGAS_codeList var_trueTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 416)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 416)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 415)) ;
  outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 421)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                              categoryMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@pic18RegisterComparisonTerminator isEqualToTerminator'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_pic_31__38_RegisterComparisonTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_pic_31__38_RegisterComparisonTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)) ;
      }
    }
    GALGAS_pic_31__38_RegisterComparisonTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 432)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 434)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mComparison.objectCompare (var_t.reader_mComparison (SOURCE_FILE ("ipic18_terminators.galgas", 437)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 440)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                           categoryReader_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (defineCategoryReader_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@pic18TestRegisterTerminator terminatorSize'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_pic_31__38_TestRegisterTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 454)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 455)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_TestRegisterTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                      categoryReader_pic_31__38_TestRegisterTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_TestRegisterTerminator_terminatorSize (defineCategoryReader_pic_31__38_TestRegisterTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@pic18TestRegisterTerminator terminatorDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_pic_31__38_TestRegisterTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outResult = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 464)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" Z \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 465)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 466))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 466)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 467)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 468))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 468)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_TestRegisterTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                         categoryReader_pic_31__38_TestRegisterTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_TestRegisterTerminator_terminatorDisplay (defineCategoryReader_pic_31__38_TestRegisterTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 482)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 491)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
    outArgument_outModifiedTerminator = temp_1 ;
  }else if (kBoolFalse == test_0) {
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_2 ;
    if (var_outModifiedTrueTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator.ptr ())) {
        temp_2 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 505)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 506)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 503)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                                 categoryMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@pic18TestRegisterTerminator generateTerminatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_uint var_binCode = GALGAS_uint ((uint32_t) 26112U) ;
  GALGAS_string var_assemblyCode = GALGAS_string ("    TSTFSZ ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 519)) ;
  var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 520)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 520)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 520)) ;
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 521)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 522)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 523)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 527))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 525)) ;
  GALGAS_codeList var_falseTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 530)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 529)) ;
  outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) ;
  GALGAS_codeList var_trueTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 537)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 537)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 536)) ;
  outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 542)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                              categoryMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (defineCategoryMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@pic18TestRegisterTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_TestRegisterTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_pic_31__38_TestRegisterTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_pic_31__38_TestRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_pic_31__38_TestRegisterTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)) ;
      }
    }
    GALGAS_pic_31__38_TestRegisterTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 553)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 555)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 558)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_TestRegisterTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                           categoryReader_pic_31__38_TestRegisterTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_TestRegisterTerminator_isEqualToTerminator (defineCategoryReader_pic_31__38_TestRegisterTerminator_isEqualToTerminator, NULL) ;

