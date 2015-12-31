#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-14.h"


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
  GALGAS_sint_36__34_ var_lowerBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 710)) ;
  GALGAS_sint_36__34_ var_upperBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 711)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound.objectCompare (var_upperBound)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (var_upperBound.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 715)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)) ;
    }
  }
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap = constinArgument_inConstantMap ;
  {
  var_tempConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 721)) ;
  }
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 722)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 741)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_finalBank.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("enclosed instruction list should not modify bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 744)) ;
  }
  GALGAS_sint_36__34_ var_idx = var_lowerBound.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 747)) ;
  if (var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).isValid ()) {
    uint32_t variant_26087 = var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).uintValue () ;
    bool loop_26087 = true ;
    while (loop_26087) {
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_idx.objectCompare (var_upperBound)) ;
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
        GALGAS_constantMap var_constantMap = constinArgument_inConstantMap ;
        {
        var_constantMap.modifier_insertKey (object->mAttribute_mConstantName, var_idx, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 750)) ;
        }
        {
        routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 751)) ;
        }
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 769)) ;
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 825)) ;
  }
  GALGAS_uint var_registerAddress ;
  callCategoryMethod_getRegisterAddress ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_registerAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 827)) ;
  GALGAS_uint var_newBank = var_registerAddress.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 829)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioCurrentBank = var_newBank ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_luint::constructor_new (var_newBank, object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 834)).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 834))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 832)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 836)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 832)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_3, GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 839))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)) ;
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 856)) ;
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 874)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 898)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("occurrence argument is zero: no generated code")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 899)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 902)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 906)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 902)) ;
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
//                            Overriding category method '@pic18Instruction_NOPBRA analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                               categoryMethod_pic_31__38_Instruction_5F_NOPBRA_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (defineCategoryMethod_pic_31__38_Instruction_5F_NOPBRA_analyze, NULL) ;

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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 959)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 961)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 962)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 962)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 962))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 962)) ;
  }
  GALGAS_uint var_address = var_result.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 964)) ;
  GALGAS_registerExpression var_TBLPTRU = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 967)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 968))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 968))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 968)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 969))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 966)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription ;
  GALGAS_bitSliceTable joker_34265 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_34265, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 971)) ;
  GALGAS_uint var_upper = var_address.right_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_upper.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 984)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_upper.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 995)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1000)), var_upper  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 998)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1003)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 998)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1007)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1005)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1010)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1005)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRH = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1015)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1016))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1016))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1016)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)) ;
  GALGAS_bitSliceTable joker_35586 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_35586, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1019)) ;
  GALGAS_uint var_high = var_address.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_high.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1030)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1035)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1030)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_high.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1040)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1043)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1048)), var_high  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1046)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1046)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRL = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1064))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1064))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1064)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1065))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1062)) ;
  GALGAS_bitSliceTable joker_36909 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_36909, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1067)) ;
  GALGAS_uint var_low = var_address.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_low.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1080)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1083)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_low.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1091)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)) ;
    }else if (kBoolFalse == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1096)), var_low  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1094)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1099)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1094)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1103)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1101)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1106)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1101)) ;
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
  constinArgument_inDataMap.method_searchKey (object->mAttribute_mDataName, var_data, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1129)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1131)).objectCompare (var_data.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1131)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDataIndex.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("index should be < ").add_operation (var_data.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1132)) ;
  }
  GALGAS_registerExpression var_TBLPTRU = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1136)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1137))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1137))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1137)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1138))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1135)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription ;
  GALGAS_bitSliceTable joker_39138 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_39138, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1140)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1152)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1152)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1149)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1155)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1149)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1157)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1162)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1157)) ;
  GALGAS_registerExpression var_TBLPTRH = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1167))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1167))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1167)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)) ;
  GALGAS_bitSliceTable joker_39877 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_39877, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1170)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1182)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1182)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1179)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1185)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1179)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1189)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1192)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)) ;
  GALGAS_registerExpression var_TBLPTRL = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1198))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)) ;
  GALGAS_bitSliceTable joker_40615 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_40615, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1200)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
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
  GALGAS_uint joker_41827 ; // Joker input parameter
  GALGAS_bool joker_41830 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, joker_41827, joker_41830, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1245)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)).add_operation (var_requiredBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)) ;
    var_errorMessage.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1249)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1254)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1256)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1257)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1261)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1264)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1265)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1260))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1260)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1268)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1270)) ;
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
  cEnumerator_lstringlist enumerator_43641 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_43641.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint var_returnedBank ;
    GALGAS_bool var_preservesBank ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_43641.current_mValue (HERE), var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1296)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)).add_operation (var_requiredBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)) ;
      var_errorMessage.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1303)) ;
      }
      GALGAS_location location_2 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1305)) ;
    }
    const enumGalgasBool test_3 = var_isNoReturn.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
    }
    const enumGalgasBool test_5 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)).operator_and (var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = var_someReturnsBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_returnedBankSelection = var_returnedBank ;
          var_someReturnsBank = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection.objectCompare (var_returnedBank)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string var_errorMessage = GALGAS_string ("the '").add_operation (enumerator_43641.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_errorMessage.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319)) ;
            }else if (kBoolFalse == test_10) {
              var_errorMessage.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
            }
            var_errorMessage.plusAssign_operation(GALGAS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1323)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_returnedBankSelection.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1324)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              var_errorMessage.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1325)) ;
            }else if (kBoolFalse == test_11) {
              var_errorMessage.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1327)) ;
            }
            GALGAS_location location_12 (enumerator_43641.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1329)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_13 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)).operator_and (var_preservesBank COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)).boolEnum () ;
        if (kBoolTrue == test_13) {
        }
      }
    }
    enumerator_43641.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection ;
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_15) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)) ;
    }else if (kBoolFalse == test_15) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)).objectCompare (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)) ;
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1346)) ;
  cEnumerator_lstringlist enumerator_46138 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_46138.hasCurrentObject ()) {
    var_targetInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_46138.current_mValue (HERE).mAttribute_location, enumerator_46138.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)) ;
    enumerator_46138.gotoNextObject () ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, var_targetInstructionList, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1351)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1357)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1351)) ;
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
  cEnumerator_lstringlist enumerator_47186 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_47186.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint joker_47273 ; // Joker input parameter
    GALGAS_bool joker_47276 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_47186.current_mValue (HERE), var_isNoReturn, var_requiredBank, joker_47273, joker_47276, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1381)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1382)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1382)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_47186.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)).add_operation (var_requiredBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)) ;
      var_errorMessage.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1384)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1385)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1386)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)) ;
      }
      GALGAS_location location_2 (enumerator_47186.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1390)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392)).boolEnum () ;
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
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1408)).objectCompare (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1408)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1420)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1425)) ;
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
  GALGAS_uint var_returnedBankValue = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)) ;
  cEnumerator_lstringlist enumerator_49968 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_49968.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint var_returnedBank ;
    GALGAS_bool var_preservesBank ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_49968.current_mValue (HERE), var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_49968.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)).add_operation (var_requiredBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1454)) ;
      var_errorMessage.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1456)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)) ;
      }
      GALGAS_location location_2 (enumerator_49968.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)) ;
    }
    const enumGalgasBool test_3 = var_preservesBank.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_allReturnBank = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_returnedBankValue.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue.objectCompare (var_returnedBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1466)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (enumerator_49968.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)).add_operation (var_returnedBankValue.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)) ;
      }else if (kBoolFalse == test_4) {
        var_allPreserveBankSetting = GALGAS_bool (false) ;
        var_returnedBankValue = var_returnedBank ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_49968.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_49968.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)) ;
    }
    enumerator_49968.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = var_allReturnBank.operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1478)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1478)).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioCurrentBank = var_returnedBankValue ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_9 = var_allReturnBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)).operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)) ;
    }
  }
  const enumGalgasBool test_10 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).boolEnum () ;
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
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)) ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_11) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1496)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_12) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)) ;
    }else if (kBoolFalse == test_12) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, var_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1499)).objectCompare (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1499)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1504)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1507)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1511)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1514)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1516)) ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1547)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1550)).objectCompare (object->mAttribute_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1550)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the constant list length (").add_operation (object->mAttribute_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).add_operation (var_size.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1551)) ;
      }
    }
  }
  GALGAS_uintlist var_literalValues = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1554)) ;
  cEnumerator_immediatExpressionList enumerator_54630 (object->mAttribute_mImmediateExpressionList, kEnumeration_up) ;
  GALGAS_uint index_54598 ((uint32_t) 0) ;
  while (enumerator_54630.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_54630.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1556)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_v.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value with idx ").add_operation (index_54598.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (var_v.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)) ;
    }
    var_literalValues.addAssign_operation (var_v.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)) ;
    enumerator_54630.gotoNextObject () ;
    index_54598.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_literalValues, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1567)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1571)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1563))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1563)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1574)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1576)) ;
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
  GALGAS_uint joker_56158 ; // Joker input parameter
  GALGAS_bool joker_56161 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, joker_56158, joker_56161, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1597)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1598)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1598)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)).add_operation (var_requiredBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)) ;
    var_errorMessage.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1600)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1601)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1602)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)) ;
  }
  GALGAS_conditionalBranchMode var_mode ;
  const enumGalgasBool test_5 = object->mAttribute_mIsBcc.boolEnum () ;
  if (kBoolTrue == test_5) {
    var_mode = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1614)) ;
  }else if (kBoolFalse == test_5) {
    var_mode = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1616)) ;
  }
  GALGAS_lstring var_label_30_ = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1623)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, object->mAttribute_mTargetLabel, var_mode, var_label_30_, var_mode  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1622))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1622)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) ;
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
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1660)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1669)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1678)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1691)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1691)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, object->mAttribute_mSkipIfSet, var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)) ;
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
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1725)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1726)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1727)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1728)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_60691 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_60691, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1730)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1741)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, var_baseCode, var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1763)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1787)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1788)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1789)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1789)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1790)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_mIncrement.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1791)).operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1791)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1792)) ;
      }else if (kBoolFalse == test_2) {
        var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1794)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_62777 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_62777, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1797)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1808)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1821)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1821)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, var_baseCode, var_IPICregisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1824)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1831)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1824)) ;
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1857)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1857)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1857)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1858)) ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1859)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1859)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1859)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1860)) ;
  GALGAS_lstring var_exitLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1861)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1861)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1861)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1862)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, var_testTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1864)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1878)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1882)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1877))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1877)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1885)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mThenInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1888)) ;
  }
  GALGAS_bool var_thenContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = var_thenContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1909)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1912)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1913)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1920)) ;
  }
  GALGAS_bool var_elseContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_1 = var_elseContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1940))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1940)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1949)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank.objectCompare (var_thenBranchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank ;
  }else if (kBoolFalse == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1954)) ;
    var_elseBranchFinalBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1955)) ;
  }
  const enumGalgasBool test_3 = var_thenContinuesInSequence.operator_or (var_elseContinuesInSequence COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1958)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = var_exitLabel ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961)) ;
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
  constinArgument_inMacroMap.method_searchKey (object->mAttribute_mMacroName, var_constantNameList, var_instructionList, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1984)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1985)).objectCompare (var_constantNameList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1985)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, var_constantNameList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)) ;
  }
  GALGAS_constantMap var_constantMap = constinArgument_inConstantMap ;
  cEnumerator_immediatExpressionList enumerator_68493 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  cEnumerator_lstringlist enumerator_68529 (var_constantNameList, kEnumeration_up) ;
  while (enumerator_68493.hasCurrentObject () && enumerator_68529.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_68493.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap, var_expressionValue, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1991)) ;
    {
    var_constantMap.modifier_insertKey (enumerator_68529.current_mValue (HERE), var_expressionValue, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1992)) ;
    }
    enumerator_68493.gotoNextObject () ;
    enumerator_68529.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList (var_instructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1995)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mCaseExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2052)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2054)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("case value is evaluated as ").add_operation (var_result.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2055)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2058)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2058)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (var_result.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2059)) ;
    inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)), GALGAS_string ("the '").add_operation (var_result.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2060)) ;
  }else if (kBoolFalse == test_1) {
    {
    ioArgument_ioCaseConstantMap.modifier_insertKey (GALGAS_lstring::constructor_new (var_result.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2062)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2062)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2062)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067)), ioArgument_ioLastComparisonValue.substract_operation (var_result, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2065)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2070)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2065)) ;
  ioArgument_ioLastComparisonValue = var_result ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2076)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2080)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2082)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2084))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2078)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2087)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2091)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2086))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2086)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2094)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMinExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2111)) ;
  GALGAS_sint_36__34_ var_maxBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMaxExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2112)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_minBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2115)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_maxBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2119)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, var_maxBound.objectCompare (var_minBound)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound (").add_operation (var_maxBound.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)).add_operation (var_minBound.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_3 = var_ok.boolEnum () ;
  if (kBoolTrue == test_3) {
    cEnumerator_range enumerator_73708 (GALGAS_range::constructor_new (var_minBound.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)), var_maxBound.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)), kEnumeration_up) ;
    while (enumerator_73708.hasCurrentObject ()) {
      const enumGalgasBool test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2130)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2130)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)) ;
        inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)), GALGAS_string ("the '").add_operation (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2132)) ;
      }else if (kBoolFalse == test_4) {
        {
        ioArgument_ioCaseConstantMap.modifier_insertKey (GALGAS_lstring::constructor_new (enumerator_73708.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2134)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2134)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2134)) ;
        }
      }
      enumerator_73708.gotoNextObject () ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)), ioArgument_ioLastComparisonValue.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2143)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)) ;
    GALGAS_lstring var_greaterThanLowBoundLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
    GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2149)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2153)), var_greaterThanLowBoundLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2155)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2157))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2151)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2160)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2164)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2159))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2159)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2167)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2172)), var_maxBound.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2170)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2175)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2170)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32_ = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2180)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2182)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2184))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2178)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2187)), var_greaterThanLowBoundLabel, ioArgument_ioGeneratedInstructionList, var_t_32_, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2191)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2186))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2186)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2194)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    ioArgument_ioLastComparisonValue = var_maxBound.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2197)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2197)) ;
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
  GALGAS_caseConstantMap var_caseConstantMap = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2219)) ;
  GALGAS_lstring var_exitLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2221)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2222)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2229)) ;
  GALGAS_bool var_finalBankSettingDefined = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_77635 (object->mAttribute_mCaseList, kEnumeration_up) ;
  while (enumerator_77635.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2235)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_77842 (enumerator_77635.current_mCaseExpressionList (HERE), kEnumeration_up) ;
    while (enumerator_77842.hasCurrentObject ()) {
      callCategoryMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_77842.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel, ioArgument_ioUsedRegisters, var_caseConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2238)) ;
      enumerator_77842.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel ;
    GALGAS_uint var_branchFinalBank = var_initialBankSetting ;
    {
    routine_analyzeInstructionList (enumerator_77635.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2255)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_continuesInSequence = GALGAS_bool (true) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2276)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2280)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275)) ;
    }
    const enumGalgasBool test_1 = var_finalBankSettingDefined.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_finalBankSetting.objectCompare (var_branchFinalBank)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_branchFinalBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = var_branchFinalBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_finalBankSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_finalBankSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)) ;
        }
        inCompiler->emitSemanticError (enumerator_77635.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)) ;
      }
    }else if (kBoolFalse == test_1) {
      var_finalBankSettingDefined = GALGAS_bool (true) ;
      var_finalBankSetting = var_branchFinalBank ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2296)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    enumerator_77635.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank = var_initialBankSetting ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2301)) ;
  }
  GALGAS_bool var_thenContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_7 = var_thenContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2322)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2325))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2325)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2326)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2321))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2321)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2330)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_finalBankSetting.objectCompare (var_branchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_branchFinalBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2334)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_10) {
      temp_9 = var_branchFinalBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2334)) ;
    }
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_finalBankSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2336)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_12) {
      temp_11 = var_finalBankSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2336)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mElseBranchStartLocation, GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2333)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2334)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2335)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2336))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2333)) ;
  }
  ioArgument_ioCurrentBank = var_finalBankSetting ;
  const enumGalgasBool test_13 = var_continuesInSequence.boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioBlockLabel = var_exitLabel ;
  }else if (kBoolFalse == test_13) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2344)) ;
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
  GALGAS_lstring var_startLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2368)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2370))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2370)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2378)) ;
  ioArgument_ioBlockLabel = var_startLabel ;
  GALGAS_uint var_repeatedBranchFinalBank = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2382)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2402)) ;
  }
  const enumGalgasBool test_1 = var_repeatedInstructionsContinuesInSequence.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2404)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2405)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_83356 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_83356.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2410)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2410)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2410)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2411)) ;
    GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2412)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2412)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2412)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2413)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator ;
    callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) enumerator_83356.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, var_testTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2415)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2428)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2432)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2427))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2427)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2435)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel ;
    GALGAS_uint var_branchFinalBank = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList (enumerator_83356.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2438)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_83356.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2457)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (enumerator_83356.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2460)) ;
    }
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2463)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2466))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2466)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2467)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2470)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    enumerator_83356.gotoNextObject () ;
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
  const enumGalgasBool test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2520)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_otherInitialBlockSetting ;
    GALGAS_string var_otherBlockName ;
    ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2521)), var_otherInitialBlockSetting, var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2521)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2524)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2524)) ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = var_otherInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526)) ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2523)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2524)).add_operation (var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2523)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.modifier_insertKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)) ;
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
      GALGAS_uint var_otherInitialBlockSetting ;
      GALGAS_string var_otherBlockName ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (object->mAttribute_mNextBlock, var_otherInitialBlockSetting, var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2549)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2552)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2552)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2554)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_otherInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2554)) ;
        }
        GALGAS_location location_7 (object->mAttribute_mNextBlock.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this block goes to '").add_operation (object->mAttribute_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2552)).add_operation (var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2553)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2553)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2553)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2554))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2551)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      ioArgument_ioBlockInitialBankSelectionMap.modifier_insertKey (object->mAttribute_mNextBlock, constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)) ;
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
  callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2573)) ;
  callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582)) ;
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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mNextBlock.mAttribute_location, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (object->mAttribute_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2620)), object->mAttribute_mNextBlock.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2620)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2621))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2618)) ;
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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mLocation, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2640))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2637)) ;
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2656)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2656)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2656)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2657)) ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2658)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2658)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2658)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2659)) ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2661)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator ;
  callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2674)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2686)), var_conditionTrueLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2688)), var_trueTerminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2690)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2685))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2685)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator ;
  callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2694)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)), var_conditionFalseLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2708)), var_falseTerminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2710)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2705))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2705)) ;
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
  GALGAS_string var_labelForBlock = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2736)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2739)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mStartBlockName.mAttribute_location, GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (object->mAttribute_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2744)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2744)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2744)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2745))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2742)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2746)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2738))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2738)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2749)) ;
  GALGAS_blockInstructionBlockMap var_blockMap = GALGAS_blockInstructionBlockMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_95364 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_95364.hasCurrentObject ()) {
    {
    var_blockMap.modifier_insertKey (enumerator_95364.current_mBlockName (HERE), enumerator_95364.current_mInstructionList (HERE), enumerator_95364.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_95364.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2753)) ;
    }
    enumerator_95364.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InstructionList joker_95557 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_95560 ; // Joker input parameter
  GALGAS_location joker_95563 ; // Joker input parameter
  var_blockMap.method_searchKey (object->mAttribute_mStartBlockName, joker_95557, joker_95560, joker_95563, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2756)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap = GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2757)) ;
  {
  var_blockInitialBankSelectionMap.modifier_insertKey (object->mAttribute_mStartBlockName, ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2758)) ;
  }
  GALGAS_stringset var_accessibleBlockSet = GALGAS_stringset::constructor_setWithString (object->mAttribute_mStartBlockName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2760)) ;
  GALGAS_stringset var_handledBlockSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2761)) ;
  GALGAS_bool var_continueAccessibilityExploration = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence = GALGAS_bool (false) ;
  if (object->mAttribute_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).isValid ()) {
    uint32_t variant_95968 = object->mAttribute_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)).uintValue () ;
    bool loop_95968 = true ;
    while (loop_95968) {
      loop_95968 = var_continueAccessibilityExploration.isValid () ;
      if (loop_95968) {
        loop_95968 = var_continueAccessibilityExploration.boolValue () ;
      }
      if (loop_95968 && (0 == variant_95968)) {
        loop_95968 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2764)) ;
      }
      if (loop_95968) {
        variant_95968 -- ;
        var_continueAccessibilityExploration = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_96146 (var_accessibleBlockSet.substract_operation (var_handledBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2766)), kEnumeration_up) ;
        while (enumerator_96146.hasCurrentObject ()) {
          var_handledBlockSet.addAssign_operation (enumerator_96146.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2767)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination ;
          GALGAS_location var_endOfBlock ;
          var_blockMap.method_searchKey (enumerator_96146.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2769)), var_instructionList, var_blockTermination, var_endOfBlock, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2768)) ;
          GALGAS_uint var_currentBank ;
          GALGAS_string joker_96544 ; // Joker input parameter
          var_blockInitialBankSelectionMap.method_searchKey (enumerator_96146.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2775)), var_currentBank, joker_96544, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2775)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (enumerator_96146.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776)), var_blockMap.getter_locationForKey (enumerator_96146.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776)) ;
          {
          routine_analyzeInstructionList (var_instructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2777)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator ;
          callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock, var_terminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2795)) ;
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            inCompiler->emitSemanticError (var_endOfBlock, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2807)) ;
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2810)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2814)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2809))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2809)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2817)) ;
          callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination.ptr (), var_accessibleBlockSet, var_blockMap, enumerator_96146.current (HERE), var_currentBank, var_blockInitialBankSelectionMap, var_continuesInSequence, var_continueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2819)) ;
          enumerator_96146.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_98128 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_98128.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_accessibleBlockSet.getter_hasKey (enumerator_98128.current_mBlockName (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2824)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2824)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_98128.current_mBlockName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_2, GALGAS_string ("this block is not accessible from '").add_operation (object->mAttribute_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2825)) ;
    }
    enumerator_98128.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = var_continuesInSequence.boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830)) ;
    GALGAS_string joker_98499 ; // Joker input parameter
    var_blockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2831)), ioArgument_ioCurrentBank, joker_98499, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2831)) ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2833)) ;
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
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mConditionLocation, object->mAttribute_mCondition, constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2873)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2875))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2869)) ;
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
  GALGAS_bitSliceTable joker_100686 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_100686, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2891)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison ;
  GALGAS_bool var_complementaryBranch ;
  switch (object->mAttribute_mComparison.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2905)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2908)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2911)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2914)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2917)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2920)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  }
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2924)).mAttribute_location ;
  const enumGalgasBool test_0 = var_complementaryBranch.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2928))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2928)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2929))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2929)), var_IPICregisterDescription, var_ipicComparison  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2926)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2935))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2935)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2936))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2936)), var_IPICregisterDescription, var_ipicComparison  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2933)) ;
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
  GALGAS_bitSliceTable joker_103129 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_103129, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2955)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2965)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2969))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2969)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2970))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2970)), var_IPICregisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2967)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2977))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2977)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2978))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2978)), var_IPICregisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2975)) ;
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
  GALGAS_bitSliceTable joker_104773 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_104773, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2998)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3008)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3012))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3012)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3013))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3013)), var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3010)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3018))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3018)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3019))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3019)), var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3016)) ;
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
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)).mAttribute_location ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3057))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3057)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)), var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3055)) ;
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
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3077)) ;
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105)), constinArgument_inConditionTrueLabel.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3105)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3106)) ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3108)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3135)), var_conditionTrueLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3137)), var_secondTestBlockTerminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3139)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3134))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3134)) ;
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
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
    GALGAS_ipic_31__38_Block var_targetBlock = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_optimize ;
      const enumGalgasBool test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_ipic_31__38_JumpTerminator temp_4 ;
        if (var_targetBlock.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) {
            temp_4 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_candidate = temp_4 ;
        var_optimize = GALGAS_bool (kIsNotEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (var_candidate.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 61)).mAttribute_string)) ;
      }else if (kBoolFalse == test_3) {
        var_optimize = GALGAS_bool (true) ;
      }
      const enumGalgasBool test_5 = var_optimize.boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outOptimizedTerminator = var_targetBlock.mAttribute_mTerminator ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)) ;
        const GALGAS_ipic_31__38_JumpTerminator temp_6 = object ;
        ioArgument_ioListFileContents.plusAssign_operation(callCategoryGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_6.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 70)) ;
        ioArgument_ioListFileContents.plusAssign_operation(callCategoryGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
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
    outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabelWhenFalse, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 93))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 90)) ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (object->mAttribute_mTargetLabelWhenFalse.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 96)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_optimized = GALGAS_bool (false) ;
    GALGAS_lstring var_targetLabelWhenTrue = object->mAttribute_mTargetLabelWhenTrue ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_targetBlockIndex ;
      constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 102)) ;
      GALGAS_ipic_31__38_Block var_targetBlock = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 103)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 104)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 105)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 104)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_ipic_31__38_JumpTerminator temp_3 ;
        if (var_targetBlock.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) {
            temp_3 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 107)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp = temp_3 ;
        var_targetLabelWhenTrue = var_jp.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 108)) ;
        var_optimized = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mTargetLabelWhenTrue.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 111)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenTrue.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
      }
    }
    GALGAS_lstring var_targetLabelWhenFalse = object->mAttribute_mTargetLabelWhenFalse ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint var_targetBlockIndex ;
      constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 120)) ;
      GALGAS_ipic_31__38_Block var_targetBlock = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 121)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 122)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 122)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38_JumpTerminator temp_6 ;
        if (var_targetBlock.mAttribute_mTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock.mAttribute_mTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock.mAttribute_mTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 125)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp = temp_6 ;
        var_targetLabelWhenFalse = var_jp.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 126)) ;
        var_optimized = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mTargetLabelWhenFalse.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 129)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 130)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenFalse.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
      }
    }
    const enumGalgasBool test_7 = var_optimized.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, var_targetLabelWhenTrue, object->mAttribute_mBranchModeOnTrueLabel, var_targetLabelWhenFalse, object->mAttribute_mBranchModeOnFalseLabel  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 138)) ;
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
  callCategoryMethod_getOptimizedTerminators ((const cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 213)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
    outArgument_outOptimizedTerminator = temp_2 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("useless decf/incf condition should be replaced by decf/incf instruction")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 226)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 228)) ;
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
  callCategoryMethod_getOptimizedTerminators ((const cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 253)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (callCategoryGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 268)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)) ;
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
  callCategoryMethod_getOptimizedTerminators ((const cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 293)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (callCategoryGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 308)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription, object->mAttribute_mComparison  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)) ;
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
  callCategoryMethod_getOptimizedTerminators ((const cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization, ioArgument_ioListFileContents, var_optimizedTrueTerminator, var_optimizedFalseTerminator, var_identicalTerminators, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 333)) ;
  const enumGalgasBool test_1 = var_identicalTerminators.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (callCategoryGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)) ;
    inCompiler->emitSemanticWarning (object->mAttribute_mInstructionLocation, GALGAS_string ("useless condition deleted")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 348)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_optimization.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedTrueTerminator, var_optimizedFalseTerminator, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)) ;
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
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 466)) ;
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
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 479)) ;
  }
  cEnumerator_lstringlist enumerator_18547 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_18547.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_18547.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 485)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 485)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_18547.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 486)) ;
      GALGAS_uint var_blockIndex ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_18547.current_mValue (HERE), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 487)) ;
      GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 488)) ;
      categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 489)) ;
    }
    enumerator_18547.gotoNextObject () ;
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
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 504)) ;
  }
  cEnumerator_lstringlist enumerator_19317 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_19317.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19317.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 510)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 510)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_19317.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 511)) ;
      GALGAS_uint var_blockIndex ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_19317.current_mValue (HERE), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 512)) ;
      GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 513)) ;
      categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 514)) ;
    }
    enumerator_19317.gotoNextObject () ;
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
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 529)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 529)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 530)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 531)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 532)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 533)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 547)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 547)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 548)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 549)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 550)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 551)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 557)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 557)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 558)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 559)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 560)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 561)) ;
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
  callCategoryMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 583)) ;
  callCategoryMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 584)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 605)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 605)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 606)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 607)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 608)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 609)) ;
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
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 623)) ;
  }
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_23726 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_23726.hasCurrentObject ()) {
    callCategoryMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_23726.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 629)) ;
    enumerator_23726.gotoNextObject () ;
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
  callCategoryMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 643)) ;
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
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 686)) ;
  GALGAS_ipic_31__38_Block var_targetBloc = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 687)) ;
  const enumGalgasBool test_1 = constinArgument_inOptimizeFlagStruct.mAttribute_mRemoveEmptyRoutine.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 690)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 689)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 691)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 690)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to empty ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).add_operation (GALGAS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)) ;
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 697))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)) ;
    outArgument_outNOPsubstitution = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoRETLWreplacedByMOVLW.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 701)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 702)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 701)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 702)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_ipic_31__38_RetlwTerminator temp_3 ;
      if (var_targetBloc.mAttribute_mTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) {
          temp_3 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc.mAttribute_mTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc.mAttribute_mTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 704)) ;
        }
      }
      GALGAS_ipic_31__38_RetlwTerminator var_t = temp_3 ;
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to RETLW ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)).add_operation (GALGAS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)) ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 711)), var_t.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 712))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 715)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 714)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 716)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 715)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 716)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outOptimizedInstruction = var_targetBloc.mAttribute_mInstructionList.getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 718)) ;
        outArgument_outOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to single instruction routine ").add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)).add_operation (GALGAS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)) ;
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
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 741)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_28482 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_28482.hasCurrentObject ()) {
    GALGAS_bool var_opt = GALGAS_bool (false) ;
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
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr = temp_1 ;
      GALGAS_uint var_targetBlockIndex ;
      constinArgument_inSymbolTable.method_searchKey (var_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 746)), var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 746)) ;
      GALGAS_ipic_31__38_Block var_targetBloc = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 747)) ;
      const enumGalgasBool test_2 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc.mAttribute_mTerminator.ptr ())).operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 749)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 748)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 751)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 750)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_opt = GALGAS_bool (true) ;
          outArgument_outOptimizationDone = GALGAS_bool (true) ;
          var_optimizedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_new (var_jsr.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 754)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).add_operation (GALGAS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.operator_and (GALGAS_bool (kIsEqual, var_targetBloc.mAttribute_mInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 759)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 758)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_ipic_31__38_SequentialInstruction var_inst = var_targetBloc.mAttribute_mInstructionList.getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)) ;
            const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, callCategoryGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_opt = GALGAS_bool (true) ;
              outArgument_outOptimizationDone = GALGAS_bool (true) ;
              var_optimizedInstructionList.addAssign_operation (var_inst, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 764)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 764)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).add_operation (GALGAS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)) ;
            }
          }
        }
      }
    }
    const enumGalgasBool test_6 = var_opt.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 772)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_optimizedInstructionList.addAssign_operation (enumerator_28482.current_mInstruction (HERE), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 773)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 773)) ;
    }
    enumerator_28482.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedInstructionList, object->mAttribute_mUsesRCALL  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 777)) ;
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
  GALGAS_bool joker_31394 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_31394, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 799)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mSkipIfSet, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 810)) ;
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
  GALGAS_bool joker_32435 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_32435, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 834)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mCompareInstruction, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 845)) ;
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
  GALGAS_bool joker_33459 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_33459, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 868)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 879)) ;
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
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)) ;
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
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_1318 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_1318.hasCurrentObject ()) {
    callCategoryMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_1318.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 39)) ;
    enumerator_1318.gotoNextObject () ;
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
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)) ;
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
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)) ;
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
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)) ;
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
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (object->mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)) ;
  const enumGalgasBool test_0 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 157)) ;
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 159)) ;
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
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@ipic18ReturnTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@ipic18RetlwTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                            const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@ipic18RetfieTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@ipic18JumpTerminator needToInsertJumpInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_JumpTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category getter '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                   const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category getter '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                    const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category getter '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                      const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@ipic18ComputedBraTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                  const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category getter '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                        const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  result_outResult = callCategoryGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)).operator_and (callCategoryGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 262)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                   extensionGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (defineCategoryGetter_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category getter '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                        const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outResult = callCategoryGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 271)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                   extensionGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (defineCategoryGetter_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@pic18TestRegisterTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                  const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outResult = callCategoryGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 280)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (void) {
  enterCategoryGetter_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                   extensionGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (defineCategoryGetter_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction, NULL) ;

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
                                                                                                                GALGAS_uint & outArgument_outStackNeeds,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  GALGAS_uint var_trueStackNeeds ;
  callCategoryMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_trueStackNeeds, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 41)) ;
  GALGAS_uint var_falseStackNeeds ;
  callCategoryMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_falseStackNeeds, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 46)) ;
  GALGAS_uint temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_trueStackNeeds.objectCompare (var_falseStackNeeds)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = var_trueStackNeeds ;
  }else if (kBoolFalse == test_1) {
    temp_0 = var_falseStackNeeds ;
  }
  outArgument_outStackNeeds = temp_0 ;
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
                                                                                                            GALGAS_uint & outArgument_outStackNeeds,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 1U) ;
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
                                                                                                     GALGAS_uint & outArgument_outStackNeeds,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
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
                                                                                                    GALGAS_uint & outArgument_outStackNeeds,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
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
                                                                                                     GALGAS_uint & outArgument_outStackNeeds,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
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
  ioArgument_ioRoutineCalledSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 168)) ;
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
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_5667 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_5667.hasCurrentObject ()) {
    callCategoryMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_5667.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 176)) ;
    enumerator_5667.gotoNextObject () ;
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
  callCategoryMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 184)) ;
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
                                                                                  const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
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
                                                                                 const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
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
                                                                                  const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
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
    GALGAS_uint var_min ;
    GALGAS_uint var_max ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mLabel, var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 64)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outMin = var_min ;
      outArgument_outMax = var_max ;
    }else if (kBoolFalse == test_1) {
      outArgument_outMin = GALGAS_uint ((uint32_t) 2U).add_operation (var_min, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 69)) ;
      outArgument_outMax = GALGAS_uint ((uint32_t) 2U).add_operation (var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 70)) ;
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 73)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
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
//                 Overriding category method '@pic18TestRegisterTerminator terminatorMinMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                       const GALGAS_string constinArgument_inNextLabel,
                                                                                       GALGAS_uint & outArgument_outMin,
                                                                                       GALGAS_uint & outArgument_outMax,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_uint var_trueMin ;
  GALGAS_uint var_trueMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin, var_trueMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 86)) ;
  GALGAS_uint var_falseMin ;
  GALGAS_uint var_falseMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, GALGAS_string::makeEmptyString (), var_falseMin, var_falseMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 87)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin.objectCompare (var_trueMax)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin.objectCompare (var_falseMax)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callCategoryGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 89)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 90)) ;
      GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 91)) ;
      GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 92)) ;
      GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 93)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration.objectCompare (var_trueBranchMinDuration)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_falseBranchMinDuration ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_trueBranchMinDuration ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration.objectCompare (var_trueBranchMaxDuration)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_falseBranchMaxDuration ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_trueBranchMaxDuration ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 97)) ;
      GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 98)) ;
      GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 99)) ;
      GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 100)) ;
      GALGAS_uint temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration.objectCompare (var_trueBranchMinDuration)).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = var_falseBranchMinDuration ;
      }else if (kBoolFalse == test_8) {
        temp_7 = var_trueBranchMinDuration ;
      }
      outArgument_outMin = temp_7 ;
      GALGAS_uint temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration.objectCompare (var_trueBranchMaxDuration)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = var_falseBranchMaxDuration ;
      }else if (kBoolFalse == test_10) {
        temp_9 = var_trueBranchMaxDuration ;
      }
      outArgument_outMax = temp_9 ;
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 105)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
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

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                             const GALGAS_string constinArgument_inNextLabel,
                                                                                             GALGAS_uint & outArgument_outMin,
                                                                                             GALGAS_uint & outArgument_outMax,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_uint var_trueMin ;
  GALGAS_uint var_trueMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin, var_trueMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 118)) ;
  GALGAS_uint var_falseMin ;
  GALGAS_uint var_falseMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin, var_falseMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 119)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin.objectCompare (var_trueMax)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin.objectCompare (var_falseMax)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callCategoryGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 122)) ;
      GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 123)) ;
      GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 124)) ;
      GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 125)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration.objectCompare (var_trueBranchMinDuration)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_falseBranchMinDuration ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_trueBranchMinDuration ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration.objectCompare (var_trueBranchMaxDuration)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_falseBranchMaxDuration ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_trueBranchMaxDuration ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 129)) ;
      GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 130)) ;
      GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 131)) ;
      GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 132)) ;
      GALGAS_uint temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration.objectCompare (var_trueBranchMinDuration)).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = var_falseBranchMinDuration ;
      }else if (kBoolFalse == test_8) {
        temp_7 = var_trueBranchMinDuration ;
      }
      outArgument_outMin = temp_7 ;
      GALGAS_uint temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration.objectCompare (var_trueBranchMaxDuration)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = var_falseBranchMaxDuration ;
      }else if (kBoolFalse == test_10) {
        temp_9 = var_trueBranchMaxDuration ;
      }
      outArgument_outMax = temp_9 ;
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 137)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
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

static void categoryMethod_pic_31__38_BitTestTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                  const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                  const GALGAS_string constinArgument_inNextLabel,
                                                                                  GALGAS_uint & outArgument_outMin,
                                                                                  GALGAS_uint & outArgument_outMax,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  GALGAS_uint var_trueMin ;
  GALGAS_uint var_trueMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin, var_trueMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 150)) ;
  GALGAS_uint var_falseMin ;
  GALGAS_uint var_falseMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin, var_falseMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 151)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin.objectCompare (var_trueMax)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin.objectCompare (var_falseMax)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callCategoryGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 154)) ;
      GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 155)) ;
      GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 156)) ;
      GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 157)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration.objectCompare (var_trueBranchMinDuration)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_falseBranchMinDuration ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_trueBranchMinDuration ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration.objectCompare (var_trueBranchMaxDuration)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_falseBranchMaxDuration ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_trueBranchMaxDuration ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, callCategoryGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 161)) ;
        GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 162)) ;
        GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 163)) ;
        GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 164)) ;
        GALGAS_uint temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration.objectCompare (var_trueBranchMinDuration)).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = var_falseBranchMinDuration ;
        }else if (kBoolFalse == test_9) {
          temp_8 = var_trueBranchMinDuration ;
        }
        outArgument_outMin = temp_8 ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration.objectCompare (var_trueBranchMaxDuration)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_falseBranchMaxDuration ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_trueBranchMaxDuration ;
        }
        outArgument_outMax = temp_10 ;
      }else if (kBoolFalse == test_7) {
        GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 168)) ;
        GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 169)) ;
        GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 170)) ;
        GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 171)) ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration.objectCompare (var_falseBranchMinDuration)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_trueBranchMinDuration ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_falseBranchMinDuration ;
        }
        outArgument_outMin = temp_12 ;
        GALGAS_uint temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration.objectCompare (var_falseBranchMaxDuration)).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = var_trueBranchMaxDuration ;
        }else if (kBoolFalse == test_15) {
          temp_14 = var_falseBranchMaxDuration ;
        }
        outArgument_outMax = temp_14 ;
      }
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 176)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
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
//               Overriding category method '@ipic18ConditionalJumpTerminator terminatorMinMaxDuration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
    GALGAS_uint var_trueMin ;
    GALGAS_uint var_trueMax ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_trueMin, var_trueMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 190)) ;
    GALGAS_uint var_falseMin ;
    GALGAS_uint var_falseMax ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_falseMin, var_falseMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 191)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextLabel)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 193)) ;
      GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 194)) ;
      GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 195)) ;
      GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 196)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration.objectCompare (var_falseBranchMinDuration)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_trueBranchMinDuration ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_falseBranchMinDuration ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration.objectCompare (var_falseBranchMaxDuration)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_trueBranchMaxDuration ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_falseBranchMaxDuration ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextLabel)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 200)) ;
        GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 201)) ;
        GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 202)) ;
        GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 203)) ;
        GALGAS_uint temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration.objectCompare (var_falseBranchMinDuration)).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = var_trueBranchMinDuration ;
        }else if (kBoolFalse == test_9) {
          temp_8 = var_falseBranchMinDuration ;
        }
        outArgument_outMin = temp_8 ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration.objectCompare (var_falseBranchMaxDuration)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_trueBranchMaxDuration ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_falseBranchMaxDuration ;
        }
        outArgument_outMax = temp_10 ;
      }else if (kBoolFalse == test_7) {
        GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 3U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 207)) ;
        GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 3U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 208)) ;
        GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 209)) ;
        GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 210)) ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration.objectCompare (var_falseBranchMinDuration)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_trueBranchMinDuration ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_falseBranchMinDuration ;
        }
        outArgument_outMin = temp_12 ;
        GALGAS_uint temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration.objectCompare (var_falseBranchMaxDuration)).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = var_trueBranchMaxDuration ;
        }else if (kBoolFalse == test_15) {
          temp_14 = var_falseBranchMaxDuration ;
        }
        outArgument_outMax = temp_14 ;
      }
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 215)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
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
//                Overriding category method '@ipic18IncDecRegisterTerminator terminatorMinMaxDuration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                          const GALGAS_string constinArgument_inNextLabel,
                                                                                          GALGAS_uint & outArgument_outMin,
                                                                                          GALGAS_uint & outArgument_outMax,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  GALGAS_uint var_trueMin ;
  GALGAS_uint var_trueMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin, var_trueMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 228)) ;
  GALGAS_uint var_falseMin ;
  GALGAS_uint var_falseMax ;
  callCategoryMethod_duration ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin, var_falseMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 229)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsInfOrEqual, var_trueMin.objectCompare (var_trueMax)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsInfOrEqual, var_falseMin.objectCompare (var_falseMax)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, callCategoryGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 231)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 232)) ;
      GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 233)) ;
      GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 234)) ;
      GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 235)) ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration.objectCompare (var_falseBranchMinDuration)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = var_trueBranchMinDuration ;
      }else if (kBoolFalse == test_4) {
        temp_3 = var_falseBranchMinDuration ;
      }
      outArgument_outMin = temp_3 ;
      GALGAS_uint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration.objectCompare (var_falseBranchMaxDuration)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_trueBranchMaxDuration ;
      }else if (kBoolFalse == test_6) {
        temp_5 = var_falseBranchMaxDuration ;
      }
      outArgument_outMax = temp_5 ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, callCategoryGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 238)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 239)) ;
        GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 240)) ;
        GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 241)) ;
        GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 242)) ;
        GALGAS_uint temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_falseBranchMinDuration.objectCompare (var_trueBranchMinDuration)).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = var_falseBranchMinDuration ;
        }else if (kBoolFalse == test_9) {
          temp_8 = var_trueBranchMinDuration ;
        }
        outArgument_outMin = temp_8 ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_falseBranchMaxDuration.objectCompare (var_trueBranchMaxDuration)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_falseBranchMaxDuration ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_trueBranchMaxDuration ;
        }
        outArgument_outMax = temp_10 ;
      }else if (kBoolFalse == test_7) {
        GALGAS_uint var_trueBranchMinDuration = var_trueMin.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 246)) ;
        GALGAS_uint var_trueBranchMaxDuration = var_trueMax.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 247)) ;
        GALGAS_uint var_falseBranchMinDuration = var_falseMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 248)) ;
        GALGAS_uint var_falseBranchMaxDuration = var_falseMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 249)) ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsStrictInf, var_trueBranchMinDuration.objectCompare (var_falseBranchMinDuration)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_trueBranchMinDuration ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_falseBranchMinDuration ;
        }
        outArgument_outMin = temp_12 ;
        GALGAS_uint temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_trueBranchMaxDuration.objectCompare (var_falseBranchMaxDuration)).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = var_trueBranchMaxDuration ;
        }else if (kBoolFalse == test_15) {
          temp_14 = var_falseBranchMaxDuration ;
        }
        outArgument_outMax = temp_14 ;
      }
    }
  }else if (kBoolFalse == test_1) {
    outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 254)) ;
    outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  }
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

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_bool var_solved = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_12672 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  bool bool_0 = var_solved.isValidAndTrue () ;
  if (enumerator_12672.hasCurrentObject () && bool_0) {
    while (enumerator_12672.hasCurrentObject () && bool_0) {
      var_solved = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_12672.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 272)) ;
      enumerator_12672.gotoNextObject () ;
      if (enumerator_12672.hasCurrentObject ()) {
        bool_0 = var_solved.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved.boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_12806 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    while (enumerator_12806.hasCurrentObject ()) {
      GALGAS_uint var_min ;
      GALGAS_uint var_max ;
      constinArgument_inExploredBlockMap.method_searchKey (enumerator_12806.current_mValue (HERE), var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 277)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_min.objectCompare (outArgument_outMin)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outMin = var_min ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_max.objectCompare (outArgument_outMax)).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outMax = var_max ;
      }
      enumerator_12806.gotoNextObject () ;
    }
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 12U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 286)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 12U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 287)) ;
  }
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

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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

static void categoryMethod_ipic_31__38_ComputedBraTerminator_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_bool var_solved = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_13959 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  bool bool_0 = var_solved.isValidAndTrue () ;
  if (enumerator_13959.hasCurrentObject () && bool_0) {
    while (enumerator_13959.hasCurrentObject () && bool_0) {
      var_solved = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_13959.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 319)) ;
      enumerator_13959.gotoNextObject () ;
      if (enumerator_13959.hasCurrentObject ()) {
        bool_0 = var_solved.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved.boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_14093 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    while (enumerator_14093.hasCurrentObject ()) {
      GALGAS_uint var_min ;
      GALGAS_uint var_max ;
      constinArgument_inExploredBlockMap.method_searchKey (enumerator_14093.current_mValue (HERE), var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 324)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_min.objectCompare (outArgument_outMin)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outMin = var_min ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_max.objectCompare (outArgument_outMax)).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outMax = var_max ;
      }
      enumerator_14093.gotoNextObject () ;
    }
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 11U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 333)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 11U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 334)) ;
  }
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
//                            Overriding category method '@ipic18ReturnTerminator duration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * /* inObject */,
                                                                  const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                  const GALGAS_string /* constinArgument_inNextLabel */,
                                                                  GALGAS_uint & outArgument_outMin,
                                                                  GALGAS_uint & outArgument_outMax,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_duration (void) {
  enterCategoryMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                categoryMethod_ipic_31__38_ReturnTerminator_duration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_duration (defineCategoryMethod_ipic_31__38_ReturnTerminator_duration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@ipic18RetlwTerminator duration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * /* inObject */,
                                                                 const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                 const GALGAS_string /* constinArgument_inNextLabel */,
                                                                 GALGAS_uint & outArgument_outMin,
                                                                 GALGAS_uint & outArgument_outMax,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_duration (void) {
  enterCategoryMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                categoryMethod_ipic_31__38_RetlwTerminator_duration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_duration (defineCategoryMethod_ipic_31__38_RetlwTerminator_duration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@ipic18RetfieTerminator duration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * /* inObject */,
                                                                  const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                  const GALGAS_string /* constinArgument_inNextLabel */,
                                                                  GALGAS_uint & outArgument_outMin,
                                                                  GALGAS_uint & outArgument_outMax,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_duration (void) {
  enterCategoryMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                categoryMethod_ipic_31__38_RetfieTerminator_duration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_duration (defineCategoryMethod_ipic_31__38_RetfieTerminator_duration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@ipic18JumpTerminator duration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
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
    GALGAS_uint var_min ;
    GALGAS_uint var_max ;
    constinArgument_inExploredBlockMap.method_searchKey (object->mAttribute_mLabel, var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 393)) ;
    outArgument_outMin = var_min ;
    outArgument_outMax = var_max ;
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
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_duration (void) {
  enterCategoryMethod_duration (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                categoryMethod_ipic_31__38_JumpTerminator_duration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_duration (defineCategoryMethod_ipic_31__38_JumpTerminator_duration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18_intermediate_instruction_TBLRD minMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                GALGAS_uint & outArgument_outMin,
                                                                                                GALGAS_uint & outArgument_outMax,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18_intermediate_instruction_TBLWT minMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                GALGAS_uint & outArgument_outMin,
                                                                                                GALGAS_uint & outArgument_outMax,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_MNOP minMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18_intermediate_instruction_NOPBRA minMaxDuration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_LFSR minMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                               GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                               GALGAS_uint & outArgument_outMin,
                                                                                               GALGAS_uint & outArgument_outMax,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18_intermediate_instruction_MOVFF minMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                                GALGAS_uint & outArgument_outMin,
                                                                                                GALGAS_uint & outArgument_outMax,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 2U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 2U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@ipic18_intermediate_JSR minMaxDuration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_condition_skip_instruction minMaxDuration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            GALGAS_blockDurationMap inArgument_inExploredBlockMap,
                                                                                            GALGAS_uint & outArgument_outMin,
                                                                                            GALGAS_uint & outArgument_outMax,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inArgument_inExploredBlockMap, outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 509)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, outArgument_outMin.objectCompare (outArgument_outMax)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 511)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 512)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                      categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_minMaxDuration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18_intermediate_instruction_computed_rcall minMaxDuration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                            GALGAS_blockDurationMap inArgument_inExploredBlockMap,
                                                                                                            GALGAS_uint & outArgument_outMin,
                                                                                                            GALGAS_uint & outArgument_outMax,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  outArgument_outMin = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 523)) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_solved = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_20020 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  bool bool_0 = var_solved.isValidAndTrue () ;
  if (enumerator_20020.hasCurrentObject () && bool_0) {
    while (enumerator_20020.hasCurrentObject () && bool_0) {
      GALGAS_uint var_min ;
      GALGAS_uint var_max ;
      callCategoryMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_20020.current_mInstruction (HERE).ptr (), inArgument_inExploredBlockMap, var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 527)) ;
      var_solved = GALGAS_bool (kIsInfOrEqual, var_min.objectCompare (var_max)) ;
      enumerator_20020.gotoNextObject () ;
      if (enumerator_20020.hasCurrentObject ()) {
        bool_0 = var_solved.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved.boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_20191 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
    GALGAS_uint index_20156 ((uint32_t) 0) ;
    while (enumerator_20191.hasCurrentObject ()) {
      GALGAS_uint var_min ;
      GALGAS_uint var_max ;
      callCategoryMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_20191.current_mInstruction (HERE).ptr (), inArgument_inExploredBlockMap, var_min, var_max, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 532)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, index_20156.objectCompare (object->mAttribute_mTargetInstructions.getter_length (SOURCE_FILE ("ipic18_duration_computations.galgas", 534)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 534)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_min = var_min.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 535)) ;
        var_max = var_max.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 536)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_min.objectCompare (outArgument_outMin)).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outMin = var_min ;
      }
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_max.objectCompare (outArgument_outMax)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outMax = var_max ;
      }
      enumerator_20191.gotoNextObject () ;
      index_20156.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 531)) ;
    }
    outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint ((uint32_t) 10U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 546)) ;
    outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint ((uint32_t) 10U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 547)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                      categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_minMaxDuration, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSize.getter_uint (SOURCE_FILE ("ram_sections.galgas", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSize.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("zero size is not allowed")  COMMA_SOURCE_FILE ("ram_sections.galgas", 27)) ;
  }
  GALGAS_uintlist var_addressList = GALGAS_uintlist::constructor_listWithValue (var_firstFreeAddress  COMMA_SOURCE_FILE ("ram_sections.galgas", 29)) ;
  cEnumerator_uintlist enumerator_1210 (var_mirrorOffsetList, kEnumeration_up) ;
  while (enumerator_1210.hasCurrentObject ()) {
    var_addressList.addAssign_operation (var_firstFreeAddress.add_operation (enumerator_1210.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 31))  COMMA_SOURCE_FILE ("ram_sections.galgas", 31)) ;
    enumerator_1210.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = ioArgument_ioDeclaredByteMap.getter_hasKey (object->mAttribute_mName.mAttribute_string COMMA_SOURCE_FILE ("ram_sections.galgas", 33)).operator_not (SOURCE_FILE ("ram_sections.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioDeclaredByteMap.modifier_insertKey (object->mAttribute_mName, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 34)) ;
    }
  }
  {
  ioArgument_ioRegisterTable.modifier_insertKey (object->mAttribute_mName, var_addressList, object->mAttribute_mSize.getter_uint (SOURCE_FILE ("ram_sections.galgas", 36)), object->mAttribute_mBitSliceTable, object->mAttribute_mBitDefinitionString, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 36)) ;
  }
  var_firstFreeAddress = var_firstFreeAddress.add_operation (object->mAttribute_mSize.getter_uint (SOURCE_FILE ("ram_sections.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 37)) ;
  {
  ioArgument_ioRamBank.modifier_setMFirstFreeAddressForKey (var_firstFreeAddress, constinArgument_inCurrentRamBank.getter_string (SOURCE_FILE ("ram_sections.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 38)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress.objectCompare (var_lastAddressPlusOne)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("overflow in '").add_operation (constinArgument_inCurrentRamBank.getter_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' ram bank for '"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (object->mAttribute_mName.getter_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40))  COMMA_SOURCE_FILE ("ram_sections.galgas", 40)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_byteDeclarationInRam_handleDeclaration (void) {
  enterCategoryMethod_handleDeclaration (kTypeDescriptor_GALGAS_byteDeclarationInRam.mSlotID,
                                         categoryMethod_byteDeclarationInRam_handleDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_byteDeclarationInRam_handleDeclaration (defineCategoryMethod_byteDeclarationInRam_handleDeclaration, NULL) ;

