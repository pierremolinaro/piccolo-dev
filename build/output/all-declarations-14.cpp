#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"


//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_FOREVER analyze'                           *
//                                                                                                                     *
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 527)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 530)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_18912 = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_loopLabel_18964 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 534)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 534)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 535)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 538)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel_18964, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 541))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 541)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 542)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 537))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 537)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 546)) ;
  ioArgument_ioBlockLabel = var_loopLabel_18964 ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list execution is endless")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 568)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 571)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel_18964, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 574))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 574)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 575)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 570))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 570)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_18912)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_nobanksel analyze'                          *
//                                                                                                                     *
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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 606)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 608)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_savebank analyze'                           *
//                                                                                                                     *
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
  GALGAS_registerExpression var_BSRregister_22208 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 633))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 633)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 634))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 634))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 634)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 635))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 632)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_22521 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister_22208.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_BSR_5F_IPICregisterDescription_22521, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 637)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_22788 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mRegister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_22788, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 644)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_BSR_5F_IPICregisterDescription_22521, var_save_5F_IPICregisterDescription_22788  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 651)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 656)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 651)) ;
  GALGAS_uint var_finalBank_23110 = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_23110, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 660)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 679)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_save_5F_IPICregisterDescription_22788, var_BSR_5F_IPICregisterDescription_22521  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 682)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 687)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 682)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_savebank_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_repetitionStatique analyze'                      *
//                                                                                                                     *
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
  GALGAS_sint_36__34_ var_lowerBound_24695 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_24695, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 710)) ;
  GALGAS_sint_36__34_ var_upperBound_24800 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_24800, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 711)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound_24695.objectCompare (var_upperBound_24800)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound_24695.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (var_upperBound_24800.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_upperBound_24800.substract_operation (var_lowerBound_24695, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 715)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound_24800.substract_operation (var_lowerBound_24695, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)) ;
    }
  }
  GALGAS_uint var_finalBank_25227 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_25265 = constinArgument_inConstantMap ;
  {
  var_tempConstantMap_25265.setter_insertKey (object->mAttribute_mConstantName, var_lowerBound_24695, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 721)) ;
  }
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_25265, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_25227, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 722)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 741)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_finalBank_25227.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("enclosed instruction list should not modify bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 744)) ;
  }
  GALGAS_sint_36__34_ var_idx_26063 = var_lowerBound_24695.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 747)) ;
  if (var_upperBound_24800.substract_operation (var_lowerBound_24695, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).isValid ()) {
    uint32_t variant_26087 = var_upperBound_24800.substract_operation (var_lowerBound_24695, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).uintValue () ;
    bool loop_26087 = true ;
    while (loop_26087) {
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_idx_26063.objectCompare (var_upperBound_24800)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_26087 = test_4.isValid () ;
      if (loop_26087) {
        loop_26087 = test_4.boolValue () ;
      }
      if (loop_26087 && (0 == variant_26087)) {
        loop_26087 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)) ;
      }
      if (loop_26087) {
        variant_26087 -- ;
        GALGAS_constantMap var_constantMap_26200 = constinArgument_inConstantMap ;
        {
        var_constantMap_26200.setter_insertKey (object->mAttribute_mConstantName, var_idx_26063, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 750)) ;
        }
        {
        routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_26200, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 751)) ;
        }
        var_idx_26063.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 769)) ;
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
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_banksel analyze'                           *
//                                                                                                                     *
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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 792)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 794)).objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mBankIndex.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("selected bank idx should be lower or equal to 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 795)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 796)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 797)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioCurrentBank = object->mAttribute_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 798)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBankIndex  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 799)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 799)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 799)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mBankIndex.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticWarning (location_5, GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 801)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 801)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 801))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 801)) ;
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
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_banksel_register analyze'                       *
//                                                                                                                     *
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
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 825)) ;
  }
  GALGAS_uint var_registerAddress_29088 ;
  callExtensionMethod_getRegisterAddress ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_registerAddress_29088, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 827)) ;
  GALGAS_uint var_newBank_29198 = var_registerAddress_29088.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 829)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_29198)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioCurrentBank = var_newBank_29198 ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_luint::constructor_new (var_newBank_29198, object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 834)).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 834))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 832)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 836)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 832)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_3, GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_29198.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 839))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)) ;
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
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'                    *
//                                                                                                                     *
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 856)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'                    *
//                                                                                                                     *
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 874)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_MNOP analyze'                             *
//                                                                                                                     *
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 898)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("occurrence argument is zero: no generated code")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 899)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 902)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 906)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 902)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_MNOP_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_NOPBRA analyze'                            *
//                                                                                                                     *
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 929)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("occurrence argument is zero: no generated code")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 930)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 933)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 937)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 933)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_LTBLPTR analyze'                           *
//                                                                                                                     *
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
  GALGAS_sint_36__34_ var_result_33643 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_33643, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 959)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_33643.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_33643.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 961)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_33643.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 962)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 962)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 962))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 962)) ;
  }
  GALGAS_uint var_address_33869 = var_result_33643.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 964)) ;
  GALGAS_registerExpression var_TBLPTRU_33915 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 967)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 968))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 968))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 968)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 969))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 966)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_34259 ;
  GALGAS_bitSliceTable joker_34265 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_33915.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription_34259, joker_34265, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 971)) ;
  GALGAS_uint var_upper_34310 = var_address_33869.right_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_upper_34310.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 984)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_upper_34310.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 995)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1000)), var_upper_34310  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 998)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1003)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 998)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1007)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1005)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1010)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1005)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRH_35280 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1015)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1016))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1016))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1016)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)) ;
  GALGAS_bitSliceTable joker_35586 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_35280.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription_34259, joker_35586, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1019)) ;
  GALGAS_uint var_high_35630 = var_address_33869.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_high_35630.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1030)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1035)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1030)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_high_35630.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1040)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1043)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1048)), var_high_35630  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1046)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1046)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRL_36604 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1064))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1064))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1064)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1065))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1062)) ;
  GALGAS_bitSliceTable joker_36909 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_36604.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription_34259, joker_36909, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1067)) ;
  GALGAS_uint var_low_36952 = var_address_33869.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_low_36952.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1080)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1083)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_low_36952.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1091)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)) ;
    }else if (kBoolFalse == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1096)), var_low_36952  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1094)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1099)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1094)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1103)), var_outIPICregisterDescription_34259  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1101)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1106)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1101)) ;
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
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_LDATAPTR analyze'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_uintlist var_data_38629 ;
  constinArgument_inDataMap.method_searchKey (object->mAttribute_mDataName, var_data_38629, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1129)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1131)).objectCompare (var_data_38629.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1131)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDataIndex.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("index should be < ").add_operation (var_data_38629.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132)) ;
  }
  GALGAS_registerExpression var_TBLPTRU_38787 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1136)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1137))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1137))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1137)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1138))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1135)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_39132 ;
  GALGAS_bitSliceTable joker_39138 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_38787.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription_39132, joker_39138, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1140)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1152)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1152)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1149)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1155)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1149)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)), var_outIPICregisterDescription_39132  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1157)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1162)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1157)) ;
  GALGAS_registerExpression var_TBLPTRH_39572 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1167))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1167))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1167)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)) ;
  GALGAS_bitSliceTable joker_39877 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_39572.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription_39132, joker_39877, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1170)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1182)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1182)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1179)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1185)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1179)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1189)), var_outIPICregisterDescription_39132  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1192)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)) ;
  GALGAS_registerExpression var_TBLPTRL_40309 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1198))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)) ;
  GALGAS_bitSliceTable joker_40615 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_40309.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription_39132, joker_40615, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1200)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription_39132  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATAPTR_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_JUMP analyze'                             *
//                                                                                                                     *
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
  GALGAS_bool var_isNoReturn_41801 ;
  GALGAS_uint var_requiredBank_41825 ;
  GALGAS_uint joker_41827 ; // Joker input parameter
  GALGAS_bool joker_41830 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_41801, var_requiredBank_41825, joker_41827, joker_41830, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1245)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_41825.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_41825.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_41930 = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)).add_operation (var_requiredBank_41825.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)) ;
    var_errorMessage_41930.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1249)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_41930.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_41930.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, var_errorMessage_41930  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1254)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_41801.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1256)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1257)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1261)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1265)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1260))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1260)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1268)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1270)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMP_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_computed_rcall analyze'                        *
//                                                                                                                     *
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
  GALGAS_bool var_allPreserveBank_43529 = GALGAS_bool (true) ;
  GALGAS_bool var_someReturnsBank_43560 = GALGAS_bool (false) ;
  GALGAS_uint var_returnedBankSelection_43598 = ioArgument_ioCurrentBank ;
  cEnumerator_lstringlist enumerator_43641 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_43641.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_43702 ;
    GALGAS_uint var_requiredBank_43726 ;
    GALGAS_uint var_returnedBank_43750 ;
    GALGAS_bool var_preservesBank_43775 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_43641.current_mValue (HERE), var_isNoReturn_43702, var_requiredBank_43726, var_returnedBank_43750, var_preservesBank_43775, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1296)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_43726.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_43726.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_43878 = GALGAS_string ("the routine '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)).add_operation (var_requiredBank_43726.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)) ;
      var_errorMessage_43878.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_43878.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_43878.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)) ;
      }
      GALGAS_location location_2 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_errorMessage_43878  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1305)) ;
    }
    const enumGalgasBool test_3 = var_isNoReturn_43702.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
    }
    const enumGalgasBool test_5 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_43775.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)).operator_and (var_preservesBank_43775.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = var_someReturnsBank_43560.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_returnedBankSelection_43598 = var_returnedBank_43750 ;
          var_someReturnsBank_43560 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection_43598.objectCompare (var_returnedBank_43750)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string var_errorMessage_44788 = GALGAS_string ("the '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedBank_43750.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_errorMessage_44788.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319)) ;
            }else if (kBoolFalse == test_10) {
              var_errorMessage_44788.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank_43750.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
            }
            var_errorMessage_44788.plusAssign_operation(GALGAS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1323)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_returnedBankSelection_43598.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1324)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              var_errorMessage_44788.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1325)) ;
            }else if (kBoolFalse == test_11) {
              var_errorMessage_44788.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_43598.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)) ;
            }
            GALGAS_location location_12 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, var_errorMessage_44788  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1329)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_13 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)).operator_and (var_preservesBank_43775 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)).boolEnum () ;
        if (kBoolTrue == test_13) {
        }
      }
    }
    enumerator_43641.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_43598 ;
  GALGAS_sint_36__34_ var_size_45529 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_45529, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size_45529.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_45529.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_size_45529.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_15) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_45529.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)) ;
    }else if (kBoolFalse == test_15) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_size_45529.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)).objectCompare (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (var_size_45529.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)) ;
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList_46065 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1346)) ;
  cEnumerator_lstringlist enumerator_46138 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_46138.hasCurrentObject ()) {
    var_targetInstructionList_46065.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_46138.current_mValue (HERE).mAttribute_location, enumerator_46138.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)) ;
    enumerator_46138.gotoNextObject () ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, var_targetInstructionList_46065, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1351)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1357)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1351)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_computed_goto analyze'                        *
//                                                                                                                     *
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
  cEnumerator_lstringlist enumerator_47186 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_47186.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_47247 ;
    GALGAS_uint var_requiredBank_47271 ;
    GALGAS_uint joker_47273 ; // Joker input parameter
    GALGAS_bool joker_47276 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_47186.current_mValue (HERE), var_isNoReturn_47247, var_requiredBank_47271, joker_47273, joker_47276, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1381)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_47271.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1382)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_47271.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1382)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_47380 = GALGAS_string ("the routine '").add_operation (enumerator_47186.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)).add_operation (var_requiredBank_47271.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)) ;
      var_errorMessage_47380.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1384)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1385)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_47380.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1386)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_47380.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)) ;
      }
      GALGAS_location location_2 (enumerator_47186.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_errorMessage_47380  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1390)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_47247.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_47186.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_47186.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1393)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1393))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1393)) ;
    }
    enumerator_47186.gotoNextObject () ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed goto instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_48242 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_48242, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictInf, var_size_48242.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_48242.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_size_48242.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_48242.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_size_48242.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1408)).objectCompare (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1408)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).add_operation (var_size_48242.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1420)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1425)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_computed_bra analyze'                         *
//                                                                                                                     *
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
  GALGAS_bool var_allPreserveBankSetting_49868 = GALGAS_bool (true) ;
  GALGAS_bool var_allReturnBank_49897 = GALGAS_bool (true) ;
  GALGAS_uint var_returnedBankValue_49928 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)) ;
  cEnumerator_lstringlist enumerator_49968 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_49968.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_50029 ;
    GALGAS_uint var_requiredBank_50053 ;
    GALGAS_uint var_returnedBank_50077 ;
    GALGAS_bool var_preservesBank_50102 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_49968.current_mValue (HERE), var_isNoReturn_50029, var_requiredBank_50053, var_returnedBank_50077, var_preservesBank_50102, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_50053.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_50053.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_50234 = GALGAS_string ("the routine '").add_operation (enumerator_49968.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)).add_operation (var_requiredBank_50053.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)) ;
      var_errorMessage_50234.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_50234.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_50234.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)) ;
      }
      GALGAS_location location_2 (enumerator_49968.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_errorMessage_50234  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)) ;
    }
    const enumGalgasBool test_3 = var_preservesBank_50102.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_allReturnBank_49897 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_returnedBankValue_49928.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue_49928.objectCompare (var_returnedBank_50077)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (enumerator_49968.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_50077.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)).add_operation (var_returnedBankValue_49928.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)) ;
      }else if (kBoolFalse == test_4) {
        var_allPreserveBankSetting_49868 = GALGAS_bool (false) ;
        var_returnedBankValue_49928 = var_returnedBank_50077 ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_50029.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_49968.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_49968.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)) ;
    }
    enumerator_49968.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = var_allReturnBank_49897.operator_and (var_allPreserveBankSetting_49868.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1478)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1478)).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioCurrentBank = var_returnedBankValue_49928 ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_9 = var_allReturnBank_49897.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)).operator_and (var_allPreserveBankSetting_49868.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)) ;
    }
  }
  const enumGalgasBool test_10 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_49868.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).boolEnum () ;
  if (kBoolTrue == test_10) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invoked routine(s) do(es) not preserve bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484)) ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed bra instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_52022 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_52022, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)) ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_size_52022.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_11) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_52022.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_size_52022.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_12) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_52022.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)) ;
    }else if (kBoolFalse == test_12) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, var_size_52022.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1499)).objectCompare (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1499)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).add_operation (var_size_52022.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1504)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1507)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1511)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1514)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1516)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_computed_retlw analyze'                        *
//                                                                                                                     *
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_54020 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_54020, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_size_54020.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_54020.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_size_54020.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_54020.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_size_54020.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1550)).objectCompare (object->mAttribute_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1550)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the constant list length (").add_operation (object->mAttribute_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).add_operation (var_size_54020.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)) ;
      }
    }
  }
  GALGAS_uintlist var_literalValues_54569 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1554)) ;
  cEnumerator_immediatExpressionList enumerator_54630 (object->mAttribute_mImmediateExpressionList, kEnumeration_up) ;
  GALGAS_uint index_54598 ((uint32_t) 0) ;
  while (enumerator_54630.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v_54707 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_54630.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_54707, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1556)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_v_54707.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v_54707.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value with idx ").add_operation (index_54598.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (var_v_54707.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)) ;
    }
    var_literalValues_54569.addAssign_operation (var_v_54707.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)) ;
    enumerator_54630.gotoNextObject () ;
    index_54598.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_literalValues_54569, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1567)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1571)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1563))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1563)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1574)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1576)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_JUMPCC analyze'                            *
//                                                                                                                     *
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
  GALGAS_bool var_isNoReturn_56132 ;
  GALGAS_uint var_requiredBank_56156 ;
  GALGAS_uint joker_56158 ; // Joker input parameter
  GALGAS_bool joker_56161 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_56132, var_requiredBank_56156, joker_56158, joker_56161, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1597)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_56156.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1598)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_56156.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1598)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_56261 = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)).add_operation (var_requiredBank_56156.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)) ;
    var_errorMessage_56261.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1600)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1601)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_56261.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1602)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_56261.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, var_errorMessage_56261  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_56132.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)) ;
  }
  GALGAS_conditionalBranchMode var_mode_56768 ;
  const enumGalgasBool test_5 = object->mAttribute_mIsBcc.boolEnum () ;
  if (kBoolTrue == test_5) {
    var_mode_56768 = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1614)) ;
  }else if (kBoolFalse == test_5) {
    var_mode_56768 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1616)) ;
  }
  GALGAS_lstring var_label_30__56931 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1623)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, object->mAttribute_mTargetLabel, var_mode_56768, var_label_30__56931, var_mode_56768  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1622))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1622)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) ;
  ioArgument_ioBlockLabel = var_label_30__56931 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_IF_BitTest analyze'                          *
//                                                                                                                     *
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_58402 ;
  GALGAS_bitSliceTable var_bitSliceTable_58440 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_58402, var_bitSliceTable_58440, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1660)) ;
  GALGAS_uint var_bitNumber_58599 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_58440, var_bitNumber_58599, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1669)) ;
  GALGAS_uint var_currentBank_58657 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_58947 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_58657, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_58947, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1678)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank_58657.objectCompare (var_currentBank_58657)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1691)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1691)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction_58947, object->mAttribute_mSkipIfSet, var_IPICregisterDescription_58402, var_bitNumber_58599  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'                       *
//                                                                                                                     *
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
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_60116 ;
  switch (object->mAttribute_mOpCode.enumValue ()) {
  case GALGAS_if_5F_semi_5F_colon_5F_op::kNotBuilt:
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSEQ:
    {
      var_baseCode_60116 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1725)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode_60116 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1726)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode_60116 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1727)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode_60116 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1728)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_60685 ;
  GALGAS_bitSliceTable joker_60691 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_60685, joker_60691, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1730)) ;
  GALGAS_uint var_currentBank_60772 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_61062 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_60772, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_61062, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1741)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank_60772.objectCompare (var_currentBank_60772)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction_61062, var_baseCode_60116, var_IPICregisterDescription_60685  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1763)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_IF_IncDec analyze'                          *
//                                                                                                                     *
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
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_62202 ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1787)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode_62202 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1788)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1789)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1789)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_baseCode_62202 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1790)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_mIncrement.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1791)).operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1791)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_baseCode_62202 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1792)) ;
      }else if (kBoolFalse == test_2) {
        var_baseCode_62202 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1794)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_62771 ;
  GALGAS_bitSliceTable joker_62777 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_62771, joker_62777, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1797)) ;
  GALGAS_uint var_currentBank_62858 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_63148 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_62858, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_63148, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1808)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_currentBank_62858.objectCompare (var_currentBank_62858)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1821)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1821)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction_63148, var_baseCode_62202, var_IPICregisterDescription_62771, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1824)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1831)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1824)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_structured_if analyze'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_elseBranchFinalBank_64264 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_64308 = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_conditionTrueLabel_64361 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1857)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1857)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1857)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1858)) ;
  GALGAS_lstring var_conditionFalseLabel_64486 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1859)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1859)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1859)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1860)) ;
  GALGAS_lstring var_exitLabel_64601 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1861)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1861)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1861)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1862)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_65022 ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_64361, var_conditionFalseLabel_64486, ioArgument_ioUsedRegisters, var_testTerminator_65022, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1864)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1878)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_65022, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1882)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1877))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1877)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1885)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_64361 ;
  {
  routine_analyzeInstructionList (object->mAttribute_mThenInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_64308, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1888)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_65808 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = var_thenContinuesInSequence_65808.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1909)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel_64601, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1913)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_64486 ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_64264, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1920)) ;
  }
  GALGAS_bool var_elseContinuesInSequence_66709 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_1 = var_elseContinuesInSequence_66709.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel_64601, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1940))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1940)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1949)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_64264.objectCompare (var_thenBranchFinalBank_64308)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank_64264 ;
  }else if (kBoolFalse == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1954)) ;
    var_elseBranchFinalBank_64264 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1955)) ;
  }
  const enumGalgasBool test_3 = var_thenContinuesInSequence_65808.operator_or (var_elseContinuesInSequence_66709 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1958)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = var_exitLabel_64601 ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_macro analyze'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_lstringlist var_constantNameList_68232 ;
  GALGAS_pic_31__38_InstructionList var_instructionList_68253 ;
  constinArgument_inMacroMap.method_searchKey (object->mAttribute_mMacroName, var_constantNameList_68232, var_instructionList_68253, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1984)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1985)).objectCompare (var_constantNameList_68232.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1985)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, var_constantNameList_68232.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)) ;
  }
  GALGAS_constantMap var_constantMap_68449 = constinArgument_inConstantMap ;
  cEnumerator_immediatExpressionList enumerator_68493 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  cEnumerator_lstringlist enumerator_68529 (var_constantNameList_68232, kEnumeration_up) ;
  while (enumerator_68493.hasCurrentObject () && enumerator_68529.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue_68613 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_68493.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_68449, var_expressionValue_68613, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1991)) ;
    {
    var_constantMap_68449.setter_insertKey (enumerator_68529.current_mValue (HERE), var_expressionValue_68613, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1992)) ;
    }
    enumerator_68493.gotoNextObject () ;
    enumerator_68529.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList (var_instructionList_68253, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_68449, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1995)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_macro_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_macro_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_macro_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_sint_36__34_ var_result_70512 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mCaseExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_70512, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2052)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_70512.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_70512.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2054)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("case value is evaluated as ").add_operation (var_result_70512.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_70512.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2058)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2058)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (var_result_70512.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059)) ;
    inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_70512.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)), GALGAS_string ("the '").add_operation (var_result_70512.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)) ;
  }else if (kBoolFalse == test_1) {
    {
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (var_result_70512.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2062)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2062)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2062)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067)), ioArgument_ioLastComparisonValue.substract_operation (var_result_70512, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2065)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2070)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2065)) ;
  ioArgument_ioLastComparisonValue = var_result_70512 ;
  GALGAS_lstring var_conditionFalseLabel_71532 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2076)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_71730 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2080)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2082)), var_conditionFalseLabel_71532, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2084))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2078)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2087)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_71730, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2091)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2086))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2086)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2094)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_71532 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_sint_36__34_ var_minBound_72885 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMinExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_72885, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2111)) ;
  GALGAS_sint_36__34_ var_maxBound_72983 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMaxExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_72983, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2112)) ;
  GALGAS_bool var_ok_73022 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_minBound_72885.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound_72885.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2115)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_72885.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)) ;
    var_ok_73022 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_maxBound_72983.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound_72983.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2119)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_72983.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120)) ;
    var_ok_73022 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, var_maxBound_72983.objectCompare (var_minBound_72885)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound (").add_operation (var_maxBound_72983.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)).add_operation (var_minBound_72885.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)) ;
    var_ok_73022 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_3 = var_ok_73022.boolEnum () ;
  if (kBoolTrue == test_3) {
    cEnumerator_range enumerator_73708 (GALGAS_range::constructor_new (var_minBound_72885.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)), var_maxBound_72983.substract_operation (var_minBound_72885, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)), kEnumeration_up) ;
    while (enumerator_73708.hasCurrentObject ()) {
      const enumGalgasBool test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2130)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2130)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)) ;
        inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)), GALGAS_string ("the '").add_operation (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)) ;
      }else if (kBoolFalse == test_4) {
        {
        ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2134)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2134)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2134)) ;
        }
      }
      enumerator_73708.gotoNextObject () ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)), ioArgument_ioLastComparisonValue.substract_operation (var_minBound_72885, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2143)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)) ;
    GALGAS_lstring var_greaterThanLowBoundLabel_74471 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
    GALGAS_lstring var_conditionFalseLabel_74607 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2149)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_74811 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2153)), var_greaterThanLowBoundLabel_74471, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2155)), var_conditionFalseLabel_74607, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2157))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2151)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2160)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_74811, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2164)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2159))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2159)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2167)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_74607 ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2172)), var_maxBound_72983.substract_operation (var_minBound_72885, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2170)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2175)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2170)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__75809 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2180)), var_conditionFalseLabel_74607, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2182)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2184))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2178)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2187)), var_greaterThanLowBoundLabel_74471, ioArgument_ioGeneratedInstructionList, var_t_32__75809, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2191)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2186))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2186)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2194)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_74607 ;
    ioArgument_ioLastComparisonValue = var_maxBound_72983.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2197)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2197)) ;
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
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_switch analyze'                            *
//                                                                                                                     *
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
  GALGAS_caseConstantMap var_caseConstantMap_77172 = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2219)) ;
  GALGAS_lstring var_exitLabel_77229 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2222)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_77380 = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence_77459 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_77503 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_77542 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2229)) ;
  GALGAS_bool var_finalBankSettingDefined_77599 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_77635 (object->mAttribute_mCaseList, kEnumeration_up) ;
  while (enumerator_77635.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel_77678 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2235)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_77842 (enumerator_77635.current_mCaseExpressionList (HERE), kEnumeration_up) ;
    while (enumerator_77842.hasCurrentObject ()) {
      callExtensionMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_77842.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_77678, ioArgument_ioUsedRegisters, var_caseConstantMap_77172, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_77380, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2238)) ;
      enumerator_77842.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_78240 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_77678 ;
    GALGAS_uint var_branchFinalBank_78319 = var_initialBankSetting_77503 ;
    {
    routine_analyzeInstructionList (enumerator_77635.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_78319, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2255)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_continuesInSequence_77459 = GALGAS_bool (true) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2276)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel_77229, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2280)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275)) ;
    }
    const enumGalgasBool test_1 = var_finalBankSettingDefined_77599.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_77542.objectCompare (var_branchFinalBank_78319)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_branchFinalBank_78319.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = var_branchFinalBank_78319.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_finalBankSetting_77542.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_finalBankSetting_77542.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)) ;
        }
        inCompiler->emitSemanticError (enumerator_77635.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)) ;
      }
    }else if (kBoolFalse == test_1) {
      var_finalBankSettingDefined_77599 = GALGAS_bool (true) ;
      var_finalBankSetting_77542 = var_branchFinalBank_78319 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2296)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_78240 ;
    enumerator_77635.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_79860 = var_initialBankSetting_77503 ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_79860, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2301)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_80308 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_7 = var_thenContinuesInSequence_80308.boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2322)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel_77229, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2325))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2325)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2326)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2321))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2321)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2330)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_77542.objectCompare (var_branchFinalBank_79860)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_branchFinalBank_79860.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2334)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_10) {
      temp_9 = var_branchFinalBank_79860.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2334)) ;
    }
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_finalBankSetting_77542.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2336)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_12) {
      temp_11 = var_finalBankSetting_77542.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2336)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mElseBranchStartLocation, GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2333)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2334)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2335)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2336))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2333)) ;
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_77542 ;
  const enumGalgasBool test_13 = var_continuesInSequence_77459.boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioBlockLabel = var_exitLabel_77229 ;
  }else if (kBoolFalse == test_13) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2344)) ;
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
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_do_while analyze'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_lstring var_startLabel_81959 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2368)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel_81959, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2370))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2370)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2378)) ;
  ioArgument_ioBlockLabel = var_startLabel_81959 ;
  GALGAS_uint var_repeatedBranchFinalBank_82506 = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_82506, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2382)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence_82977 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_82506)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2402)) ;
  }
  const enumGalgasBool test_1 = var_repeatedInstructionsContinuesInSequence_82977.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2404)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2405)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_83356 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_83356.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel_83400 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2410)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2410)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2410)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2411)) ;
    GALGAS_lstring var_conditionFalseLabel_83528 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2412)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2412)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2412)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2413)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_83972 ;
    callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) enumerator_83356.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_83400, var_conditionFalseLabel_83528, ioArgument_ioUsedRegisters, var_testTerminator_83972, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2415)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2428)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_83972, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2432)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2427))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2427)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2435)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_83400 ;
    GALGAS_uint var_branchFinalBank_84308 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList (enumerator_83356.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_84308, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2438)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_84308)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_83356.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2457)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (enumerator_83356.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2460)) ;
    }
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2463)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel_81959, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2466))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2466)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2467)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2470)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_83528 ;
    enumerator_83356.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  const enumGalgasBool test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2520)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_otherInitialBlockSetting_87231 ;
    GALGAS_string var_otherBlockName_87259 ;
    ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2521)), var_otherInitialBlockSetting_87231, var_otherBlockName_87259, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2521)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_87231.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2524)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2524)) ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_87231.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = var_otherInitialBlockSetting_87231.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526)) ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2523)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2524)).add_operation (var_otherBlockName_87259, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2523)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@gotoTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  const enumGalgasBool test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (object->mAttribute_mNextBlock.mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2544)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2544)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioVisitedBlockSet.addAssign_operation (object->mAttribute_mNextBlock.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2545)) ;
    ioArgument_ioContinueAccessibilityExploration = GALGAS_bool (true) ;
    GALGAS_pic_31__38_InstructionList joker_88502 ; // Joker input parameter
    GALGAS_abstractBlockTerminationForBlockInstruction joker_88505 ; // Joker input parameter
    GALGAS_location joker_88508 ; // Joker input parameter
    constinArgument_inBlockMap.method_searchKey (object->mAttribute_mNextBlock, joker_88502, joker_88505, joker_88508, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2547)) ;
    const enumGalgasBool test_1 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (object->mAttribute_mNextBlock.mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2548)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_otherInitialBlockSetting_88677 ;
      GALGAS_string var_otherBlockName_88705 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (object->mAttribute_mNextBlock, var_otherInitialBlockSetting_88677, var_otherBlockName_88705, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2549)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_88677.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2552)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2552)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_88677.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2554)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_otherInitialBlockSetting_88677.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2554)) ;
        }
        GALGAS_location location_7 (object->mAttribute_mNextBlock.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this block goes to '").add_operation (object->mAttribute_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2552)).add_operation (var_otherBlockName_88705, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2553)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2553)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2553)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2554))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (object->mAttribute_mNextBlock, constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@testTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2573)) ;
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_testTerminationForBlockInstruction_addVisitedBlocks) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@gotoTerminationForBlockInstruction generateBlock'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mNextBlock.mAttribute_location, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (object->mAttribute_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2620)), object->mAttribute_mNextBlock.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2620)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2621))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2618)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_gotoTerminationForBlockInstruction_generateBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_generateBlock (defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@exitBlockTerminationForBlockInstruction generateBlock'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mLocation, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2640))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2637)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_exitBlockTerminationForBlockInstruction_generateBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_generateBlock (defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@testTerminationForBlockInstruction generateBlock'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_lstring var_conditionTrueLabel_92533 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2656)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2656)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2656)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2657)) ;
  GALGAS_lstring var_conditionFalseLabel_92647 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2658)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2658)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2658)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2659)) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_92533, var_conditionFalseLabel_92647, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2661)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_93331 ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_93331, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2674)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2686)), var_conditionTrueLabel_92533, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2688)), var_trueTerminator_93331, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2690)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2685))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2685)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_93842 ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_93842, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2694)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)), var_conditionFalseLabel_92647, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2708)), var_falseTerminator_93842, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2710)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2705))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2705)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_testTerminationForBlockInstruction_generateBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_generateBlock (defineExtensionMethod_testTerminationForBlockInstruction_generateBlock, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_block analyze'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_labelForBlock_94739 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2736)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2739)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mStartBlockName.mAttribute_location, GALGAS_lstring::constructor_new (var_labelForBlock_94739.add_operation (object->mAttribute_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2744)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2744)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2744)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2745))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2742)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2746)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2738))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2738)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2749)) ;
  GALGAS_blockInstructionBlockMap var_blockMap_95302 = GALGAS_blockInstructionBlockMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_95364 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_95364.hasCurrentObject ()) {
    {
    var_blockMap_95302.setter_insertKey (enumerator_95364.current_mBlockName (HERE), enumerator_95364.current_mInstructionList (HERE), enumerator_95364.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_95364.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2753)) ;
    }
    enumerator_95364.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InstructionList joker_95557 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_95560 ; // Joker input parameter
  GALGAS_location joker_95563 ; // Joker input parameter
  var_blockMap_95302.method_searchKey (object->mAttribute_mStartBlockName, joker_95557, joker_95560, joker_95563, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2756)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_95600 = GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2757)) ;
  {
  var_blockInitialBankSelectionMap_95600.setter_insertKey (object->mAttribute_mStartBlockName, ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2758)) ;
  }
  GALGAS_stringset var_accessibleBlockSet_95780 = GALGAS_stringset::constructor_setWithString (object->mAttribute_mStartBlockName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2760)) ;
  GALGAS_stringset var_handledBlockSet_95854 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2761)) ;
  GALGAS_bool var_continueAccessibilityExploration_95918 = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence_95953 = GALGAS_bool (false) ;
  if (object->mAttribute_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).isValid ()) {
    uint32_t variant_95968 = object->mAttribute_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).uintValue () ;
    bool loop_95968 = true ;
    while (loop_95968) {
      loop_95968 = var_continueAccessibilityExploration_95918.isValid () ;
      if (loop_95968) {
        loop_95968 = var_continueAccessibilityExploration_95918.boolValue () ;
      }
      if (loop_95968 && (0 == variant_95968)) {
        loop_95968 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)) ;
      }
      if (loop_95968) {
        variant_95968 -- ;
        var_continueAccessibilityExploration_95918 = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_96146 (var_accessibleBlockSet_95780.substract_operation (var_handledBlockSet_95854, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2766)), kEnumeration_up) ;
        while (enumerator_96146.hasCurrentObject ()) {
          var_handledBlockSet_95854.addAssign_operation (enumerator_96146.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2767)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList_96305 ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination_96380 ;
          GALGAS_location var_endOfBlock_96414 ;
          var_blockMap_95302.method_searchKey (enumerator_96146.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2769)), var_instructionList_96305, var_blockTermination_96380, var_endOfBlock_96414, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2768)) ;
          GALGAS_uint var_currentBank_96542 ;
          GALGAS_string joker_96544 ; // Joker input parameter
          var_blockInitialBankSelectionMap_95600.method_searchKey (enumerator_96146.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2775)), var_currentBank_96542, joker_96544, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2775)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_94739.add_operation (enumerator_96146.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776)), var_blockMap_95302.getter_locationForKey (enumerator_96146.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776)) ;
          {
          routine_analyzeInstructionList (var_instructionList_96305, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_96542, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2777)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator_97420 ;
          callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_96380.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_96542, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_94739, var_terminator_97420, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2795)) ;
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            inCompiler->emitSemanticError (var_endOfBlock_96414, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2807)) ;
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2810)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_97420, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2814)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2809))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2809)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2817)) ;
          callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_96380.ptr (), var_accessibleBlockSet_95780, var_blockMap_95302, enumerator_96146.current (HERE), var_currentBank_96542, var_blockInitialBankSelectionMap_95600, var_continuesInSequence_95953, var_continueAccessibilityExploration_95918, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2819)) ;
          enumerator_96146.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_98128 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_98128.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_accessibleBlockSet_95780.getter_hasKey (enumerator_98128.current_mBlockName (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2824)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2824)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_98128.current_mBlockName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_2, GALGAS_string ("this block is not accessible from '").add_operation (object->mAttribute_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)) ;
    }
    enumerator_98128.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = var_continuesInSequence_95953.boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_94739.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830)) ;
    GALGAS_string joker_98499 ; // Joker input parameter
    var_blockInitialBankSelectionMap_95600.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2831)), ioArgument_ioCurrentBank, joker_98499, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2831)) ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2833)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_block_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_block_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@pic18BccInStructuredCondition analyzeCondition'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mConditionLocation, object->mAttribute_mCondition, constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2873)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2875))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2869)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@pic18RegisterComparisonCondition analyzeCondition'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_100680 ;
  GALGAS_bitSliceTable joker_100686 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_100680, joker_100686, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2891)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison_100779 ;
  GALGAS_bool var_complementaryBranch_100807 ;
  switch (object->mAttribute_mComparison.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison_100779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2905)) ;
      var_complementaryBranch_100807 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison_100779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2908)) ;
      var_complementaryBranch_100807 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison_100779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2911)) ;
      var_complementaryBranch_100807 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison_100779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2914)) ;
      var_complementaryBranch_100807 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison_100779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2917)) ;
      var_complementaryBranch_100807 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison_100779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2920)) ;
      var_complementaryBranch_100807 = GALGAS_bool (true) ;
    }
    break ;
  }
  GALGAS_location var_location_101601 = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2924)).mAttribute_location ;
  const enumGalgasBool test_0 = var_complementaryBranch_100807.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_101601, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_101601, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2928))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2928)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_101601, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2929))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2929)), var_IPICregisterDescription_100680, var_ipicComparison_100779  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2926)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_101601, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_101601, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2935))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2935)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_101601, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2936))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2936)), var_IPICregisterDescription_100680, var_ipicComparison_100779  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition.mSlotID,
                                         extensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (defineExtensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@pic18IncDecRegisterInCondition analyzeCondition'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_103123 ;
  GALGAS_bitSliceTable joker_103129 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_103123, joker_103129, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2955)) ;
  GALGAS_location var_location_103219 = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2965)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_103219, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_103219, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2969))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2969)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_103219, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2970))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2970)), var_IPICregisterDescription_103123, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2967)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_103219, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_103219, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2977))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2977)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_103219, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2978))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2978)), var_IPICregisterDescription_103123, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2975)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition.mSlotID,
                                         extensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (defineExtensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@pic18RegisterTestCondition analyzeCondition'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_104767 ;
  GALGAS_bitSliceTable joker_104773 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_104767, joker_104773, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2998)) ;
  GALGAS_location var_location_104863 = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3008)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_104863, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_104863, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3012))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3012)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_104863, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3013))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3013)), var_IPICregisterDescription_104767  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3010)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_104863, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_104863, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3018))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3018)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_104863, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3019))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3019)), var_IPICregisterDescription_104767  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3016)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition.mSlotID,
                                         extensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterTestCondition_analyzeCondition (defineExtensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@pic18BitTestInStructuredCondition analyzeCondition'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_106326 ;
  GALGAS_bitSliceTable var_bitSliceTable_106364 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_106326, var_bitSliceTable_106364, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)) ;
  GALGAS_uint var_bitNumber_106523 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_106364, var_bitNumber_106523, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)) ;
  GALGAS_location var_location_106590 = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)).mAttribute_location ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (var_location_106590, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_106590, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3057))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3057)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_106590, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)), var_IPICregisterDescription_106326, var_bitNumber_106523  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3055)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@pic18NegateCondition analyzeCondition'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3077)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_NegateCondition.mSlotID,
                                         extensionMethod_pic_31__38_NegateCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_NegateCondition_analyzeCondition (defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@pic18AndCondition analyzeCondition'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_lstring var_conditionTrueLabel_108320 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105)), constinArgument_inConditionTrueLabel.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3106)) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_108320, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3108)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_109071 ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_109071, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3135)), var_conditionTrueLabel_108320, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3137)), var_secondTestBlockTerminator_109071, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3139)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3134))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3134)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_AndCondition.mSlotID,
                                         extensionMethod_pic_31__38_AndCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_AndCondition_analyzeCondition (defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@ipic18JumpTerminator optimizeTerminator'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mLabel.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_uint var_targetBlockIndex_2048 ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetBlockIndex_2048, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
    GALGAS_ipic_31__38_Block var_targetBlock_2082 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2048, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock_2082.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_2082.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2082.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_optimize_2354 ;
      const enumGalgasBool test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.mAttribute_mTerminator.ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_ipic_31__38_JumpTerminator temp_4 ;
        if (var_targetBlock_2082.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.mAttribute_mTerminator.ptr ())) {
            temp_4 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2082.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2082.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_candidate_2466 = temp_4 ;
        var_optimize_2354 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (var_candidate_2466.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 61)).mAttribute_string)) ;
      }else if (kBoolFalse == test_3) {
        var_optimize_2354 = GALGAS_bool (true) ;
      }
      const enumGalgasBool test_5 = var_optimize_2354.boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outOptimizedTerminator = var_targetBlock_2082.mAttribute_mTerminator ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@ipic18ConditionalJumpTerminator optimizeTerminator'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabelWhenFalse, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 93))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 90)) ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (object->mAttribute_mTargetLabelWhenFalse.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 96)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_optimized_3987 = GALGAS_bool (false) ;
    GALGAS_lstring var_targetLabelWhenTrue_4055 = object->mAttribute_mTargetLabelWhenTrue ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_targetBlockIndex_4215 ;
      constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_targetBlockIndex_4215, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 102)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_4251 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_4215, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 103)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock_4251.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 104)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_4251.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 105)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 104)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4251.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_ipic_31__38_JumpTerminator temp_3 ;
        if (var_targetBlock_4251.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4251.mAttribute_mTerminator.ptr ())) {
            temp_3 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_4251.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_4251.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 107)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp_4532 = temp_3 ;
        var_targetLabelWhenTrue_4055 = var_jp_4532.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 108)) ;
        var_optimized_3987 = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mTargetLabelWhenTrue.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 111)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenTrue_4055.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
      }
    }
    GALGAS_lstring var_targetLabelWhenFalse_5000 = object->mAttribute_mTargetLabelWhenFalse ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint var_targetBlockIndex_5163 ;
      constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_targetBlockIndex_5163, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 120)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_5199 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_5163, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 121)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_targetBlock_5199.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 122)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_5199.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 122)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5199.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38_JumpTerminator temp_6 ;
        if (var_targetBlock_5199.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5199.mAttribute_mTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_5199.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_5199.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 125)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp_5480 = temp_6 ;
        var_targetLabelWhenFalse_5000 = var_jp_5480.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 126)) ;
        var_optimized_3987 = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mTargetLabelWhenFalse.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 129)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 130)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenFalse_5000.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
      }
    }
    const enumGalgasBool test_7 = var_optimized_3987.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, var_targetLabelWhenTrue_4055, object->mAttribute_mBranchModeOnTrueLabel, var_targetLabelWhenFalse_5000, object->mAttribute_mBranchModeOnFalseLabel  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 138)) ;
    }else if (kBoolFalse == test_7) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@ipic18IncDecRegisterTerminator optimizeTerminator'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bool var_optimization_8997 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_9234 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_9303 ;
  GALGAS_bool var_identicalTerminators_9339 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_8997, ioArgument_ioListFileContents, var_optimizedTrueTerminator_9234, var_optimizedFalseTerminator_9303, var_identicalTerminators_9339, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 213)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_9339.boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
    outArgument_outOptimizedTerminator = temp_2 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("useless decf/incf condition should be replaced by decf/incf instruction")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 226)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization_8997.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator_9234, var_optimizedFalseTerminator_9303, object->mAttribute_mRegisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 228)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@pic18BitTestTerminator optimizeTerminator'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bool var_optimization_10298 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_10535 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_10604 ;
  GALGAS_bool var_identicalTerminators_10640 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_10298, ioArgument_ioListFileContents, var_optimizedTrueTerminator_10535, var_optimizedFalseTerminator_10604, var_identicalTerminators_10640, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 253)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_10640.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_10535 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_10535.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 268)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization_10298.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator_10535, var_optimizedFalseTerminator_10604, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_2) {
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
      outArgument_outOptimizedTerminator = temp_3 ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                           extensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@pic18RegisterComparisonTerminator optimizeTerminator'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bool var_optimization_11738 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_11970 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_12039 ;
  GALGAS_bool var_identicalTerminators_12075 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_11738, ioArgument_ioListFileContents, var_optimizedTrueTerminator_11970, var_optimizedFalseTerminator_12039, var_identicalTerminators_12075, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 293)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_12075.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_11970 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_11970.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 308)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization_11738.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator_11970, var_optimizedFalseTerminator_12039, object->mAttribute_mRegisterDescription, object->mAttribute_mComparison  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_2) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = object ;
      outArgument_outOptimizedTerminator = temp_3 ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                           extensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@pic18TestRegisterTerminator optimizeTerminator'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bool var_optimization_13179 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_13411 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_13480 ;
  GALGAS_bool var_identicalTerminators_13516 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_13179, ioArgument_ioListFileContents, var_optimizedTrueTerminator_13411, var_optimizedFalseTerminator_13480, var_identicalTerminators_13516, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 333)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_13516.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_13411 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_13411.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 348)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization_13179.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator_13411, var_optimizedFalseTerminator_13480, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_2) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = object ;
      outArgument_outOptimizedTerminator = temp_3 ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                           extensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@ipic18RetfieTerminator optimizeTerminator'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@ipic18RetlwTerminator optimizeTerminator'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@ipic18ReturnTerminator optimizeTerminator'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@ipic18ComputedRETLWTerminator optimizeTerminator'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                 const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 466)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 479)) ;
  }
  cEnumerator_lstringlist enumerator_18547 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_18547.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_18547.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 485)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 485)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_18547.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 486)) ;
      GALGAS_uint var_blockIndex_18717 ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_18547.current_mValue (HERE), var_blockIndex_18717, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 487)) ;
      GALGAS_ipic_31__38_Block var_b_18743 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_18717, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 488)) ;
      extensionMethod_enterReferencedLabels (var_b_18743, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 489)) ;
    }
    enumerator_18547.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 504)) ;
  }
  cEnumerator_lstringlist enumerator_19317 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_19317.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19317.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 510)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 510)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_19317.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 511)) ;
      GALGAS_uint var_blockIndex_19487 ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_19317.current_mValue (HERE), var_blockIndex_19487, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 512)) ;
      GALGAS_ipic_31__38_Block var_b_19513 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19487, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 513)) ;
      extensionMethod_enterReferencedLabels (var_b_19513, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 514)) ;
    }
    enumerator_19317.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18JumpTerminator enterTerminatorReferencedLabels'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 529)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 529)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 530)) ;
    GALGAS_uint var_blockIndex_20126 ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_blockIndex_20126, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 531)) ;
    GALGAS_ipic_31__38_Block var_b_20150 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20126, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 532)) ;
    extensionMethod_enterReferencedLabels (var_b_20150, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 533)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                   const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                   GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 547)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 547)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 548)) ;
    GALGAS_uint var_blockIndex_20798 ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_blockIndex_20798, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 549)) ;
    GALGAS_ipic_31__38_Block var_b_20822 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20798, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 550)) ;
    extensionMethod_enterReferencedLabels (var_b_20822, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 551)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 557)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 557)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 558)) ;
    GALGAS_uint var_blockIndex_21180 ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_blockIndex_21180, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 559)) ;
    GALGAS_ipic_31__38_Block var_b_21204 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21180, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 560)) ;
    extensionMethod_enterReferencedLabels (var_b_21204, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 561)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                                     const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                     const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                     GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callExtensionMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 583)) ;
  callExtensionMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 584)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@ipic18_intermediate_JSR enterInstructionReferencedLabels'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 605)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 605)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 606)) ;
    GALGAS_uint var_blockIndex_23121 ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_blockIndex_23121, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 607)) ;
    GALGAS_ipic_31__38_Block var_b_23145 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_23121, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 608)) ;
    extensionMethod_enterReferencedLabels (var_b_23145, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 609)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//   Overriding extension method '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 623)) ;
  }
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_23726 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_23726.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_23726.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 629)) ;
    enumerator_23726.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callExtensionMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 643)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@ipic18_intermediate_JSR optimizeInstruction'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_targetBlockIndex_25597 ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetBlockIndex_25597, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 686)) ;
  GALGAS_ipic_31__38_Block var_targetBloc_25629 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_25597, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 687)) ;
  const enumGalgasBool test_1 = constinArgument_inOptimizeFlagStruct.mAttribute_mRemoveEmptyRoutine.operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 690)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 689)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 691)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 690)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_25629.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to empty ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).add_operation (GALGAS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)) ;
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 697))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)) ;
    outArgument_outNOPsubstitution = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoRETLWreplacedByMOVLW.operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 701)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 702)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 701)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_25629.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 702)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_ipic_31__38_RetlwTerminator temp_3 ;
      if (var_targetBloc_25629.mAttribute_mTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_25629.mAttribute_mTerminator.ptr ())) {
          temp_3 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc_25629.mAttribute_mTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc_25629.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 704)) ;
        }
      }
      GALGAS_ipic_31__38_RetlwTerminator var_t_26683 = temp_3 ;
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to RETLW ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)).add_operation (GALGAS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)) ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 711)), var_t_26683.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 712))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction.operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 715)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 714)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 716)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 715)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_25629.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 716)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outOptimizedInstruction = var_targetBloc_25629.mAttribute_mInstructionList.getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 718)) ;
        outArgument_outOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to single instruction routine ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)).add_operation (GALGAS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                            extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_28444 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 741)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_28482 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_28482.hasCurrentObject ()) {
    GALGAS_bool var_opt_28499 = GALGAS_bool (false) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28482.current_mInstruction (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 ;
      if (enumerator_28482.current_mInstruction (HERE).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28482.current_mInstruction (HERE).ptr ())) {
          temp_1 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_28482.current_mInstruction (HERE).ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_28482.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 745)) ;
        }
      }
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_28604 = temp_1 ;
      GALGAS_uint var_targetBlockIndex_28729 ;
      constinArgument_inSymbolTable.method_searchKey (var_jsr_28604.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 746)), var_targetBlockIndex_28729, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 746)) ;
      GALGAS_ipic_31__38_Block var_targetBloc_28765 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_28729, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 747)) ;
      const enumGalgasBool test_2 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_28765.mAttribute_mTerminator.ptr ())).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28765.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 749)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 748)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28765.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 751)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 750)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_opt_28499 = GALGAS_bool (true) ;
          outArgument_outOptimizationDone = GALGAS_bool (true) ;
          var_optimizedInstructionList_28444.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_new (var_jsr_28604.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 754)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_28604.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).add_operation (GALGAS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28765.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 759)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 758)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_ipic_31__38_SequentialInstruction var_inst_29762 = var_targetBloc_28765.mAttribute_mInstructionList.getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)) ;
            const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst_29762.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_opt_28499 = GALGAS_bool (true) ;
              outArgument_outOptimizationDone = GALGAS_bool (true) ;
              var_optimizedInstructionList_28444.addAssign_operation (var_inst_29762, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 764)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 764)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_28604.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).add_operation (GALGAS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)) ;
            }
          }
        }
      }
    }
    const enumGalgasBool test_6 = var_opt_28499.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 772)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_optimizedInstructionList_28444.addAssign_operation (enumerator_28482.current_mInstruction (HERE), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 773)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 773)) ;
    }
    enumerator_28482.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedInstructionList_28444, object->mAttribute_mUsesRCALL  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 777)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = object ;
    outArgument_outOptimizedInstruction = temp_8 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                            extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_31388 ;
  GALGAS_bool joker_31394 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_31388, joker_31394, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 799)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction_31388, object->mAttribute_mSkipIfSet, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 810)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@ipic18_skip_instruction_compare_register optimizeInstruction'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_32429 ;
  GALGAS_bool joker_32435 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_32429, joker_32435, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 834)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction_32429, object->mAttribute_mCompareInstruction, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 845)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@ipic18_skip_instruction_FDA optimizeInstruction'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_33453 ;
  GALGAS_bool joker_33459 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_33453, joker_33459, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 868)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction_33453, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 879)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@ipic18_intermediate_JSR buildInstructionInvocationGraph'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                 GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (void) {
  enterExtensionMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                        extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//    Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildInstructionInvocationGraph'    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                                              GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_1318 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_1318.hasCurrentObject ()) {
    callExtensionMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_1318.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 39)) ;
    enumerator_1318.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (void) {
  enterExtensionMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                        extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18_condition_skip_instruction buildInstructionInvocationGraph'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                              GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callExtensionMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (void) {
  enterExtensionMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                        extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@ipic18ReturnTerminator buildTerminatorInvocationGraph'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                         const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                         GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                         const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18RetlwTerminator buildTerminatorInvocationGraph'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                        const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                        GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                        const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@ipic18RetfieTerminator buildTerminatorInvocationGraph'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                         const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                         GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                         const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedGotoTerminator buildTerminatorInvocationGraph'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                               GALGAS_string & ioArgument_ioGraphVizString,
                                                                                               const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedRETLWTerminator buildTerminatorInvocationGraph'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@ipic18ComputedBraTerminator buildTerminatorInvocationGraph'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                              GALGAS_string & ioArgument_ioGraphVizString,
                                                                                              const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@ipic18AbstractConditionTerminator buildTerminatorInvocationGraph'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                    GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                    const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 125)) ;
  callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorInvocationGraph'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                    GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                    const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 135)) ;
  callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 136)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                       extensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@pic18TestRegisterTerminator buildTerminatorInvocationGraph'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                              GALGAS_string & ioArgument_ioGraphVizString,
                                                                                              const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 145)) ;
  callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 146)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                       extensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18JumpTerminator buildTerminatorInvocationGraph'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                       GALGAS_string & ioArgument_ioGraphVizString,
                                                                                       const GALGAS_bool constinArgument_inDottedArrow,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (object->mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)) ;
  const enumGalgasBool test_0 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 157)) ;
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 159)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorInvocationGraph'            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                  const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                  GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                  const GALGAS_bool constinArgument_inDottedArrow,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (object->mAttribute_mTargetLabelWhenTrue.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)) ;
  const enumGalgasBool test_0 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 170)) ;
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 172)) ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (object->mAttribute_mTargetLabelWhenFalse.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)) ;
  const enumGalgasBool test_1 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 175)) ;
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 177)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (void) {
  enterExtensionMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                       extensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@ipic18ReturnTerminator needToInsertJumpInstruction'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@ipic18RetlwTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                            const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@ipic18RetfieTerminator needToInsertJumpInstruction'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@ipic18JumpTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                   const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension getter '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                    const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension getter '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                      const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@ipic18ComputedBraTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                  const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension getter '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                        const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)).operator_and (callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 262)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                    extensionGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (defineExtensionGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension getter '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                        const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 271)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                    extensionGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@pic18TestRegisterTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                  const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 280)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (void) {
  enterExtensionGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                    extensionGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (defineExtensionGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@ipic18JumpTerminator buildTerminatorOrderedGraph'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                    GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, object->mAttribute_mLabel COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 299)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (void) {
  enterExtensionMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                    extensionMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (defineExtensionMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorOrderedGraph'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                               GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 307)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 308)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (void) {
  enterExtensionMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                    extensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorOrderedGraph'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                 GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 316)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (void) {
  enterExtensionMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                    extensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@pic18TestRegisterTerminator buildTerminatorOrderedGraph'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                           GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 327)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (void) {
  enterExtensionMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                    extensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (defineExtensionMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@ipic18IncDecRegisterTerminator buildTerminatorOrderedGraph'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                              GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 338)) ;
  callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 342)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (void) {
  enterExtensionMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                    extensionMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@pic18BitTestTerminator buildTerminatorOrderedGraph'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                      GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 353)) ;
  callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 357)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (void) {
  enterExtensionMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                    extensionMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (defineExtensionMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//    Overriding extension method '@ipic18AbstractConditionTerminator exploreAccessibleBlocksForStackComputations'     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                 GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                                 GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                                 GALGAS_uint & outArgument_outStackNeeds,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  GALGAS_uint var_trueStackNeeds_1562 ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_trueStackNeeds_1562, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 41)) ;
  GALGAS_uint var_falseStackNeeds_1734 ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_falseStackNeeds_1734, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 46)) ;
  GALGAS_uint temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_trueStackNeeds_1562.objectCompare (var_falseStackNeeds_1734)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = var_trueStackNeeds_1562 ;
  }else if (kBoolFalse == test_1) {
    temp_0 = var_falseStackNeeds_1734 ;
  }
  outArgument_outStackNeeds = temp_0 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//       Overriding extension method '@ipic18ComputedBraTerminator exploreAccessibleBlocksForStackComputations'        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                           GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                           GALGAS_uint & outArgument_outStackNeeds,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  cEnumerator_lstringlist enumerator_2130 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_2130.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2130.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2130.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 63)) ;
    }
    enumerator_2130.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 1U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//       Overriding extension method '@ipic18ComputedGotoTerminator exploreAccessibleBlocksForStackComputations'       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                            GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                            GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                            GALGAS_uint & outArgument_outStackNeeds,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  cEnumerator_lstringlist enumerator_2564 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_2564.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2564.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2564.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 78)) ;
    }
    enumerator_2564.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 1U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@ipic18JumpTerminator exploreAccessibleBlocksForStackComputations'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                    GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                    GALGAS_uint & outArgument_outStackNeeds,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 92)) ;
  }
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//     Overriding extension method '@ipic18ConditionalJumpTerminator exploreAccessibleBlocksForStackComputations'      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                               GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                               GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                               GALGAS_uint & outArgument_outStackNeeds,
                                                                                                               C_Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 105)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 108)) ;
  }
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//      Overriding extension method '@ipic18ComputedRETLWTerminator exploreAccessibleBlocksForStackComputations'       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                             GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                             GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                             GALGAS_uint & outArgument_outStackNeeds,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 1U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18ReturnTerminator exploreAccessibleBlocksForStackComputations'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                      GALGAS_uint & outArgument_outStackNeeds,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18RetlwTerminator exploreAccessibleBlocksForStackComputations'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                     GALGAS_uint & outArgument_outStackNeeds,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18RetfieTerminator exploreAccessibleBlocksForStackComputations'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                      GALGAS_uint & outArgument_outStackNeeds,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations (void) {
  enterExtensionMethod_exploreAccessibleBlocksForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                                    extensionMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations (defineExtensionMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocksForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@ipic18_intermediate_JSR buildCalledRoutineSetForStackComputations'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  ioArgument_ioRoutineCalledSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 168)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations (void) {
  enterExtensionMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                                  extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSetForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildCalledRoutineSetForStackComputations'*
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                        GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_5667 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_5667.hasCurrentObject ()) {
    callExtensionMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_5667.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 176)) ;
    enumerator_5667.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations (void) {
  enterExtensionMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                                  extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSetForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//     Overriding extension method '@ipic18_condition_skip_instruction buildCalledRoutineSetForStackComputations'      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                        GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callExtensionMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 184)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations (void) {
  enterExtensionMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                                  extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSetForStackComputations, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@ipic18ReturnTerminator terminatorMinMaxDuration'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                   const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                   const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                   GALGAS_uint & outArgument_outMin,
                                                                                   GALGAS_uint & outArgument_outMax,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_ReturnTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@ipic18RetlwTerminator terminatorMinMaxDuration'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                  const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                  const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                  GALGAS_uint & outArgument_outMin,
                                                                                  GALGAS_uint & outArgument_outMax,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_RetlwTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@ipic18RetfieTerminator terminatorMinMaxDuration'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                   const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                   const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                   GALGAS_uint & outArgument_outMin,
                                                                                   GALGAS_uint & outArgument_outMax,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_RetfieTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@ipic18JumpTerminator terminatorMinMaxDuration'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                 const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                 const GALGAS_string constinArgument_inNextLabel,
                                                                                 GALGAS_uint & outArgument_outMin,
                                                                                 GALGAS_uint & outArgument_outMax,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = constinArgument_inExploredBlockMap.getter_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 63)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_min_2070 ;
    GALGAS_uint var_max_2085 ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mLabel, var_min_2070, var_max_2085, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 64)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outMin = var_min_2070 ;
      outArgument_outMax = var_max_2085 ;
    }else if (kBoolFalse == test_1) {
      outArgument_outMin = GALGAS_uint ((uint32_t) 2U).add_operation (var_min_2070, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 69)) ;
      outArgument_outMax = GALGAS_uint ((uint32_t) 2U).add_operation (var_max_2085, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 70)) ;
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 73)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_JumpTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@pic18TestRegisterTerminator terminatorMinMaxDuration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                        const GALGAS_string constinArgument_inNextLabel,
                                                                                        GALGAS_uint & outArgument_outMin,
                                                                                        GALGAS_uint & outArgument_outMax,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_uint var_trueMin_2691 ;
  GALGAS_uint var_trueMax_2704 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_2691, var_trueMax_2704, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 86)) ;
  GALGAS_uint var_falseMin_2800 ;
  GALGAS_uint var_falseMax_2814 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, GALGAS_string::makeEmptyString (), var_falseMin_2800, var_falseMax_2814, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 87)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin_2691.objectCompare (var_trueMax_2704)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin_2800.objectCompare (var_falseMax_2814)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 89)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration_3034 = var_trueMin_2691.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 90)) ;
      GALGAS_uint var_trueBranchMaxDuration_3080 = var_trueMax_2704.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 91)) ;
      GALGAS_uint var_falseBranchMinDuration_3127 = var_falseMin_2800.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 92)) ;
      GALGAS_uint var_falseBranchMaxDuration_3175 = var_falseMax_2814.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 93)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration_3127.objectCompare (var_trueBranchMinDuration_3034)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_falseBranchMinDuration_3127 ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_trueBranchMinDuration_3034 ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration_3175.objectCompare (var_trueBranchMaxDuration_3080)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_falseBranchMaxDuration_3175 ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_trueBranchMaxDuration_3080 ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      GALGAS_uint var_trueBranchMinDuration_3479 = var_trueMin_2691.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 97)) ;
      GALGAS_uint var_trueBranchMaxDuration_3525 = var_trueMax_2704.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 98)) ;
      GALGAS_uint var_falseBranchMinDuration_3572 = var_falseMin_2800.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 99)) ;
      GALGAS_uint var_falseBranchMaxDuration_3620 = var_falseMax_2814.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 100)) ;
      GALGAS_uint temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration_3572.objectCompare (var_trueBranchMinDuration_3479)).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = var_falseBranchMinDuration_3572 ;
      }else if (kBoolFalse == test_8) {
        temp_7 = var_trueBranchMinDuration_3479 ;
      }
      outArgument_outMin = temp_7 ;
      GALGAS_uint temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration_3620.objectCompare (var_trueBranchMaxDuration_3525)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = var_falseBranchMaxDuration_3620 ;
      }else if (kBoolFalse == test_10) {
        temp_9 = var_trueBranchMaxDuration_3525 ;
      }
      outArgument_outMax = temp_9 ;
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 105)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                 extensionMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration (defineExtensionMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@pic18RegisterComparisonTerminator terminatorMinMaxDuration'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                              const GALGAS_string constinArgument_inNextLabel,
                                                                                              GALGAS_uint & outArgument_outMin,
                                                                                              GALGAS_uint & outArgument_outMax,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_uint var_trueMin_4363 ;
  GALGAS_uint var_trueMax_4376 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_4363, var_trueMax_4376, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 118)) ;
  GALGAS_uint var_falseMin_4481 ;
  GALGAS_uint var_falseMax_4495 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_4481, var_falseMax_4495, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 119)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin_4363.objectCompare (var_trueMax_4376)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin_4481.objectCompare (var_falseMax_4495)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration_4715 = var_trueMin_4363.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 122)) ;
      GALGAS_uint var_trueBranchMaxDuration_4761 = var_trueMax_4376.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 123)) ;
      GALGAS_uint var_falseBranchMinDuration_4808 = var_falseMin_4481.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 124)) ;
      GALGAS_uint var_falseBranchMaxDuration_4856 = var_falseMax_4495.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 125)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration_4808.objectCompare (var_trueBranchMinDuration_4715)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_falseBranchMinDuration_4808 ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_trueBranchMinDuration_4715 ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration_4856.objectCompare (var_trueBranchMaxDuration_4761)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_falseBranchMaxDuration_4856 ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_trueBranchMaxDuration_4761 ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      GALGAS_uint var_trueBranchMinDuration_5160 = var_trueMin_4363.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 129)) ;
      GALGAS_uint var_trueBranchMaxDuration_5206 = var_trueMax_4376.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 130)) ;
      GALGAS_uint var_falseBranchMinDuration_5253 = var_falseMin_4481.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 131)) ;
      GALGAS_uint var_falseBranchMaxDuration_5301 = var_falseMax_4495.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 132)) ;
      GALGAS_uint temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration_5253.objectCompare (var_trueBranchMinDuration_5160)).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = var_falseBranchMinDuration_5253 ;
      }else if (kBoolFalse == test_8) {
        temp_7 = var_trueBranchMinDuration_5160 ;
      }
      outArgument_outMin = temp_7 ;
      GALGAS_uint temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration_5301.objectCompare (var_trueBranchMaxDuration_5206)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = var_falseBranchMaxDuration_5301 ;
      }else if (kBoolFalse == test_10) {
        temp_9 = var_trueBranchMaxDuration_5206 ;
      }
      outArgument_outMax = temp_9 ;
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 137)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                 extensionMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@pic18BitTestTerminator terminatorMinMaxDuration'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                   const GALGAS_string constinArgument_inNextLabel,
                                                                                   GALGAS_uint & outArgument_outMin,
                                                                                   GALGAS_uint & outArgument_outMax,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  GALGAS_uint var_trueMin_6033 ;
  GALGAS_uint var_trueMax_6046 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_6033, var_trueMax_6046, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 150)) ;
  GALGAS_uint var_falseMin_6151 ;
  GALGAS_uint var_falseMax_6165 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_6151, var_falseMax_6165, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 151)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin_6033.objectCompare (var_trueMax_6046)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin_6151.objectCompare (var_falseMax_6165)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration_6385 = var_trueMin_6033.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 154)) ;
      GALGAS_uint var_trueBranchMaxDuration_6431 = var_trueMax_6046.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 155)) ;
      GALGAS_uint var_falseBranchMinDuration_6478 = var_falseMin_6151.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 156)) ;
      GALGAS_uint var_falseBranchMaxDuration_6526 = var_falseMax_6165.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 157)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration_6478.objectCompare (var_trueBranchMinDuration_6385)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_falseBranchMinDuration_6478 ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_trueBranchMinDuration_6385 ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration_6526.objectCompare (var_trueBranchMaxDuration_6431)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_falseBranchMaxDuration_6526 ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_trueBranchMaxDuration_6431 ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_uint var_falseBranchMinDuration_6948 = var_falseMin_6151.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 161)) ;
        GALGAS_uint var_falseBranchMaxDuration_6996 = var_falseMax_6165.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 162)) ;
        GALGAS_uint var_trueBranchMinDuration_7043 = var_trueMin_6033.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 163)) ;
        GALGAS_uint var_trueBranchMaxDuration_7089 = var_trueMax_6046.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 164)) ;
        GALGAS_uint temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration_6948.objectCompare (var_trueBranchMinDuration_7043)).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = var_falseBranchMinDuration_6948 ;
        }else if (kBoolFalse == test_9) {
          temp_8 = var_trueBranchMinDuration_7043 ;
        }
        outArgument_outMin = temp_8 ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration_6996.objectCompare (var_trueBranchMaxDuration_7089)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_falseBranchMaxDuration_6996 ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_trueBranchMaxDuration_7089 ;
        }
        outArgument_outMax = temp_10 ;
      }else if (kBoolFalse == test_7) {
        GALGAS_uint var_trueBranchMinDuration_7392 = var_trueMin_6033.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 168)) ;
        GALGAS_uint var_trueBranchMaxDuration_7438 = var_trueMax_6046.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 169)) ;
        GALGAS_uint var_falseBranchMinDuration_7485 = var_falseMin_6151.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 170)) ;
        GALGAS_uint var_falseBranchMaxDuration_7533 = var_falseMax_6165.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 171)) ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration_7392.objectCompare (var_falseBranchMinDuration_7485)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_trueBranchMinDuration_7392 ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_falseBranchMinDuration_7485 ;
        }
        outArgument_outMin = temp_12 ;
        GALGAS_uint temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration_7438.objectCompare (var_falseBranchMaxDuration_7533)).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = var_trueBranchMaxDuration_7438 ;
        }else if (kBoolFalse == test_15) {
          temp_14 = var_falseBranchMaxDuration_7533 ;
        }
        outArgument_outMax = temp_14 ;
      }
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 176)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                 extensionMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration (defineExtensionMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@ipic18ConditionalJumpTerminator terminatorMinMaxDuration'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                            const GALGAS_string constinArgument_inNextLabel,
                                                                                            GALGAS_uint & outArgument_outMin,
                                                                                            GALGAS_uint & outArgument_outMax,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  GALGAS_bool test_0 = constinArgument_inExploredBlockMap.getter_hasKey (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 189)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 189)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_uint var_trueMin_8369 ;
    GALGAS_uint var_trueMax_8382 ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_trueMin_8369, var_trueMax_8382, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 190)) ;
    GALGAS_uint var_falseMin_8454 ;
    GALGAS_uint var_falseMax_8468 ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_falseMin_8454, var_falseMax_8468, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 191)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextLabel)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration_8586 = var_trueMin_8369.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 193)) ;
      GALGAS_uint var_trueBranchMaxDuration_8632 = var_trueMax_8382.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 194)) ;
      GALGAS_uint var_falseBranchMinDuration_8679 = var_falseMin_8454.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 195)) ;
      GALGAS_uint var_falseBranchMaxDuration_8727 = var_falseMax_8468.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 196)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration_8586.objectCompare (var_falseBranchMinDuration_8679)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_trueBranchMinDuration_8586 ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_falseBranchMinDuration_8679 ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration_8632.objectCompare (var_falseBranchMaxDuration_8727)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_trueBranchMaxDuration_8632 ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_falseBranchMaxDuration_8727 ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextLabel)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_uint var_falseBranchMinDuration_9113 = var_falseMin_8454.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 200)) ;
        GALGAS_uint var_falseBranchMaxDuration_9161 = var_falseMax_8468.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 201)) ;
        GALGAS_uint var_trueBranchMinDuration_9208 = var_trueMin_8369.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 202)) ;
        GALGAS_uint var_trueBranchMaxDuration_9254 = var_trueMax_8382.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 203)) ;
        GALGAS_uint temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration_9208.objectCompare (var_falseBranchMinDuration_9113)).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = var_trueBranchMinDuration_9208 ;
        }else if (kBoolFalse == test_9) {
          temp_8 = var_falseBranchMinDuration_9113 ;
        }
        outArgument_outMin = temp_8 ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration_9254.objectCompare (var_falseBranchMaxDuration_9161)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_trueBranchMaxDuration_9254 ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_falseBranchMaxDuration_9161 ;
        }
        outArgument_outMax = temp_10 ;
      }else if (kBoolFalse == test_7) {
        GALGAS_uint var_trueBranchMinDuration_9557 = var_trueMin_8369.add_operation (GALGAS_uint ((uint32_t) 3U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 207)) ;
        GALGAS_uint var_trueBranchMaxDuration_9603 = var_trueMax_8382.add_operation (GALGAS_uint ((uint32_t) 3U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 208)) ;
        GALGAS_uint var_falseBranchMinDuration_9650 = var_falseMin_8454.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 209)) ;
        GALGAS_uint var_falseBranchMaxDuration_9698 = var_falseMax_8468.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 210)) ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration_9557.objectCompare (var_falseBranchMinDuration_9650)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_trueBranchMinDuration_9557 ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_falseBranchMinDuration_9650 ;
        }
        outArgument_outMin = temp_12 ;
        GALGAS_uint temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration_9603.objectCompare (var_falseBranchMaxDuration_9698)).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = var_trueBranchMaxDuration_9603 ;
        }else if (kBoolFalse == test_15) {
          temp_14 = var_falseBranchMaxDuration_9698 ;
        }
        outArgument_outMax = temp_14 ;
      }
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 215)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@ipic18IncDecRegisterTerminator terminatorMinMaxDuration'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                           const GALGAS_string constinArgument_inNextLabel,
                                                                                           GALGAS_uint & outArgument_outMin,
                                                                                           GALGAS_uint & outArgument_outMax,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  GALGAS_uint var_trueMin_10438 ;
  GALGAS_uint var_trueMax_10451 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_10438, var_trueMax_10451, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 228)) ;
  GALGAS_uint var_falseMin_10556 ;
  GALGAS_uint var_falseMax_10570 ;
  callExtensionMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_10556, var_falseMax_10570, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 229)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin_10438.objectCompare (var_trueMax_10451)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin_10556.objectCompare (var_falseMax_10570)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 231)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration_10790 = var_trueMin_10438.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 232)) ;
      GALGAS_uint var_trueBranchMaxDuration_10836 = var_trueMax_10451.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 233)) ;
      GALGAS_uint var_falseBranchMinDuration_10883 = var_falseMin_10556.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 234)) ;
      GALGAS_uint var_falseBranchMaxDuration_10931 = var_falseMax_10570.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 235)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration_10790.objectCompare (var_falseBranchMinDuration_10883)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_trueBranchMinDuration_10790 ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_falseBranchMinDuration_10883 ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration_10836.objectCompare (var_falseBranchMaxDuration_10931)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_trueBranchMaxDuration_10836 ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_falseBranchMaxDuration_10931 ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 238)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_uint var_falseBranchMinDuration_11353 = var_falseMin_10556.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 239)) ;
        GALGAS_uint var_falseBranchMaxDuration_11401 = var_falseMax_10570.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 240)) ;
        GALGAS_uint var_trueBranchMinDuration_11448 = var_trueMin_10438.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 241)) ;
        GALGAS_uint var_trueBranchMaxDuration_11494 = var_trueMax_10451.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 242)) ;
        GALGAS_uint temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration_11353.objectCompare (var_trueBranchMinDuration_11448)).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = var_falseBranchMinDuration_11353 ;
        }else if (kBoolFalse == test_9) {
          temp_8 = var_trueBranchMinDuration_11448 ;
        }
        outArgument_outMin = temp_8 ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration_11401.objectCompare (var_trueBranchMaxDuration_11494)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_falseBranchMaxDuration_11401 ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_trueBranchMaxDuration_11494 ;
        }
        outArgument_outMax = temp_10 ;
      }else if (kBoolFalse == test_7) {
        GALGAS_uint var_trueBranchMinDuration_11797 = var_trueMin_10438.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 246)) ;
        GALGAS_uint var_trueBranchMaxDuration_11843 = var_trueMax_10451.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 247)) ;
        GALGAS_uint var_falseBranchMinDuration_11890 = var_falseMin_10556.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 248)) ;
        GALGAS_uint var_falseBranchMaxDuration_11938 = var_falseMax_10570.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 249)) ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration_11797.objectCompare (var_falseBranchMinDuration_11890)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_trueBranchMinDuration_11797 ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_falseBranchMinDuration_11890 ;
        }
        outArgument_outMin = temp_12 ;
        GALGAS_uint temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration_11843.objectCompare (var_falseBranchMaxDuration_11938)).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = var_trueBranchMaxDuration_11843 ;
        }else if (kBoolFalse == test_15) {
          temp_14 = var_falseBranchMaxDuration_11938 ;
        }
        outArgument_outMax = temp_14 ;
      }
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 254)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@ipic18ComputedGotoTerminator terminatorMinMaxDuration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                         const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                         GALGAS_uint & outArgument_outMin,
                                                                                         GALGAS_uint & outArgument_outMax,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 267)) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_solved_12633 = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_12672 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  bool bool_0 = var_solved_12633.isValidAndTrue () ;
  if (enumerator_12672.hasCurrentObject () && bool_0) {
    while (enumerator_12672.hasCurrentObject () && bool_0) {
      var_solved_12633 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_12672.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 272)) ;
      enumerator_12672.gotoNextObject () ;
      if (enumerator_12672.hasCurrentObject ()) {
        bool_0 = var_solved_12633.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved_12633.boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_12806 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    while (enumerator_12806.hasCurrentObject ()) {
      GALGAS_uint var_min_12862 ;
      GALGAS_uint var_max_12871 ;
      constinArgument_inExploredBlockMap.method_searchKey (enumerator_12806.current_mValue (HERE), var_min_12862, var_max_12871, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 277)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_min_12862.objectCompare (outArgument_outMin)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outMin = var_min_12862 ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_max_12871.objectCompare (outArgument_outMax)).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outMax = var_max_12871 ;
      }
      enumerator_12806.gotoNextObject () ;
    }
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 12U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 286)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 12U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 287)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@ipic18ComputedRETLWTerminator terminatorMinMaxDuration'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                          const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                          GALGAS_uint & outArgument_outMin,
                                                                                          GALGAS_uint & outArgument_outMax,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  outArgument_outMin = GALGAS_uint ((uint32_t) 11U) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.operator_not (SOURCE_FILE ("ipic18_duration_computations.galgas", 300)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outMin.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 301)) ;
  }
  outArgument_outMax = outArgument_outMin ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18ComputedBraTerminator terminatorMinMaxDuration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                        const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                        GALGAS_uint & outArgument_outMin,
                                                                                        GALGAS_uint & outArgument_outMax,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 314)) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_solved_13920 = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_13959 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  bool bool_0 = var_solved_13920.isValidAndTrue () ;
  if (enumerator_13959.hasCurrentObject () && bool_0) {
    while (enumerator_13959.hasCurrentObject () && bool_0) {
      var_solved_13920 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_13959.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 319)) ;
      enumerator_13959.gotoNextObject () ;
      if (enumerator_13959.hasCurrentObject ()) {
        bool_0 = var_solved_13920.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved_13920.boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_14093 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    while (enumerator_14093.hasCurrentObject ()) {
      GALGAS_uint var_min_14149 ;
      GALGAS_uint var_max_14158 ;
      constinArgument_inExploredBlockMap.method_searchKey (enumerator_14093.current_mValue (HERE), var_min_14149, var_max_14158, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 324)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_min_14149.objectCompare (outArgument_outMin)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outMin = var_min_14149 ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_max_14158.objectCompare (outArgument_outMax)).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outMax = var_max_14158 ;
      }
      enumerator_14093.gotoNextObject () ;
    }
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 11U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 333)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 11U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 334)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration (void) {
  enterExtensionMethod_terminatorMinMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                 extensionMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Overriding extension method '@ipic18ReturnTerminator duration'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ReturnTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * /* inObject */,
                                                                   const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                   const GALGAS_string /* constinArgument_inNextLabel */,
                                                                   GALGAS_uint & outArgument_outMin,
                                                                   GALGAS_uint & outArgument_outMax,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_duration (void) {
  enterExtensionMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                 extensionMethod_ipic_31__38_ReturnTerminator_duration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_duration (defineExtensionMethod_ipic_31__38_ReturnTerminator_duration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Overriding extension method '@ipic18RetlwTerminator duration'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetlwTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * /* inObject */,
                                                                  const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                  const GALGAS_string /* constinArgument_inNextLabel */,
                                                                  GALGAS_uint & outArgument_outMin,
                                                                  GALGAS_uint & outArgument_outMax,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_duration (void) {
  enterExtensionMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                 extensionMethod_ipic_31__38_RetlwTerminator_duration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_duration (defineExtensionMethod_ipic_31__38_RetlwTerminator_duration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Overriding extension method '@ipic18RetfieTerminator duration'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetfieTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * /* inObject */,
                                                                   const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                   const GALGAS_string /* constinArgument_inNextLabel */,
                                                                   GALGAS_uint & outArgument_outMin,
                                                                   GALGAS_uint & outArgument_outMax,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_duration (void) {
  enterExtensionMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                 extensionMethod_ipic_31__38_RetfieTerminator_duration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_duration (defineExtensionMethod_ipic_31__38_RetfieTerminator_duration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Overriding extension method '@ipic18JumpTerminator duration'                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                                                 const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                 const GALGAS_string constinArgument_inNextLabel,
                                                                 GALGAS_uint & outArgument_outMin,
                                                                 GALGAS_uint & outArgument_outMax,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = constinArgument_inExploredBlockMap.getter_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 392)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_min_16223 ;
    GALGAS_uint var_max_16232 ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mLabel, var_min_16223, var_max_16232, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 393)) ;
    outArgument_outMin = var_min_16223 ;
    outArgument_outMax = var_max_16232 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 397)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 398)) ;
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 401)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_duration (void) {
  enterExtensionMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                 extensionMethod_ipic_31__38_JumpTerminator_duration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_duration (defineExtensionMethod_ipic_31__38_JumpTerminator_duration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18_intermediate_instruction_TBLRD minMaxDuration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                 GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                 GALGAS_uint & outArgument_outMin,
                                                                                                 GALGAS_uint & outArgument_outMax,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18_intermediate_instruction_TBLWT minMaxDuration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                 GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                 GALGAS_uint & outArgument_outMin,
                                                                                                 GALGAS_uint & outArgument_outMax,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18_intermediate_instruction_MNOP minMaxDuration'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                GALGAS_uint & outArgument_outMin,
                                                                                                GALGAS_uint & outArgument_outMax,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  outArgument_outMin = object->mAttribute_mOccurrenceFactor.mAttribute_uint ;
  outArgument_outMax = object->mAttribute_mOccurrenceFactor.mAttribute_uint ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@ipic18_intermediate_instruction_NOPBRA minMaxDuration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                  GALGAS_uint & outArgument_outMin,
                                                                                                  GALGAS_uint & outArgument_outMax,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  outArgument_outMin = object->mAttribute_mOccurrenceFactor.mAttribute_uint.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 459)) ;
  outArgument_outMax = object->mAttribute_mOccurrenceFactor.mAttribute_uint.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 460)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18_intermediate_instruction_LFSR minMaxDuration'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                GALGAS_uint & outArgument_outMin,
                                                                                                GALGAS_uint & outArgument_outMax,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@ipic18_intermediate_instruction_MOVFF minMaxDuration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                 GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                 GALGAS_uint & outArgument_outMin,
                                                                                                 GALGAS_uint & outArgument_outMax,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@ipic18_intermediate_JSR minMaxDuration'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                GALGAS_blockDurationMap inArgument_inExploredBlockMap,
                                                                                GALGAS_uint & outArgument_outMin,
                                                                                GALGAS_uint & outArgument_outMax,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const enumGalgasBool test_0 = inArgument_inExploredBlockMap.getter_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 492)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mTargetLabel, outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 493)) ;
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 494)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 495)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 497)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@ipic18_condition_skip_instruction minMaxDuration'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             GALGAS_blockDurationMap inArgument_inExploredBlockMap,
                                                                                             GALGAS_uint & outArgument_outMin,
                                                                                             GALGAS_uint & outArgument_outMax,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callExtensionMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inArgument_inExploredBlockMap, outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 509)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, outArgument_outMin.objectCompare (outArgument_outMax)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 511)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 512)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                       extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@ipic18_intermediate_instruction_computed_rcall minMaxDuration'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                             GALGAS_blockDurationMap inArgument_inExploredBlockMap,
                                                                                                             GALGAS_uint & outArgument_outMin,
                                                                                                             GALGAS_uint & outArgument_outMax,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 523)) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_solved_19972 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_20020 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  bool bool_0 = var_solved_19972.isValidAndTrue () ;
  if (enumerator_20020.hasCurrentObject () && bool_0) {
    while (enumerator_20020.hasCurrentObject () && bool_0) {
      GALGAS_uint var_min_20091 ;
      GALGAS_uint var_max_20100 ;
      callExtensionMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_20020.current_mInstruction (HERE).ptr (), inArgument_inExploredBlockMap, var_min_20091, var_max_20100, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 527)) ;
      var_solved_19972 = GALGAS_bool (kIsInfOrEqual, var_min_20091.objectCompare (var_max_20100)) ;
      enumerator_20020.gotoNextObject () ;
      if (enumerator_20020.hasCurrentObject ()) {
        bool_0 = var_solved_19972.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved_19972.boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_20191 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
    GALGAS_uint index_20156 ((uint32_t) 0) ;
    while (enumerator_20191.hasCurrentObject ()) {
      GALGAS_uint var_min_20259 ;
      GALGAS_uint var_max_20270 ;
      callExtensionMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_20191.current_mInstruction (HERE).ptr (), inArgument_inExploredBlockMap, var_min_20259, var_max_20270, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 532)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, index_20156.objectCompare (object->mAttribute_mTargetInstructions.getter_length (SOURCE_FILE ("ipic18_duration_computations.galgas", 534)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 534)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_min_20259 = var_min_20259.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 535)) ;
        var_max_20270 = var_max_20270.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 536)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_min_20259.objectCompare (outArgument_outMin)).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outMin = var_min_20259 ;
      }
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_max_20270.objectCompare (outArgument_outMax)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outMax = var_max_20270 ;
      }
      enumerator_20191.gotoNextObject () ;
      index_20156.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 531)) ;
    }
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 10U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 546)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 10U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 547)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                       extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@byteDeclarationInRam handleDeclaration'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_byteDeclarationInRam_handleDeclaration (const cPtr_declarationInRam * inObject,
                                                                    GALGAS_ramBankTable & ioArgument_ioRamBank,
                                                                    GALGAS_registerTable & ioArgument_ioRegisterTable,
                                                                    const GALGAS_lstring constinArgument_inCurrentRamBank,
                                                                    GALGAS_declaredByteMap & ioArgument_ioDeclaredByteMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_byteDeclarationInRam * object = (const cPtr_byteDeclarationInRam *) inObject ;
  macroValidSharedObject (object, cPtr_byteDeclarationInRam) ;
  GALGAS_uint var_lastAddressPlusOne_884 ;
  GALGAS_uint var_firstFreeAddress_909 ;
  GALGAS_uintlist var_mirrorOffsetList_938 ;
  GALGAS_uint joker_981 ; // Joker input parameter
  ioArgument_ioRamBank.method_searchKey (constinArgument_inCurrentRamBank, joker_981, var_firstFreeAddress_909, var_lastAddressPlusOne_884, var_mirrorOffsetList_938, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 25)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSize.getter_uint (SOURCE_FILE ("ram_sections.galgas", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSize.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("zero size is not allowed")  COMMA_SOURCE_FILE ("ram_sections.galgas", 27)) ;
  }
  GALGAS_uintlist var_addressList_1135 = GALGAS_uintlist::constructor_listWithValue (var_firstFreeAddress_909  COMMA_SOURCE_FILE ("ram_sections.galgas", 29)) ;
  cEnumerator_uintlist enumerator_1210 (var_mirrorOffsetList_938, kEnumeration_up) ;
  while (enumerator_1210.hasCurrentObject ()) {
    var_addressList_1135.addAssign_operation (var_firstFreeAddress_909.add_operation (enumerator_1210.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 31))  COMMA_SOURCE_FILE ("ram_sections.galgas", 31)) ;
    enumerator_1210.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = ioArgument_ioDeclaredByteMap.getter_hasKey (object->mAttribute_mName.mAttribute_string COMMA_SOURCE_FILE ("ram_sections.galgas", 33)).operator_not (SOURCE_FILE ("ram_sections.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioDeclaredByteMap.setter_insertKey (object->mAttribute_mName, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 34)) ;
    }
  }
  {
  ioArgument_ioRegisterTable.setter_insertKey (object->mAttribute_mName, var_addressList_1135, object->mAttribute_mSize.getter_uint (SOURCE_FILE ("ram_sections.galgas", 36)), object->mAttribute_mBitSliceTable, object->mAttribute_mBitDefinitionString, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 36)) ;
  }
  var_firstFreeAddress_909 = var_firstFreeAddress_909.add_operation (object->mAttribute_mSize.getter_uint (SOURCE_FILE ("ram_sections.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 37)) ;
  {
  ioArgument_ioRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_909, constinArgument_inCurrentRamBank.getter_string (SOURCE_FILE ("ram_sections.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 38)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress_909.objectCompare (var_lastAddressPlusOne_884)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("overflow in '").add_operation (constinArgument_inCurrentRamBank.getter_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' ram bank for '"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (object->mAttribute_mName.getter_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40))  COMMA_SOURCE_FILE ("ram_sections.galgas", 40)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_byteDeclarationInRam_handleDeclaration (void) {
  enterExtensionMethod_handleDeclaration (kTypeDescriptor_GALGAS_byteDeclarationInRam.mSlotID,
                                          extensionMethod_byteDeclarationInRam_handleDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_byteDeclarationInRam_handleDeclaration (defineExtensionMethod_byteDeclarationInRam_handleDeclaration, NULL) ;

