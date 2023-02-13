#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_bool var_isNoReturn_23118 ;
  GALGAS_uint var_requiredBank_23136 ;
  GALGAS_uint var_returnedBank_23154 ;
  GALGAS_bool var_preservesBank_23173 ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_23118, var_requiredBank_23136, var_returnedBank_23154, var_preservesBank_23173, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 637)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_23136.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_23136.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_2 = this ;
      GALGAS_string var_errorMessage_23276 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (var_requiredBank_23136.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)) ;
      var_errorMessage_23276.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 640)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_23276.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 642)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_23276.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_CALL temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23276, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 646)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_23118.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 649)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_23173.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23154 ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_CALL temp_10 = this ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_bool var_isNoReturn_24692 ;
  GALGAS_uint var_requiredBank_24710 ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  GALGAS_uint joker_24712 ; // Joker input parameter
  GALGAS_bool joker_24715 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_24692, var_requiredBank_24710, joker_24712, joker_24715, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 676)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_24710.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_24710.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_2 = this ;
      GALGAS_string var_errorMessage_24819 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (var_requiredBank_24710.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)) ;
      var_errorMessage_24819.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 679)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_24819.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 681)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_24819.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_24819, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 685)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_24692.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 687)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 688)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_9 = this ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 695)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 696))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_bool var_isNoReturn_26276 ;
  GALGAS_uint var_requiredBank_26294 ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  GALGAS_uint joker_26296 ; // Joker input parameter
  GALGAS_bool joker_26299 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26276, var_requiredBank_26294, joker_26296, joker_26299, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 715)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_26294.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_26294.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_2 = this ;
      GALGAS_string var_errorMessage_26403 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (var_requiredBank_26294.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)) ;
      var_errorMessage_26403.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 718)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_26403.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 720)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_26403.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26403, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 724)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_26276.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 726)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 727)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_9 = this ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 731))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 731)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
  const GALGAS_midrange_5F_instruction_5F_CLRWDT temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 751))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 751)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
  const GALGAS_midrange_5F_instruction_5F_CLRW temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 770))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 770)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
  const GALGAS_midrange_5F_instruction_5F_NOP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 789))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 789)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
  const GALGAS_midrange_5F_instruction_5F_SLEEP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 808))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 808)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
  GALGAS_sint_36__34_ var_result_30883 ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30883, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 827)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_30883.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_result_30883.objectCompare (GALGAS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 829)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_literalOperation temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_30883.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_4 = this ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_30883.operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 833))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 833)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 856)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_4 = this ;
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 859))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 859)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 881)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 884)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_33190 = ioArgument_ioCurrentBank ;
  GALGAS_string var_label_30__33227 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 889)) ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__33227, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)) ;
  {
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleMidrangeInstructionList (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33190, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 891)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33190)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GALGAS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_9 = this ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_9.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_30__33227, temp_10.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 912))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 910))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 910)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_sint_36__34_ var_lowerBound_34842 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34842, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 933)) ;
  GALGAS_sint_36__34_ var_upperBound_34952 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_34952, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 934)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_lowerBound_34842.objectCompare (var_upperBound_34952)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_34842.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (var_upperBound_34952.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_upperBound_34952.substract_operation (var_lowerBound_34842, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 938)).objectCompare (GALGAS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_34952.substract_operation (var_lowerBound_34842, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_35356 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_35394 = constinArgument_inConstantMap ;
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_35394.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_34842, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 944)) ;
  }
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleMidrangeInstructionList (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35394, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35356, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 945)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35356)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 961)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 963)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list contains an endless loop"), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 964)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_36114 = var_lowerBound_34842.add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 967)) ;
  if (var_upperBound_34952.substract_operation (var_lowerBound_34842, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).isValid ()) {
    uint32_t variant_36138 = var_upperBound_34952.substract_operation (var_lowerBound_34842, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).uintValue () ;
    bool loop_36138 = true ;
    while (loop_36138) {
      GALGAS_bool test_16 = GALGAS_bool (kIsInfOrEqual, var_idx_36114.objectCompare (var_upperBound_34952)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      }
      loop_36138 = test_16.isValid () ;
      if (loop_36138) {
        loop_36138 = test_16.boolValue () ;
      }
      if (loop_36138 && (0 == variant_36138)) {
        loop_36138 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)) ;
      }
      if (loop_36138) {
        variant_36138 -- ;
        GALGAS_constantMap var_constantMap_36251 = constinArgument_inConstantMap ;
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = this ;
        var_constantMap_36251.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_36114, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)) ;
        }
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = this ;
        routine_handleMidrangeInstructionList (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36251, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 971)) ;
        }
        var_idx_36114.plusAssign_operation(GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 986)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37470 ;
  GALGAS_bitSliceTable var_bitSliceTable_37493 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37470, var_bitSliceTable_37493, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1005)) ;
  GALGAS_uint var_bitNumber_37651 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37493, var_bitNumber_37651, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1014)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37470, var_bitNumber_37651  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1021))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1021)) ;
  GALGAS_bool var_unusedContinuesInSequence_37904 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_37904, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1029)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
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
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39779 ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_0 = this ;
  GALGAS_bitSliceTable joker_39785 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39779, joker_39785, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1081)) ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_2 = this ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_IPICregisterDescription_39779, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1097))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1091))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1091)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_computeInstructionCountForCondition (const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                             GALGAS_uint & outArgument_outInstructionCount,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1105)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstructionCount = GALGAS_uint (uint32_t (3U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outInstructionCount = GALGAS_uint (uint32_t (2U)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
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
  const GALGAS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1132)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1126)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_computeInstructionCountForCondition (const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                   GALGAS_uint & outArgument_outInstructionCount,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1147)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1146)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_andCondition temp_1 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1167)) ;
      const GALGAS_midrange_5F_andCondition temp_2 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1180)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__42918 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    const GALGAS_midrange_5F_andCondition temp_3 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__42918, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1195)) ;
    const GALGAS_midrange_5F_andCondition temp_4 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1208)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__42918, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_computeInstructionCountForCondition (const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                GALGAS_uint & outArgument_outInstructionCount,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_countLeft_44098 ;
  const GALGAS_midrange_5F_andCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_44098, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1230)) ;
  GALGAS_uint var_countRight_44209 ;
  const GALGAS_midrange_5F_andCondition temp_1 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44209, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1234)) ;
  outArgument_outInstructionCount = var_countLeft_44098.add_operation (var_countRight_44209, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1238)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
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
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_45009 ;
  GALGAS_bitSliceTable var_bitSliceTable_45032 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_45009, var_bitSliceTable_45032, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1255)) ;
  GALGAS_uint var_bitNumber_45190 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_45032, var_bitNumber_45190, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1264)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_45009, var_bitNumber_45190  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1271))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1271)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1279)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1280)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1281))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1277))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1277)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_computeInstructionCountForCondition (const GALGAS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                  GALGAS_uint & outArgument_outInstructionCount,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GALGAS_uint (uint32_t (2U)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_bool var_generateComplementaryCondition_46573 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_directCount_46704 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GALGAS_bool (true), var_directCount_46704, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1311)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_3 = this ;
        test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1312)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_directCount_46704.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1313)) ;
        }
      }
      GALGAS_uint var_complementaryCount_46894 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_4 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GALGAS_bool (false), var_complementaryCount_46894, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1315)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_6 = this ;
        test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1316)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_complementaryCount_46894.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1317)) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsStrictInf, var_complementaryCount_46894.objectCompare (var_directCount_46704)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_generateComplementaryCondition_46573 = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GALGAS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (var_directCount_46704.substract_operation (var_complementaryCount_46894, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GALGAS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_directCount_46704.substract_operation (var_complementaryCount_46894, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1324)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1326)) ;
        }
      }
    }
  }
  GALGAS_uint var_elseBranchFinalBank_47529 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_47577 = ioArgument_ioCurrentBank ;
  GALGAS_bool var_elseContinuesInSequence_47629 ;
  GALGAS_bool var_thenContinuesInSequence_47665 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_46573.boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string var_label_5F_nextCondition_47749 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      GALGAS_string var_label_5F_endOfIfinstruction_47849 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_10 = this ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_11 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_47749, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_12 = this ;
      routine_handleMidrangeInstructionList (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47529, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47629, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1352)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_14 = this ;
        test_13 = GALGAS_bool (kIsStrictSup, temp_14.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1368)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_15 = this ;
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_16 = this ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_15.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47849, temp_16.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_47749, temp_17.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_18 = this ;
      routine_handleMidrangeInstructionList (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47577, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47665, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1372)) ;
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_20 = this ;
        test_19 = GALGAS_bool (kIsStrictSup, temp_20.readProperty_mThenInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1387)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_21 = this ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47849, temp_21.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_label_5F_nextCondition_49741 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_49841 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_22 = this ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_23 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_49741, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_24 = this ;
    routine_handleMidrangeInstructionList (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47577, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47665, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1409)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_26 = this ;
      test_25 = GALGAS_bool (kIsStrictSup, temp_26.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1425)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_27 = this ;
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_28 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_27.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49841, temp_28.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426)) ;
      }
    }
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_29 = this ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_49741, temp_29.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_30 = this ;
    routine_handleMidrangeInstructionList (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47529, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47629, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1429)) ;
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_32 = this ;
      test_31 = GALGAS_bool (kIsStrictSup, temp_32.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1444)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_31) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_33 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49841, temp_33.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445)) ;
      }
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    test_34 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_47529.objectCompare (var_thenBranchFinalBank_47577)).boolEnum () ;
    if (kBoolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_47529 ;
    }
  }
  if (kBoolFalse == test_34) {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_35 = this ;
    TC_Array <C_FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451)) ;
    var_elseBranchFinalBank_47529 = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47665.operator_or (var_elseContinuesInSequence_47629 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1455)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_string var_labelInstructionBegin_52702 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_52702, temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
  GALGAS_uint var_finalBank_52979 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleMidrangeInstructionList (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_52979, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1479)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_52979)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1495)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_5 = this ;
  cEnumerator_midrange_5F_partList enumerator_53559 (temp_5.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_53559.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, enumerator_53559.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1499)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_7 = this ;
        callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53559.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_52702, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_string var_nextBranchLabel_54030 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_8 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53559.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_54030, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1515)) ;
      GALGAS_uint var_bank_54460 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList (enumerator_53559.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54460, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1529)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54460)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_53559.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1545)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_11 = this ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_12 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_11.readProperty_mInstructionLocation (), GALGAS_lstring::constructor_new (var_labelInstructionBegin_52702, temp_12.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_54030, temp_13.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548)) ;
    }
    enumerator_53559.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
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
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_55982 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_55982 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1571)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_baseCode_55982 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_56306 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  GALGAS_bitSliceTable joker_56312 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_56306, joker_56312, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1576)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_3.readProperty_mInstructionLocation (), var_baseCode_55982, var_IPICregisterDescription_56306, temp_4.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1586))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1586)) ;
  GALGAS_bool var_unusedContinuesInSequence_56571 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56571, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1594)) ;
}
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
  GALGAS_string var_generationOptimizationMessages_57485 = GALGAS_string::makeEmptyString () ;
  GALGAS_routineMap var_routineMap_57559 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1626)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_57664 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_57664.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_57664.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57664.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_57664.current_mRequiredBank (HERE).readProperty_location (), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1629)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_57664.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57664.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_57664.current_mReturnedBank (HERE).readProperty_location (), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1632)) ;
      }
    }
    {
    var_routineMap_57559.setter_insertKey (enumerator_57664.current_mRoutineName (HERE), enumerator_57664.current_mIsNoReturn (HERE), enumerator_57664.current_mRequiredBank (HERE).readProperty_uint (), enumerator_57664.current_mReturnedBank (HERE).readProperty_uint (), enumerator_57664.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1634)) ;
    }
    enumerator_57664.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1652)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_routineMap_57559.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_bool var_isNoReturn_59251 ;
      GALGAS_uint var_requiredBank_59275 ;
      GALGAS_uint joker_59277 ; // Joker input parameter
      GALGAS_bool joker_59280 ; // Joker input parameter
      var_routineMap_57559.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), var_isNoReturn_59251, var_requiredBank_59275, joker_59277, joker_59280, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
      GALGAS_location var_mainDeclarationLocation_59324 = var_routineMap_57559.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1660)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_isNoReturn_59251.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59324, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1662)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_59275.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59324, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_5) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1668)) ;
  }
  GALGAS_uint var_localLabelIndex_59899 = GALGAS_uint (uint32_t (0U)) ;
  {
  routine_handleInterruptRoutine (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57559, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57485, var_localLabelIndex_59899, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1672)) ;
  }
  GALGAS_uint var_currentPage_60325 = GALGAS_uint (uint32_t (0U)) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_60336 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_60336 = true ;
    while (loop_60336) {
      loop_60336 = GALGAS_bool (kIsStrictInf, var_currentPage_60325.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_60336) {
        loop_60336 = GALGAS_bool (kIsStrictInf, var_currentPage_60325.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_60336 && (0 == variant_60336)) {
        loop_60336 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1689)) ;
      }
      if (loop_60336) {
        variant_60336 -- ;
        GALGAS_bool var_orgGenerated_60422 = GALGAS_bool (kIsEqual, var_currentPage_60325.objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_60567 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
        while (enumerator_60567.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_60567.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_60325)).boolEnum () ;
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_orgGenerated_60422.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (var_currentPage_60325.multiply_operation (GALGAS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694)) ;
                  var_orgGenerated_60422 = GALGAS_bool (true) ;
                }
              }
              GALGAS_uint var_currentBank_60862 = enumerator_60567.current_mRequiredBank (HERE).readProperty_uint () ;
              GALGAS_routineKind var_routineKind_60920 ;
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = enumerator_60567.current_mIsNoReturn (HERE).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_routineKind_60920 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1700)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_routineKind_60920 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1702)) ;
              }
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_60567.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1704))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1704)) ;
              GALGAS_bool var_continuesInSequence_61550 ;
              {
              routine_handleMidrangeInstructionList (enumerator_60567.current_mInstructionList (HERE), var_routineMap_57559, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_59899, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57485, constinArgument_inTotalBankCount, var_currentBank_60862, enumerator_60567.current_mPreservesBank (HERE), var_continuesInSequence_61550, var_routineKind_60920, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1705)) ;
              }
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = enumerator_60567.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_60567.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_60862.objectCompare (enumerator_60567.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_60567.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_60567.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)) ;
                }
              }
              enumGalgasBool test_16 = kBoolTrue ;
              if (kBoolTrue == test_16) {
                test_16 = enumerator_60567.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_61550 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <C_FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_60567.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1724)) ;
                }
              }
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = enumerator_60567.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1727)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (enumerator_60567.current_mRoutineName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
                }
              }
            }
          }
          enumerator_60567.gotoNextObject () ;
        }
        var_currentPage_60325.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)) ;
      GALGAS_uint var_idx_62675 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_uint var_currentAddress_62708 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62734 (outArgument_outGeneratedInstructionList, kENUMERATION_UP) ;
      while (enumerator_62734.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62734.current_mInstruction (HERE).ptr (), var_currentAddress_62708, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1743)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_idx_62675.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).getter_stringByLeftPadding (GALGAS_uint (uint32_t (5U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)) ;
        callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62734.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1745)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)) ;
        var_idx_62675.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
        enumerator_62734.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62708.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)).add_operation (GALGAS_string (" instructions.\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("PCLATH should be saved ?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1761)) ;
  outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_63558 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_63558.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_63558.current_mPage (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GALGAS_bool (true) ;
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsSupOrEqual, enumerator_63558.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_63558.current_mPage (HERE).readProperty_location (), GALGAS_string ("invalid value (").add_operation (enumerator_63558.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)) ;
      }
    }
    enumerator_63558.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_64135 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
      if (enumerator_64135.hasCurrentObject () && bool_5) {
        while (enumerator_64135.hasCurrentObject () && bool_5) {
          cEnumerator_midrange_5F_instructionList enumerator_64237 (enumerator_64135.current_mInstructionList (HERE), kENUMERATION_UP) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
          if (enumerator_64237.hasCurrentObject () && bool_6) {
            while (enumerator_64237.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((cPtr_midrange_5F_instruction *) enumerator_64237.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1780)) ;
              enumerator_64237.gotoNextObject () ;
              if (enumerator_64237.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
              }
            }
          }
          enumerator_64135.gotoNextObject () ;
          if (enumerator_64135.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1784)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1786)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1789)) ;
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
  outArgument_outGeneratedInstructionList = GALGAS_midrange_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1813)) ;
  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1816)), GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1818)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1819))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)) ;
      GALGAS_bool var_shouldSavePCLATH_66511 ;
      {
      routine_interruptRoutineShouldSavePCLATH (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_66511, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1826)) ;
      }
      outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint (uint32_t (4U))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1833))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1833)) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_66698 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
      while (enumerator_66698.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSharedRAMBankName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66698.current_mFirstSaveRegister (HERE), enumerator_66698.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66511, enumerator_66698.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66698.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1836)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66698.current_mFirstSaveRegister (HERE), enumerator_66698.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66511, enumerator_66698.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66698.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
          }
        }
        enumerator_66698.gotoNextObject () ;
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
  GALGAS_uintlist var_registerAddressList_68615 ;
  GALGAS_uint var_size_68627 ;
  GALGAS_registerProtection var_firstProtection_68652 ;
  GALGAS_bitSliceTable joker_68629_2 ; // Joker input parameter
  GALGAS_string joker_68629_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_68615, var_size_68627, joker_68629_2, joker_68629_1, var_firstProtection_68652, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1889)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_68652, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1890)) ;
  GALGAS_uint var_bankAccessibility_68772 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_68790 (var_registerAddressList_68615, kENUMERATION_UP) ;
  while (enumerator_68790.hasCurrentObject ()) {
    var_bankAccessibility_68772 = var_bankAccessibility_68772.operator_or (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).left_shift_operation (enumerator_68790.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) ;
    enumerator_68790.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_bankAccessibility_68772.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_size_68627.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (var_size_68627.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)) ;
    }
  }
  GALGAS_registerProtection var_secondProtection_69426 ;
  GALGAS_bitSliceTable joker_69402_2 ; // Joker input parameter
  GALGAS_string joker_69402_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_68615, var_size_68627, joker_69402_2, joker_69402_1, var_secondProtection_69426, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1902)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_69426, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1903)) ;
  var_bankAccessibility_68772 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_69556 (var_registerAddressList_68615, kENUMERATION_UP) ;
  while (enumerator_69556.hasCurrentObject ()) {
    var_bankAccessibility_68772 = var_bankAccessibility_68772.operator_or (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).left_shift_operation (enumerator_69556.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) ;
    enumerator_69556.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, var_bankAccessibility_68772.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1908)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_68627.objectCompare (GALGAS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1911)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (var_size_68627.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).operator_and (GALGAS_bool (kIsNotEqual, var_size_68627.objectCompare (GALGAS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (var_size_68627.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)) ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1917)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_registerExpression var_first_5F_register_70258 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_70540 ;
      GALGAS_bitSliceTable joker_70548 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_70258.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_70540, joker_70548, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)) ;
      GALGAS_registerExpression var_second_5F_register_70603 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1935))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1932)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_70919 ;
      GALGAS_bitSliceTable joker_70927 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_second_5F_register_70603.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_70919, joker_70927, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)) ;
      GALGAS_registerExpression var_STATUS_5F_register_71020 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1950))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1947)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_71326 ;
      GALGAS_bitSliceTable joker_71334 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_71020.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1954)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_71326, joker_71334, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1952)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), var_first_5F_IPICregisterDescription_70540  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), var_STATUS_5F_IPICregisterDescription_71326, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), var_STATUS_5F_IPICregisterDescription_71326  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), var_second_5F_IPICregisterDescription_70919  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_registerExpression var_reg_72097 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (1U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1969))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1966)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72556 ;
          GALGAS_bitSliceTable joker_72566 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_72097.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72556, joker_72566, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1972)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_72667 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1982)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_73004 ;
          GALGAS_bitSliceTable joker_73014 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_72667.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_73004, joker_73014, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1987)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), var_PCLATH_5F_IPICregisterDescription_73004, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72556  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), var_PCLATH_5F_IPICregisterDescription_73004  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)) ;
        }
      }
      GALGAS_uint var_currentBank_73643 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_bool var_continuesInSequence_74031 ;
      {
      routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73643, GALGAS_bool (false), var_continuesInSequence_74031, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2002)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_continuesInSequence_74031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2017)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2018)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_registerExpression var_reg_74284 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (1U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2021)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74629 ;
          GALGAS_bitSliceTable joker_74639 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_74284.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74629, joker_74639, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_74740 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2037))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2037)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2039))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2036)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_75076 ;
          GALGAS_bitSliceTable joker_75086 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_74740.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2043)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_75076, joker_75086, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2041)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74629, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), var_PCLATH_5F_IPICregisterDescription_75076  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), var_second_5F_IPICregisterDescription_70919, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), var_STATUS_5F_IPICregisterDescription_71326  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), var_first_5F_IPICregisterDescription_70540, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), var_first_5F_IPICregisterDescription_70540, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)) ;
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
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)) ;
  GALGAS_uintlist var_registerAddressList_77234 ;
  GALGAS_uint var_size_77246 ;
  GALGAS_registerProtection var_firstProtection_77271 ;
  GALGAS_bitSliceTable joker_77248_2 ; // Joker input parameter
  GALGAS_string joker_77248_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_77234, var_size_77246, joker_77248_2, joker_77248_1, var_firstProtection_77271, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2082)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_77271, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2083)) ;
  GALGAS_bool var_accessibleFromBank_30__77393 = GALGAS_bool (false) ;
  GALGAS_uint var_offset_77420 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_77450 (var_registerAddressList_77234, kENUMERATION_UP) ;
  bool bool_0 = var_accessibleFromBank_30__77393.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
  if (enumerator_77450.hasCurrentObject () && bool_0) {
    while (enumerator_77450.hasCurrentObject () && bool_0) {
      var_offset_77420 = enumerator_77450.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)) ;
      var_accessibleFromBank_30__77393 = GALGAS_bool (kIsEqual, enumerator_77450.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_77450.gotoNextObject () ;
      if (enumerator_77450.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__77393.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__77393.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_77246.objectCompare (GALGAS_uint (uint32_t (3U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (var_size_77246.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).operator_and (GALGAS_bool (kIsNotEqual, var_size_77246.objectCompare (GALGAS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (var_size_77246.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)) ;
      }
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList_78236 = var_registerAddressList_77234 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2100)) ;
  GALGAS_registerProtection var_secondProtection_78412 ;
  GALGAS_bitSliceTable joker_78388_2 ; // Joker input parameter
  GALGAS_string joker_78388_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_77234, var_size_77246, joker_78388_2, joker_78388_1, var_secondProtection_78412, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2101)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_78412, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2102)) ;
  var_saveStatusRegisterAddressList_78236 = var_saveStatusRegisterAddressList_78236.add_operation (var_registerAddressList_77234, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2103)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_size_77246.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (var_size_77246.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)) ;
    }
  }
  GALGAS_bool var_accessibleFromBank_31__78823 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_78845 (var_registerAddressList_77234, kENUMERATION_UP) ;
  bool bool_9 = var_accessibleFromBank_31__78823.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
  if (enumerator_78845.hasCurrentObject () && bool_9) {
    while (enumerator_78845.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78823 = GALGAS_bool (kIsEqual, enumerator_78845.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2110)).objectCompare (GALGAS_uint (uint32_t (128U)))) ;
      enumerator_78845.gotoNextObject () ;
      if (enumerator_78845.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78823.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__78823.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2112)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)) ;
    }
  }
  GALGAS_bool var_offsetOk_79225 = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_79246 (var_registerAddressList_77234, kENUMERATION_UP) ;
  bool bool_12 = var_offsetOk_79225.isValidAndTrue () ;
  if (enumerator_79246.hasCurrentObject () && bool_12) {
    while (enumerator_79246.hasCurrentObject () && bool_12) {
      var_offsetOk_79225 = GALGAS_bool (kIsEqual, var_offset_77420.objectCompare (enumerator_79246.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2118)))) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_offsetOk_79225.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (enumerator_79246.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (var_offset_77420.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)) ;
        }
      }
      enumerator_79246.gotoNextObject () ;
      if (enumerator_79246.hasCurrentObject ()) {
        bool_12 = var_offsetOk_79225.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2126)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_registerExpression var_first_5F_register_79736 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2127)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_80018 ;
      GALGAS_bitSliceTable joker_80026 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_79736.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_80018, joker_80026, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)) ;
      GALGAS_registerExpression var_first_5F_register_5F_second_5F_byte_80092 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (1U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2144))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2141)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80411 ;
      GALGAS_bitSliceTable joker_80419 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_80092.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80411, joker_80419, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)) ;
      GALGAS_registerExpression var_STATUS_5F_register_80512 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2159))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80837 ;
      GALGAS_bitSliceTable joker_80845 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_80512.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80837, joker_80845, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2161)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), var_first_5F_IPICregisterDescription_80018  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), var_STATUS_5F_IPICregisterDescription_80837, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), var_STATUS_5F_IPICregisterDescription_80837  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80411  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_81647 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81983 ;
          GALGAS_bitSliceTable joker_81993 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81647.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81983, joker_81993, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2180)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_82094 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2190)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_82437 ;
          GALGAS_bitSliceTable joker_82447 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_82094.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2197)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_82437, joker_82447, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2195)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), var_PCLATH_5F_IPICregisterDescription_82437, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81983  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), var_PCLATH_5F_IPICregisterDescription_82437  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)) ;
        }
      }
      GALGAS_uint var_currentBank_83082 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_bool var_continuesInSequence_83453 ;
      {
      routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_83082, GALGAS_bool (true), var_continuesInSequence_83453, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)) ;
      }
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_continuesInSequence_83453.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2225)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2226)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_19) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_83728 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (2U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2232))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84108 ;
          GALGAS_bitSliceTable joker_84118 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83728.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84108, joker_84118, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2234)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_84219 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2247))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_84463 ;
          GALGAS_bitSliceTable joker_84652 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_84219.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2252)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_84463, joker_84652, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2250)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84108, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), var_PCLATH_5F_IPICregisterDescription_84463  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80411, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), var_STATUS_5F_IPICregisterDescription_80837  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), var_first_5F_IPICregisterDescription_80018, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), var_first_5F_IPICregisterDescription_80018, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG isLABELorORG'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_isLABELorORG (C_Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL isLABELorORG'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABELorORG (C_Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL isNULL'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_NULL::getter_isNULL (C_Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (C_Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (C_Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_GOTO nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (C_Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::getter_nextInstructionIsReachable (C_Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::getter_nextInstructionIsReachable (C_Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (C_Compiler */* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, temp_0.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 135)))) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GALGAS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_1 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, temp_1.readProperty_mIsDeletable (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}
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
          var_currentAddress_6840.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 178)) ;
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
  GALGAS_uint var_currentAddress_7915 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 194)) ;
  GALGAS_bool var_found_8072 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid ()) {
    uint32_t variant_8087 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)).uintValue () ;
    bool loop_8087 = true ;
    while (loop_8087) {
      loop_8087 = GALGAS_bool (kIsStrictInf, var_currentAddress_7915.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8072.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).isValid () ;
      if (loop_8087) {
        loop_8087 = GALGAS_bool (kIsStrictInf, var_currentAddress_7915.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8072.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).boolValue () ;
      }
      if (loop_8087 && (0 == variant_8087)) {
        loop_8087 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 196)) ;
      }
      if (loop_8087) {
        variant_8087 -- ;
        GALGAS_midrange_5F_intermediate_5F_instruction var_instruction_8225 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7915, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 199)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instr_8309 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (var_instruction_8225.ptr ())) ;
          if (NULL == var_instr_8309.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8309 ;
            var_found_8072 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG var_instr_8582 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (var_instruction_8225.ptr ())) ;
            if (NULL == var_instr_8582.ptr ()) {
              test_1 = kBoolFalse ;
            }
            if (kBoolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_8582 ;
              var_found_8072 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL var_instr_8766 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_8225.ptr ())) ;
              if (NULL == var_instr_8766.ptr ()) {
                test_2 = kBoolFalse ;
              }
              if (kBoolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_8766 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_8766.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 212)) ;
                var_currentAddress_7915.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 213)) ;
              }
            }
            if (kBoolFalse == test_2) {
              var_currentAddress_7915.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 215)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)) ;
  GALGAS_symbolTableForOptimizations var_symbolTable_23828 = GALGAS_symbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("midrange_optimizations.galgas", 545)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_23889 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_23875 ((uint32_t) 0) ;
  while (enumerator_23889.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_23889.current_mInstruction (HERE).ptr (), var_symbolTable_23828, index_23875, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 547)) ;
    enumerator_23889.gotoNextObject () ;
    index_23875.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
  }
  GALGAS_bool var_optimizationsDone_24085 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_24114 = GALGAS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 552)).isValid ()) {
    uint32_t variant_24125 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 552)).uintValue () ;
    bool loop_24125 = true ;
    while (loop_24125) {
      loop_24125 = var_optimizationsDone_24085.isValid () ;
      if (loop_24125) {
        loop_24125 = var_optimizationsDone_24085.boolValue () ;
      }
      if (loop_24125 && (0 == variant_24125)) {
        loop_24125 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 552)) ;
      }
      if (loop_24125) {
        variant_24125 -- ;
        var_optimizationsDone_24085 = GALGAS_bool (false) ;
        var_iteration_24114.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 556)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_24114.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
        GALGAS_bigint var_idx_24343 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 559)) ;
        if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)).isValid ()) {
          uint32_t variant_24356 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)).uintValue () ;
          bool loop_24356 = true ;
          while (loop_24356) {
            loop_24356 = GALGAS_bool (kIsStrictInf, var_idx_24343.objectCompare (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).isValid () ;
            if (loop_24356) {
              loop_24356 = GALGAS_bool (kIsStrictInf, var_idx_24343.objectCompare (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 560)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).boolValue () ;
            }
            if (loop_24356 && (0 == variant_24356)) {
              loop_24356 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 560)) ;
            }
            if (loop_24356) {
              variant_24356 -- ;
              GALGAS_midrange_5F_intermediate_5F_instruction var_instruction_24518 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (var_idx_24343.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 562)) ;
              enumGalgasBool test_0 = kBoolTrue ;
              if (kBoolTrue == test_0) {
                GALGAS_midrange_5F_intermediate_5F_GOTO var_ipic_5F_GOTO_24597 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_instruction_24518.ptr ())) ;
                if (NULL == var_ipic_5F_GOTO_24597.ptr ()) {
                  test_0 = kBoolFalse ;
                }
                if (kBoolTrue == test_0) {
                  callExtensionMethod_optimizeGOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_ipic_5F_GOTO_24597.ptr (), var_symbolTable_23828, var_idx_24343.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24085, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)) ;
                }
              }
              if (kBoolFalse == test_0) {
                enumGalgasBool test_1 = kBoolTrue ;
                if (kBoolTrue == test_1) {
                  GALGAS_midrange_5F_intermediate_5F_JUMP var_ipic_5F_JUMP_24849 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_instruction_24518.ptr ())) ;
                  if (NULL == var_ipic_5F_JUMP_24849.ptr ()) {
                    test_1 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_1) {
                    callExtensionMethod_optimizeJUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_ipic_5F_JUMP_24849.ptr (), var_symbolTable_23828, var_idx_24343.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24085, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
                  }
                }
                if (kBoolFalse == test_1) {
                  enumGalgasBool test_2 = kBoolTrue ;
                  if (kBoolTrue == test_2) {
                    GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_ipic_5F_literal_25270 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_instruction_24518.ptr ())) ;
                    if (NULL == var_ipic_5F_literal_25270.ptr ()) {
                      test_2 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_2) {
                      callExtensionMethod_optimizeMOVLW ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_ipic_5F_literal_25270.ptr (), var_idx_24343.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24085, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
                    }
                  }
                  if (kBoolFalse == test_2) {
                    enumGalgasBool test_3 = kBoolTrue ;
                    if (kBoolTrue == test_3) {
                      GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition var_ipic_5F_decInc_25566 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (var_instruction_24518.ptr ())) ;
                      if (NULL == var_ipic_5F_decInc_25566.ptr ()) {
                        test_3 = kBoolFalse ;
                      }
                      if (kBoolTrue == test_3) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) var_ipic_5F_decInc_25566.ptr (), var_symbolTable_23828, var_idx_24343.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24085, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)) ;
                      }
                    }
                    if (kBoolFalse == test_3) {
                      enumGalgasBool test_4 = kBoolTrue ;
                      if (kBoolTrue == test_4) {
                        GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip var_ipic_5F_bitTestSkip_25877 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (var_instruction_24518.ptr ())) ;
                        if (NULL == var_ipic_5F_bitTestSkip_25877.ptr ()) {
                          test_4 = kBoolFalse ;
                        }
                        if (kBoolTrue == test_4) {
                          callExtensionMethod_optimizeBitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) var_ipic_5F_bitTestSkip_25877.ptr (), var_idx_24343.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24085, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)) ;
                        }
                      }
                    }
                  }
                }
              }
              var_idx_24343 = var_idx_24343.add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)) ;
            }
          }
        }
        GALGAS_stringset var_referencedLabels_26260 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 585)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26305 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_26305.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26305.current_mInstruction (HERE).ptr (), var_referencedLabels_26260, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 587)) ;
          enumerator_26305.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_26427 (var_symbolTable_23828, kENUMERATION_UP) ;
        while (enumerator_26427.hasCurrentObject ()) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_referencedLabels_26260.getter_hasKey (enumerator_26427.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 590)).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_uint var_definitionLine_26567 ;
              GALGAS_bool joker_26569 ; // Joker input parameter
              var_symbolTable_23828.method_searchKey (enumerator_26427.current_lkey (HERE), var_definitionLine_26567, joker_26569, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_26567.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (enumerator_26427.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 593)), var_definitionLine_26567, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 593)) ;
              }
              {
              GALGAS_uint joker_26844 ; // Joker input parameter
              GALGAS_bool joker_26847 ; // Joker input parameter
              var_symbolTable_23828.setter_removeKey (enumerator_26427.current_lkey (HERE), joker_26844, joker_26847, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 594)) ;
              }
            }
          }
          enumerator_26427.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_26920 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_26961 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_27014 = GALGAS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_27044 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_27030 ((uint32_t) 0) ;
        while (enumerator_27044.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_reachable_26920.operator_or (var_previousWasSkippingInstruction_27014 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 602)).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_reachable_26920 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27044.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 603)) ;
              var_previousWasSkippingInstruction_27014 = var_skippingInstruction_26961 ;
              var_skippingInstruction_26961 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27044.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 605)) ;
            }
          }
          if (kBoolFalse == test_6) {
            GALGAS_bool var_isLABELorORG_27379 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27044.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 607)) ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = var_isLABELorORG_27379.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27044.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).boolEnum () ;
              if (kBoolTrue == test_7) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_27030.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)).add_operation (GALGAS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 610)), index_27030, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 610)) ;
                }
              }
            }
            if (kBoolFalse == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_isLABELorORG_27379.boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_reachable_26920 = GALGAS_bool (true) ;
                  var_previousWasSkippingInstruction_27014 = GALGAS_bool (false) ;
                  var_skippingInstruction_26961 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_27044.gotoNextObject () ;
          index_27030.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 601)) ;
        }
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_optimizationsDone_24085.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 618)).boolEnum () ;
          if (kBoolTrue == test_9) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 619)) ;
            GALGAS_uint var_currentAddress_28006 = GALGAS_uint (uint32_t (0U)) ;
            cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_28034 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
            while (enumerator_28034.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_28034.current_mInstruction (HERE).ptr (), var_currentAddress_28006, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 623)) ;
              enumerator_28034.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_28006.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)).add_operation (GALGAS_string (" instructions\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)) ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabelAtAddress (GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                    GALGAS_uint & ioArgument_ioAddress,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 28)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_defineLabelAtAddress (GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                  GALGAS_uint & ioArgument_ioAddress,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioAddress.objectCompare (temp_1.readProperty_mOrigin ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GALGAS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GALGAS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (temp_2.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_4 = this ;
  ioArgument_ioAddress = temp_4.readProperty_mOrigin () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_defineLabelAtAddress (GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  GALGAS_uint var_nextAddress_1942 = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_nextAddress_1942.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).operator_and (GALGAS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Routine too long, crosses page boundary at this instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
    }
  }
  ioArgument_ioAddress = var_nextAddress_1942 ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL compute'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                            GALGAS_uint & /* ioArgument_ioAddress */,
                                                            GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                            const GALGAS_uint /* constinArgument_inIndex */,
                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction compute'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                         GALGAS_uint & /* ioArgument_ioAddress */,
                                                                         GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                         const GALGAS_uint /* constinArgument_inIndex */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG compute'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                     GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                     GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                     const GALGAS_uint /* constinArgument_inIndex */,
                                                                     GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP compute'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                            GALGAS_uint & ioArgument_ioAddress,
                                                            GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                            const GALGAS_uint constinArgument_inIndex,
                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_4693 ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_4693, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 116)) ;
  GALGAS_uint var_flags_4734 = ioArgument_ioAddress.operator_xor (var_targetAddress_4693 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 118)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__4799 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_flags_4734.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 120)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__4799 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_targetAddress_4693.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 122)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_bit_31__31__4799 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 123)) ;
      }
    }
    if (kBoolFalse == test_2) {
      var_bit_31__31__4799 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 125)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__5080 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_flags_4734.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__5080 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 130)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_targetAddress_4693.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 131)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_bit_31__32__5080 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 132)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_bit_31__32__5080 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 134)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_6 = this ;
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_7 = this ;
    test_5 = GALGAS_bool (kIsNotEqual, var_bit_31__31__4799.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__5080.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 137)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_midrange_5F_intermediate_5F_JUMP temp_8 = this ;
      const GALGAS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
      GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_5438 = GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__4799, var_bit_31__32__5080  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 138)) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_5438, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 143)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)).add_operation (GALGAS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR compute'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                           GALGAS_uint & ioArgument_ioAddress,
                                                           GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           const GALGAS_uint constinArgument_inIndex,
                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_6244 ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_6244, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 159)) ;
  GALGAS_uint var_flags_6285 = ioArgument_ioAddress.operator_xor (var_targetAddress_6244 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 161)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__6350 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_flags_6285.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 163)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__6350 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_targetAddress_6244.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 165)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_bit_31__31__6350 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 166)) ;
      }
    }
    if (kBoolFalse == test_2) {
      var_bit_31__31__6350 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 168)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__6631 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_flags_6285.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 172)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__6631 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 173)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_targetAddress_6244.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 174)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_bit_31__32__6631 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 175)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_bit_31__32__6631 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 177)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_6 = this ;
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_7 = this ;
    test_5 = GALGAS_bool (kIsNotEqual, var_bit_31__31__6350.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__6631.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 180)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_midrange_5F_intermediate_5F_JSR temp_8 = this ;
      const GALGAS_midrange_5F_intermediate_5F_JSR temp_9 = this ;
      GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_6989 = GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__6350, var_bit_31__32__6631  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 181)) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_6989, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 186)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)).add_operation (GALGAS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                       GALGAS_uint & ioArgument_ioAddress,
                                                                       GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                       const GALGAS_uint /* constinArgument_inIndex */,
                                                                       GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_7798 ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_7798, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 201)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_targetAddress_7798.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (var_targetAddress_7798.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), fixItArray4  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("COMPUTE JSR and JUMP").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)) ;
  GALGAS_bool var_JUMP_5F_or_5F_JSR_5F_fixed_13160 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_13189 = GALGAS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).isValid ()) {
    uint32_t variant_13200 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).uintValue () ;
    bool loop_13200 = true ;
    while (loop_13200) {
      loop_13200 = var_JUMP_5F_or_5F_JSR_5F_fixed_13160.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).isValid () ;
      if (loop_13200) {
        loop_13200 = var_JUMP_5F_or_5F_JSR_5F_fixed_13160.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).boolValue () ;
      }
      if (loop_13200 && (0 == variant_13200)) {
        loop_13200 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)) ;
      }
      if (loop_13200) {
        variant_13200 -- ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_13160 = GALGAS_bool (false) ;
        var_iteration_13189.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_13189.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)) ;
        GALGAS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_13492 = GALGAS_midrange_5F_symbolTableForConvertingRelatives::constructor_emptyMap (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 327)) ;
        GALGAS_uint var_currentAddress_13577 = GALGAS_uint (uint32_t (0U)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13603 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_13603.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13603.current_mInstruction (HERE).ptr (), var_symbolTable_13492, var_currentAddress_13577, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
          enumerator_13603.gotoNextObject () ;
        }
        GALGAS_uint var_lastAddressForFirstPass_13757 = var_currentAddress_13577 ;
        var_currentAddress_13577 = GALGAS_uint (uint32_t (0U)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13882 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_13868 ((uint32_t) 0) ;
        while (enumerator_13882.hasCurrentObject ()) {
          callExtensionMethod_compute ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13882.current_mInstruction (HERE).ptr (), var_symbolTable_13492, var_currentAddress_13577, var_JUMP_5F_or_5F_JSR_5F_fixed_13160, ioArgument_ioGeneratedInstructionList, index_13868, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 336)) ;
          var_currentAddress_13577 = var_currentAddress_13577.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13882.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)) ;
          enumerator_13882.gotoNextObject () ;
          index_13868.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 335)) ;
        }
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_13757.objectCompare (var_currentAddress_13577)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13577.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (GALGAS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (var_lastAddressForFirstPass_13757.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 341)).add_operation (GALGAS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_13160.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).boolEnum () ;
          if (kBoolTrue == test_2) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No JUMP, no JSR to fix\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Program size: ").add_operation (var_currentAddress_13577.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)).add_operation (GALGAS_string (" instructions\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)) ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_buildAssemblyCode (GALGAS_string & /* ioArgument_ioString */,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 41)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 43)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 45)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                           GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
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
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_localLabel_2993 = GALGAS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (var_localLabel_2993, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
      ioArgument_ioString.plusAssign_operation(var_localLabel_2993.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_8.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  switch (temp_3.readProperty_mBit_31__31_ ().enumValue ()) {
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__32_ ().enumValue ()) {
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
//
//Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                    GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
    }
  }
  GALGAS_uint var_idx_6974 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6985 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6985 = true ;
    while (loop_6985) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_6985 = GALGAS_bool (kIsStrictInf, var_idx_6974.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6985) {
        loop_6985 = GALGAS_bool (kIsStrictInf, var_idx_6974.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6985 && (0 == variant_6985)) {
        loop_6985 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_6985) {
        variant_6985 -- ;
        ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6974.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}
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
  GALGAS_uint var_bccLabelIndex_9156 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9180 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_9180.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9180.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_9156, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9180.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9425 (constinArgument_inPredefinedRegisters, kENUMERATION_UP) ;
  while (enumerator_9425.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_9483 ;
    enumerator_9425.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9483, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssign_operation(enumerator_9425.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9483.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9425.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9777 (constinArgument_inAllRegisters, kENUMERATION_UP) ;
  while (enumerator_9777.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9777.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_uint var_firstRegister_9890 ;
        enumerator_9777.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9890, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
        outArgument_outAssemblyCode.plusAssign_operation(enumerator_9777.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9890.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
      }
    }
    enumerator_9777.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("W EQU 1\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Configuration\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
      cEnumerator_actualConfigurationMap enumerator_10363 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
      while (enumerator_10363.hasCurrentObject ()) {
        outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_10363.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10363.current_mRegisterValue (HERE).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
        enumerator_10363.gotoNextObject () ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 15)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 28)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 29)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GALGAS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                   GALGAS_uint & ioArgument_ioAddress,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 68)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_enterLabelAtAddress (GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
  routine_setEmitAddress (temp_1.readProperty_mOrigin ().add_operation (temp_2.readProperty_mOrigin (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)) ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_3 = this ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 126)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  GALGAS_uint var_code_5768 = extensionGetter_basecode (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 160)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_5768 = var_code_5768.operator_or (GALGAS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 162)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  var_code_5768 = var_code_5768.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress (var_code_5768, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 165)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                            const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                            const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                            GALGAS_uint & ioArgument_ioAddress,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  GALGAS_uint var_code_6681 = extensionGetter_baseCode (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 187)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  var_code_6681 = var_code_6681.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress (var_code_6681, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 189)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  GALGAS_uint var_code_7504 = extensionGetter_baseCode (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 212)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  var_code_7504 = var_code_7504.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  var_code_7504 = var_code_7504.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  routine_emitMidrangeCodeAtWordAddress (var_code_7504, ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 215)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_8163 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_8163 = GALGAS_uint (uint32_t (7168U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_8163 = GALGAS_uint (uint32_t (6144U)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_8163 = var_code_8163.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_8163 = var_code_8163.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress (var_code_8163, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 236)) ;
  }
}
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
  GALGAS_uint var_code_8695 = GALGAS_uint (uint32_t (10240U)).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_8695, ioArgument_ioAddress, GALGAS_string ("GOTO ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).operator_and (GALGAS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
  GALGAS_uint var_code_9668 = GALGAS_uint (uint32_t (8192U)).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_9668, ioArgument_ioAddress, GALGAS_string ("CALL ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).operator_and (GALGAS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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

void cPtr_midrange_5F_intermediate_5F_JUMP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_usedRegisters_10772 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 299)) ;
  GALGAS_uint var_targetAddress_10867 ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_10867, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 300)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_10926 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 302)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_11242 ;
  GALGAS_bitSliceTable joker_11248 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_10926.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 309)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_11242, joker_11248, var_usedRegisters_10772, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 307)) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 319)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 336)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 343)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_10867, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 352)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_12819 ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_12819, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 365)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_12819, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 367)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_generateBinaryCodeAtAddress (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               const GALGAS_uint constinArgument_inTotalBankCount,
                                                                               const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_usedRegisters_13341 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 379)) ;
  GALGAS_uint var_targetAddress_13441 ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_13441, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 381)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_13500 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 384))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 384)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 383)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_13823 ;
  GALGAS_bitSliceTable joker_13829 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_13500.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 390)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_13823, joker_13829, var_usedRegisters_13341, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 400)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 417)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 424)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_13441, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 432)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 435)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 442)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_5 = this ;
  switch (temp_5.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 452)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 459)) ;
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
//
//Overriding extension method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_16347 ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_16347, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 479)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_1 = this ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_2 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_16347, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 481)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_16885 ;
  GALGAS_string var_s_16901 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_16885 = GALGAS_uint (uint32_t (3840U)) ;
      var_s_16901 = GALGAS_string ("INCFSZ") ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_16885 = GALGAS_uint (uint32_t (2816U)) ;
    var_s_16901 = GALGAS_string ("DECFSZ") ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_16885 = var_code_16885.operator_or (GALGAS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 501)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_16885 = var_code_16885.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
  var_s_16901.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_16885, ioArgument_ioAddress, var_s_16901, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 505)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
    test_6 = temp_7.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
      routine_emit_5F_midrange_5F_GOTOinstruction (temp_8.readProperty_mInstructionLocation (), ioArgument_ioAddress, GALGAS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)) ;
      }
    }
  }
  GALGAS_uint var_targetAddress_17575 ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (temp_9.readProperty_mTargetLabel (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)), var_targetAddress_17575, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_10 = this ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction (temp_10.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_11.readProperty_mTargetLabel (), var_targetAddress_17575, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 512)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint (uint32_t (100U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 524)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint (uint32_t (256U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 536)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                              const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                              const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                              GALGAS_uint & ioArgument_ioAddress,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint (uint32_t (0U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 548)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint (uint32_t (8U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 560)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint (uint32_t (9U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 572)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint (uint32_t (99U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 584)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  GALGAS_uint var_code_21461 = extensionGetter_baseCode (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 611)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_21461 = var_code_21461.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 612)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress (var_code_21461, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 613)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                           const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_22076 ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_22076, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 625)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_targetAddress_22076.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (var_targetAddress_22076.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), fixItArray4  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)) ;
    }
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 631)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 644)) ;
    }
  }
  GALGAS_uint var_idx_22931 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_22942 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_22942 = true ;
    while (loop_22942) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_22942 = GALGAS_bool (kIsStrictInf, var_idx_22931.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_22942) {
        loop_22942 = GALGAS_bool (kIsStrictInf, var_idx_22931.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_22942 && (0 == variant_22942)) {
        loop_22942 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_build_binary_code.galgas", 647)) ;
      }
      if (loop_22942) {
        variant_22942 -- ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint (uint32_t (0U)), ioArgument_ioAddress, GALGAS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 650)) ;
        }
        var_idx_22931.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 651)) ;
      }
    }
  }
}
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
  GALGAS_midrange_5F_symbolTable var_symbolTable_23957 = GALGAS_midrange_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("midrange_build_binary_code.galgas", 671)) ;
  GALGAS_uint var_currentAddress_24018 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24042 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_24042.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24042.current_mInstruction (HERE).ptr (), var_symbolTable_23957, var_currentAddress_24018, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 674)) ;
    enumerator_24042.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_24189 = var_currentAddress_24018 ;
  outArgument_outUsedROMsize = var_currentAddress_24018 ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 682)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 683)) ;
  }
  var_currentAddress_24018 = GALGAS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress (GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 685)) ;
  }
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24685 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_24685.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24685.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable_23957, ioArgument_ioListFileContents, var_currentAddress_24018, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)) ;
    {
    routine_checkCurrentEmitAddress (var_currentAddress_24018.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)) ;
    }
    enumerator_24685.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_24189.objectCompare (var_currentAddress_24018)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_24018.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (var_lastAddressForFirstPass_24189.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 700)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_24189.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24189.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 704)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
      }
    }
  }
  cEnumerator_actualConfigurationMap enumerator_25613 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
  while (enumerator_25613.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_25613.current_mRegisterAddress (HERE).add_operation (enumerator_25613.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)) ;
    }
    {
    routine_emitCode (enumerator_25613.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
    }
    enumerator_25613.gotoNextObject () ;
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
  GALGAS_string var_sourceFileBaseName_777 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_777.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_777, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
    }
  }
  GALGAS_string var_listFileContents_1125 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1256 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_1256, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 24)) ;
  }
  switch (var_piccoloDeviceModel_1256.readProperty_mProcessorType ().enumValue ()) {
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
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 27)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  }
  GALGAS_bool var_hasInterrupt_1647 = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1689 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_1689.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_hasInterrupt_1647.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1689.current_mInterruptLocation (HERE), GALGAS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 34)) ;
      }
    }
    var_hasInterrupt_1647 = GALGAS_bool (true) ;
    enumerator_1689.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_2083 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_1256.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_1125, var_actualConfigurationMap_2083, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 39)) ;
  }
  GALGAS_constantMap var_constantMap_2171 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 46)) ;
  GALGAS_stringset var_usedRegisters_2207 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 47)) ;
  GALGAS_registerTable var_registerTable_2247 = var_piccoloDeviceModel_1256.readProperty_mRegisterTable () ;
  GALGAS_lstring var_romSizeString_2332 = GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)) ;
  {
  var_constantMap_2171.setter_insertKey (var_romSizeString_2332, var_piccoloDeviceModel_1256.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 51)) ;
  }
  cEnumerator_constantDefinitionList enumerator_2510 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_2510.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_2627 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_2510.current_mExpression (HERE).ptr (), var_registerTable_2247, var_constantMap_2171, var_result_2627, var_usedRegisters_2207, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 54)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_registerTable_2247.getter_hasKey (enumerator_2510.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 55)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2510.current_mConstantName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_2510.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      var_constantMap_2171.setter_insertKey (enumerator_2510.current_mConstantName (HERE), var_result_2627, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)) ;
      }
    }
    enumerator_2510.gotoNextObject () ;
  }
  GALGAS_ramBankTable var_ramBank_2965 = var_piccoloDeviceModel_1256.readProperty_mRamBankTable () ;
  GALGAS_declaredByteMap var_declaredByteMap_3265 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_2171, var_usedRegisters_2207, var_ramBank_2965, var_piccoloDeviceModel_1256.readProperty_mRegisterTable (), var_listFileContents_1125, var_registerTable_2247, var_declaredByteMap_3265, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 63)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3714 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (var_piccoloDeviceModel_1256.readProperty_mRomSize ().readProperty_uint ().add_operation (GALGAS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)).divide_operation (GALGAS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)), var_piccoloDeviceModel_1256.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2171, var_piccoloDeviceModel_1256.readProperty_mSharedBankName (), var_registerTable_2247, constinArgument_inPiccoloModel, var_hasInterrupt_1647, var_generatedInstructionList_3714, var_listFileContents_1125, var_usedRegisters_2207, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 75)) ;
  }
  GALGAS_stringset var_usedRoutineSet_3852 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)) ;
  GALGAS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_4002 = GALGAS_midrange_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 93)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_4077 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_4077.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_4002.setter_insertKey (enumerator_4077.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)) ;
    }
    enumerator_4077.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_4272 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 98)) ;
  cEnumerator_lstringlist enumerator_4309 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), kENUMERATION_UP) ;
  while (enumerator_4309.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_declaredRoutineMap_4002.getter_hasKey (enumerator_4309.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 100)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 100)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4309.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4309.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4272.getter_hasKey (enumerator_4309.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4309.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4309.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = var_usedRoutineSet_3852.getter_hasKey (enumerator_4309.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4309.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4309.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4272.addAssign_operation (enumerator_4309.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
    enumerator_4309.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4856 (var_declaredRoutineMap_4002, kENUMERATION_UP) ;
  while (enumerator_4856.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_usedRoutineSet_3852.getter_hasKey (enumerator_4856.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_and (var_unusedRoutineDeclarationUnicity_4272.getter_hasKey (enumerator_4856.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4856.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4856.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)) ;
      }
    }
    enumerator_4856.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedByteDeclarationUnicity_5200 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 115)) ;
  cEnumerator_lstringlist enumerator_5237 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), kENUMERATION_UP) ;
  while (enumerator_5237.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_registerTable_2247.getter_hasKey (enumerator_5237.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5237.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5237.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
      }
    }
    if (kBoolFalse == test_16) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5200.getter_hasKey (enumerator_5237.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 119)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5237.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5237.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)) ;
        }
      }
      if (kBoolFalse == test_18) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_usedRegisters_2207.getter_hasKey (enumerator_5237.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 121)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5237.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5237.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5200.addAssign_operation (enumerator_5237.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)) ;
    enumerator_5237.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5764 (var_declaredByteMap_3265, kENUMERATION_UP) ;
  while (enumerator_5764.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_usedRegisters_2207.getter_hasKey (enumerator_5764.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_and (var_unusedByteDeclarationUnicity_5200.getter_hasKey (enumerator_5764.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5764.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5764.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)) ;
      }
    }
    enumerator_5764.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 132)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations (var_generatedInstructionList_3714, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 133)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 136)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP (var_generatedInstructionList_3714, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 137)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 141)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_26) {
      GALGAS_uint var_usedROMsize_6809 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (var_registerTable_2247, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 145)), var_piccoloDeviceModel_1256.readProperty_mBankCount ().readProperty_uint (), var_generatedInstructionList_3714, var_piccoloDeviceModel_1256.readProperty_mRomSize ().readProperty_uint (), var_actualConfigurationMap_2083, var_listFileContents_1125, var_usedROMsize_6809, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 143)) ;
      }
      GALGAS_string var_contents_6840 ;
      {
      routine_getGeneratedContents (var_contents_6840, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)) ;
      }
      GALGAS_string var_destinationFile_6911 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 155)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)) ;
      GALGAS_bool joker_7037 ; // Joker input parameter
      var_contents_6840.method_writeToFileWhenDifferentContents (var_destinationFile_6911, joker_7037, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)) ;
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_27) {
          GALGAS_string var_baseName_7124 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 158)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation (var_baseName_7124, var_contents_6840, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
          }
          var_destinationFile_6911 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 160)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)) ;
          GALGAS_bool joker_7399 ; // Joker input parameter
          var_contents_6840.method_writeToFileWhenDifferentContents (var_destinationFile_6911, joker_7399, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
          {
          routine_get_5F_C_5F_ArrayHeader (var_baseName_7124, var_contents_6840, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
          }
          var_destinationFile_6911 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
          GALGAS_bool joker_7597 ; // Joker input parameter
          var_contents_6840.method_writeToFileWhenDifferentContents (var_destinationFile_6911, joker_7597, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 164)) ;
        }
      }
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 167)).boolEnum () ;
        if (kBoolTrue == test_28) {
          GALGAS_string var_verboseMessage_7716 = GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1256.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_semantics.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)).add_operation (GALGAS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)) ;
          var_verboseMessage_7716.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_6809.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)) ;
          var_verboseMessage_7716.plusAssign_operation(var_usedROMsize_6809.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).divide_operation (var_piccoloDeviceModel_1256.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 170)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
          cEnumerator_ramBankTable enumerator_8027 (var_ramBank_2965, kENUMERATION_UP) ;
          while (enumerator_8027.hasCurrentObject ()) {
            GALGAS_uint var_bankSize_8070 = enumerator_8027.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_8027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)) ;
            GALGAS_uint var_usedSize_8135 = enumerator_8027.current_mFirstFreeAddress (HERE).substract_operation (enumerator_8027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)) ;
            var_verboseMessage_7716.plusAssign_operation(GALGAS_string ("  Bank '").add_operation (enumerator_8027.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)).add_operation (GALGAS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)) ;
            var_verboseMessage_7716.plusAssign_operation(var_usedSize_8135.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 175)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)) ;
            var_verboseMessage_7716.plusAssign_operation(var_bankSize_8070.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 176)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)) ;
            var_verboseMessage_7716.plusAssign_operation(var_usedSize_8135.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).divide_operation (var_bankSize_8070, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 177)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)) ;
            enumerator_8027.gotoNextObject () ;
          }
          inCompiler->printMessage (var_verboseMessage_7716  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
        }
      }
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        test_29 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_29) {
          GALGAS_string var_assemblyCode_8606 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code (var_piccoloDeviceModel_1256.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1256.readProperty_mRegisterTable (), var_registerTable_2247, var_generatedInstructionList_3714, var_actualConfigurationMap_2083, var_assemblyCode_8606, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
          }
          GALGAS_string var_asmDestinationFile_8889 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 192)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 192)) ;
          GALGAS_bool joker_9024 ; // Joker input parameter
          var_assemblyCode_8606.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8889, joker_9024, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_26) {
    GALGAS_string var_hexDestinationFile_9122 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 196)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 196)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = var_hexDestinationFile_9122.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 197)).boolEnum () ;
      if (kBoolTrue == test_30) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_9122, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 198)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_9316 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 200)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 200)) ;
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_asmDestinationFile_9316.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 201)).boolEnum () ;
      if (kBoolTrue == test_31) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_9316, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 202)) ;
        }
      }
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    test_32 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_string var_listFile_9611 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 207)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 207)) ;
      GALGAS_bool joker_9739 ; // Joker input parameter
      var_listFileContents_1125.method_writeToFileWhenDifferentContents (var_listFile_9611, joker_9739, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 208)) ;
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
  GALGAS_string var_sourceFileBaseName_571 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_571.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_571, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
    }
  }
  GALGAS_string var_listFileContents_919 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1018 ;
  GALGAS_uint var_accessBankSplitOffset_1052 ;
  GALGAS_ramBankTable var_ramBank_1080 ;
  GALGAS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1137 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1269 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1353 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1444 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1529 ;
  GALGAS_luint var_bootloaderReservedROMsize_1568 ;
  GALGAS_registerTable var_registerTable_1702 ;
  GALGAS_string var_piccoloDeviceName_1734 ;
  switch (constinArgument_inPiccoloModel.readProperty_mProgramKind ().enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
    {
      var_piccoloDeviceName_1734 = constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_string () ;
      {
      routine_parseDeviceDefinition (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1018, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel_1018.readProperty_mProcessorType ().enumValue ()) {
      case GALGAS_processorType::kNotBuilt:
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1052 = GALGAS_uint (uint32_t (96U)) ;
        }
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1052 = GALGAS_uint (uint32_t (128U)) ;
        }
        break ;
      case GALGAS_processorType::kEnum_midrange:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1052.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_processorType::kEnum_baseline:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset_1052.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1080 = var_piccoloDeviceModel_1018.readProperty_mRamBankTable () ;
      var_bootloaderReservedRAMmap_1137 = GALGAS_bootloaderReservedRAMmap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 43)) ;
      var_registerTable_1702 = var_piccoloDeviceModel_1018.readProperty_mRegisterTable () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1269 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 45)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1353 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 46)) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1444 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 47)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1529 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 48)) ;
      var_bootloaderReservedROMsize_1568 = GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)) ;
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1444 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 51)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1529 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 52)) ;
      var_piccoloDeviceModel_1018.drop () ;
      var_piccoloDeviceName_1734.drop () ;
      var_accessBankSplitOffset_1052.drop () ;
      var_ramBank_1080.drop () ;
      var_registerTable_1702.drop () ;
      var_bootloaderReservedRAMmap_1137.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1269.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1353.drop () ;
      var_bootloaderReservedROMsize_1568.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1018, var_piccoloDeviceName_1734, var_accessBankSplitOffset_1052, var_ramBank_1080, var_registerTable_1702, var_bootloaderReservedRAMmap_1137, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1269, var_userRoutineDeclarationListForBootloaderImplementation_1353, var_bootloaderReservedROMsize_1568  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      cEnumerator_ramBankTable enumerator_3729 (var_ramBank_1080, kENUMERATION_UP) ;
      while (enumerator_3729.hasCurrentObject ()) {
        {
        var_ramBank_1080.setter_setMFirstFreeAddressForKey (enumerator_3729.current_mFirstAddress (HERE), enumerator_3729.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 65)) ;
        }
        enumerator_3729.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_userProgram:
    {
      var_piccoloDeviceModel_1018.drop () ;
      var_piccoloDeviceName_1734.drop () ;
      var_accessBankSplitOffset_1052.drop () ;
      var_ramBank_1080.drop () ;
      var_registerTable_1702.drop () ;
      var_bootloaderReservedRAMmap_1137.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1444.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1529.drop () ;
      var_bootloaderReservedROMsize_1568.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1018, var_piccoloDeviceName_1734, var_accessBankSplitOffset_1052, var_ramBank_1080, var_registerTable_1702, var_bootloaderReservedRAMmap_1137, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1444, var_userRoutineDeclarationListForUserProgramImplementation_1529, var_bootloaderReservedROMsize_1568  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 68)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1269 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 79)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1353 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 80)) ;
    }
    break ;
  }
  GALGAS_pic_31__38_MacroMap var_macroMap_4607 = GALGAS_pic_31__38_MacroMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 83)) ;
  cEnumerator_pic_31__38_MacroDefinitionList enumerator_4665 (constinArgument_inPiccoloModel.readProperty_mMacroDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_4665.hasCurrentObject ()) {
    {
    var_macroMap_4607.setter_insertKey (enumerator_4665.current_mMacroName (HERE), enumerator_4665.current_mConstantNameList (HERE), enumerator_4665.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 85)) ;
    }
    enumerator_4665.gotoNextObject () ;
  }
  GALGAS_stringset var_usedRoutineSet_4881 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), var_macroMap_4607, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1269, var_userRoutineDeclarationListForUserProgramImplementation_1529, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 88)) ;
  GALGAS_declaredRoutineMap var_declaredRoutineMap_5167 = GALGAS_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 95)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_5293 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_5293.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5167.setter_insertKey (enumerator_5293.current_mRoutineName (HERE), enumerator_5293.current_mRequiredBank (HERE), enumerator_5293.current_mReturnedBank (HERE), enumerator_5293.current_mPreservesBank (HERE), enumerator_5293.current_mIsNoReturn (HERE), enumerator_5293.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 97)) ;
    }
    enumerator_5293.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_5599 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 107)) ;
  cEnumerator_lstringlist enumerator_5636 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), kENUMERATION_UP) ;
  while (enumerator_5636.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5167.getter_hasKey (enumerator_5636.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5636.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5636.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5599.getter_hasKey (enumerator_5636.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5636.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5636.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_usedRoutineSet_4881.getter_hasKey (enumerator_5636.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 113)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5636.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5636.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5599.addAssign_operation (enumerator_5636.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 116)) ;
    enumerator_5636.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_6179 (var_declaredRoutineMap_5167, kENUMERATION_UP) ;
  while (enumerator_6179.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_usedRoutineSet_4881.getter_hasKey (enumerator_6179.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_and (var_unusedDeclarationUnicity_5599.getter_hasKey (enumerator_6179.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_6179.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6179.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)) ;
      }
    }
    enumerator_6179.gotoNextObject () ;
  }
  GALGAS_stringset var_inlinedRoutineSet_6464 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 124)) ;
  cEnumerator_lstringlist enumerator_6501 (constinArgument_inPiccoloModel.readProperty_mInlinedRoutineList (), kENUMERATION_UP) ;
  while (enumerator_6501.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5167.getter_hasKey (enumerator_6501.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6501.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6501.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_usedRoutineSet_4881.getter_hasKey (enumerator_6501.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 128)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6501.current_mValue (HERE).readProperty_location (), GALGAS_string ("useless declaration, the '").add_operation (enumerator_6501.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
        }
      }
      if (kBoolFalse == test_14) {
        var_inlinedRoutineSet_6464.addAssign_operation (enumerator_6501.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 131)) ;
      }
    }
    enumerator_6501.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6939 = constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList () ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_7037 = constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList () ;
  {
  routine_pic_31__38_PerformRoutineInline (var_inlinedRoutineSet_6464, var_declaredRoutineMap_5167, var_interruptDefinitionList_6939, var_routineDefinitionList_7037, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 136)) ;
  }
  cEnumerator_checkpicList enumerator_7313 (constinArgument_inPiccoloModel.readProperty_mCheckpicList (), kENUMERATION_UP) ;
  while (enumerator_7313.hasCurrentObject ()) {
    GALGAS_bool var_found_7370 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7394 (enumerator_7313.current_mValueList (HERE), kENUMERATION_UP) ;
    bool bool_16 = var_found_7370.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
    if (enumerator_7394.hasCurrentObject () && bool_16) {
      while (enumerator_7394.hasCurrentObject () && bool_16) {
        var_found_7370 = GALGAS_bool (kIsEqual, enumerator_7394.current_mValue (HERE).readProperty_string ().objectCompare (var_piccoloDeviceName_1734)) ;
        enumerator_7394.gotoNextObject () ;
        if (enumerator_7394.hasCurrentObject ()) {
          bool_16 = var_found_7370.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_found_7370.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 148)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7313.current_mErrorLocation (HERE), GALGAS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1734, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)) ;
      }
    }
    enumerator_7313.gotoNextObject () ;
  }
  GALGAS_bool var_hasHighInterrupt_7687 = GALGAS_bool (false) ;
  GALGAS_bool var_highInterruptIsFast_7727 = GALGAS_bool (false) ;
  GALGAS_bool var_hasLowInterrupt_7763 = GALGAS_bool (false) ;
  GALGAS_bool var_lowInterruptIsFast_7802 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7848 (var_interruptDefinitionList_6939, kENUMERATION_UP) ;
  while (enumerator_7848.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 158)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 159)) ;
      }
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsEqual, enumerator_7848.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        var_highInterruptIsFast_7727 = enumerator_7848.current_mFastReturn (HERE) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7687.boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 164)) ;
          }
        }
        var_hasHighInterrupt_7687 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_21) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_7848.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("low"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_lowInterruptIsFast_7802 = enumerator_7848.current_mFastReturn (HERE) ;
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7763.boolEnum () ;
            if (kBoolTrue == test_25) {
              TC_Array <C_FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 170)) ;
            }
          }
          var_hasLowInterrupt_7763 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_24) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7727.operator_and (var_lowInterruptIsFast_7802 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 176)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 177)) ;
      }
    }
    enumerator_7848.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_8878 ;
  enumGalgasBool test_30 = kBoolTrue ;
  if (kBoolTrue == test_30) {
    test_30 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 182)))).boolEnum () ;
    if (kBoolTrue == test_30) {
      cEnumerator_configDefinitionList enumerator_8976 (constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), kENUMERATION_UP) ;
      while (enumerator_8976.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8976.current_mDefinitionLocation (HERE), GALGAS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
        enumerator_8976.gotoNextObject () ;
      }
      var_actualConfigurationMap_8878 = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 186)) ;
    }
  }
  if (kBoolFalse == test_30) {
    {
    routine_buildConfig (var_piccoloDeviceModel_1018.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_919, var_actualConfigurationMap_8878, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 188)) ;
    }
  }
  GALGAS_uint var_RAMsize_9438 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_ramBankTable enumerator_9477 (var_ramBank_1080, kENUMERATION_UP) ;
  while (enumerator_9477.hasCurrentObject ()) {
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      test_32 = GALGAS_bool (kIsStrictSup, enumerator_9477.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9438)).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_RAMsize_9438 = enumerator_9477.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9477.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_9668 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 203)) ;
  {
  var_constantMap_9668.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)), var_piccoloDeviceModel_1018.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)) ;
  }
  {
  var_constantMap_9668.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("RAM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)), var_RAMsize_9438.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)) ;
  }
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (kIsNotEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("pic18_semantics.galgas", 208)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      GALGAS_lstring var_bootloaderSizeString_10071 = GALGAS_lstring::constructor_new (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)) ;
      {
      var_constantMap_9668.setter_insertKey (var_bootloaderSizeString_10071, var_bootloaderReservedROMsize_1568.readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
      }
    }
  }
  GALGAS_stringset var_usedRegisters_10279 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 213)) ;
  cEnumerator_constantDefinitionList enumerator_10336 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_10336.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_10473 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_10336.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_1018.readProperty_mRegisterTable (), var_constantMap_9668, var_result_10473, var_usedRegisters_10279, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)) ;
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_1018.readProperty_mRegisterTable ().getter_hasKey (enumerator_10336.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 216)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_10336.current_mConstantName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10336.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_constantMap_9668.setter_insertKey (enumerator_10336.current_mConstantName (HERE), var_result_10473, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 219)) ;
      }
    }
    enumerator_10336.gotoNextObject () ;
  }
  GALGAS_declaredByteMap var_declaredByteMap_11068 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_9668, var_usedRegisters_10279, var_ramBank_1080, var_piccoloDeviceModel_1018.readProperty_mRegisterTable (), var_listFileContents_919, var_registerTable_1702, var_declaredByteMap_11068, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 223)) ;
  }
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    test_36 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 235)))).boolEnum () ;
    if (kBoolTrue == test_36) {
      cEnumerator_ramBankTable enumerator_11314 (var_ramBank_1080, kENUMERATION_UP) ;
      while (enumerator_11314.hasCurrentObject ()) {
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1137.getter_hasKey (enumerator_11314.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 237)).boolEnum () ;
          if (kBoolTrue == test_37) {
            GALGAS_luint var_bootloaderReservedSize_11432 ;
            var_bootloaderReservedRAMmap_1137.method_searchKey (enumerator_11314.current_lkey (HERE), var_bootloaderReservedSize_11432, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)) ;
            enumGalgasBool test_38 = kBoolTrue ;
            if (kBoolTrue == test_38) {
              test_38 = GALGAS_bool (kIsStrictSup, enumerator_11314.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11314.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 240)).objectCompare (var_bootloaderReservedSize_11432.readProperty_uint ())).boolEnum () ;
              if (kBoolTrue == test_38) {
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)), GALGAS_string ("for '").add_operation (enumerator_11314.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (enumerator_11314.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11314.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).add_operation (var_bootloaderReservedSize_11432.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_semantics.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 243)).add_operation (GALGAS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 244)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_37) {
          enumGalgasBool test_40 = kBoolTrue ;
          if (kBoolTrue == test_40) {
            test_40 = GALGAS_bool (kIsStrictSup, enumerator_11314.current_mFirstFreeAddress (HERE).objectCompare (enumerator_11314.current_mFirstAddress (HERE))).boolEnum () ;
            if (kBoolTrue == test_40) {
              TC_Array <C_FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)), GALGAS_string ("for '").add_operation (enumerator_11314.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (enumerator_11314.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11314.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)) ;
            }
          }
        }
        enumerator_11314.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (constinArgument_inSourceFileName, var_piccoloDeviceModel_1018.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 257)), var_macroMap_4607, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1269, var_userRoutineDeclarationListForBootloaderImplementation_1353, var_bootloaderReservedROMsize_1568, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1444, var_userRoutineDeclarationListForUserProgramImplementation_1529, var_accessBankSplitOffset_1052, var_registerTable_1702, var_declaredByteMap_11068, var_routineDefinitionList_7037, constinArgument_inPiccoloModel.readProperty_mProgramKind (), var_constantMap_9668, var_usedRegisters_10279, constinArgument_inPiccoloModel.readProperty_mDataList (), var_interruptDefinitionList_6939, constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), var_ramBank_1080, var_hasHighInterrupt_7687, var_hasLowInterrupt_7763, var_piccoloDeviceModel_1018.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1018.readProperty_mRegisterTable (), var_actualConfigurationMap_8878, constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), var_listFileContents_919, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 255)) ;
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_42) {
      var_listFileContents_919.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)) ;
      GALGAS_string var_listFile_13437 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 286)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 286)) ;
      GALGAS_bool joker_13565 ; // Joker input parameter
      var_listFileContents_919.method_writeToFileWhenDifferentContents (var_listFile_13437, joker_13565, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 287)) ;
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
  GALGAS_string var_sourceFileBaseName_751 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_751.objectCompare (constinArgument_inBootloaderName.readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inBootloaderName.readProperty_location (), GALGAS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName_751, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
    }
  }
  outArgument_outListFileContents = GALGAS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 27)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.readProperty_mProcessorType ().enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint (uint32_t (96U)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint (uint32_t (128U)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsSupOrEqual, constinArgument_inReservedRomSize.readProperty_uint ().objectCompare (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReservedRomSize.readProperty_location (), GALGAS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GALGAS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GALGAS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GALGAS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
    }
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GALGAS_string (" bytes.\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.readProperty_mRamBankTable () ;
  cEnumerator_bootloaderReservedRAMmap enumerator_2485 (constinArgument_inBootloaderReservedRAMmap, kENUMERATION_UP) ;
  while (enumerator_2485.hasCurrentObject ()) {
    GALGAS_uint var_firstAddress_2570 ;
    GALGAS_uint var_firstFreeAddress_2592 ;
    GALGAS_uint var_lastAddressPlusOne_2616 ;
    GALGAS_uintlist var_mirrorOffsetList_2645 ;
    outArgument_outRamBank.method_searchKey (enumerator_2485.current_lkey (HERE), var_firstAddress_2570, var_firstFreeAddress_2592, var_lastAddressPlusOne_2616, var_mirrorOffsetList_2645, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 48)) ;
    var_firstFreeAddress_2592 = var_firstFreeAddress_2592.add_operation (enumerator_2485.current_mReservedSize (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 49)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress_2592.objectCompare (var_lastAddressPlusOne_2616)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2485.current_mReservedSize (HERE).readProperty_location (), GALGAS_string ("reserved size is greater than size of '").add_operation (enumerator_2485.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GALGAS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (var_lastAddressPlusOne_2616.substract_operation (var_firstAddress_2570, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2592, enumerator_2485.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 54)) ;
      }
      outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_2485.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (enumerator_2485.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_firstAddress_2570.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (var_firstFreeAddress_2592.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (GALGAS_string (").\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }
    enumerator_2485.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)) ;
  GALGAS_stringset var_routineNameSet_3634 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)) ;
  GALGAS_uint var_entryPointAddress_3687 = GALGAS_uint (uint32_t (4U)) ;
  cEnumerator_routineDeclarationList enumerator_3721 (constinArgument_inBootloaderRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3721.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_routineNameSet_3634.getter_hasKey (enumerator_3721.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3721.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
      }
    }
    var_routineNameSet_3634.addAssign_operation (enumerator_3721.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 70)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3721.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (var_entryPointAddress_3687.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) ;
    var_entryPointAddress_3687 = var_entryPointAddress_3687.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsEqual, var_entryPointAddress_3687.objectCompare (GALGAS_uint (uint32_t (8U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_entryPointAddress_3687 = GALGAS_uint (uint32_t (12U)) ;
      }
    }
    if (kBoolFalse == test_10) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsEqual, var_entryPointAddress_3687.objectCompare (GALGAS_uint (uint32_t (24U)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          var_entryPointAddress_3687 = GALGAS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_3721.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 79)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)) ;
  var_entryPointAddress_3687 = constinArgument_inReservedRomSize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_4769 (constinArgument_inUserRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_4769.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_routineNameSet_3634.getter_hasKey (enumerator_4769.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4769.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
      }
    }
    var_routineNameSet_3634.addAssign_operation (enumerator_4769.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 90)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_4769.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (var_entryPointAddress_3687.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) ;
    var_entryPointAddress_3687 = var_entryPointAddress_3687.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    enumerator_4769.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GALGAS_stringset joker_5383 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 101)) ;
  {
  GALGAS_declaredByteMap joker_5498 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 100)), joker_5383, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5498, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 97)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
  GALGAS_caseConstantMap var_caseConstantMap_2445 = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18-switch-instruction.galgas", 61)) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  GALGAS_lstring var_exitLabel_2502 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 64)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_2664 = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  GALGAS_bool var_continuesInSequence_2745 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_2783 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_2828 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 71)) ;
  GALGAS_bool var_finalBankSettingDefined_2877 = GALGAS_bool (false) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2947 (temp_1.readProperty_mCaseList (), kENUMERATION_UP) ;
  while (enumerator_2947.hasCurrentObject ()) {
    const GALGAS_pic_31__38_Instruction_5F_switch temp_2 = this ;
    GALGAS_lstring var_conditionTrueLabel_3010 = GALGAS_lstring::constructor_new (GALGAS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), temp_2.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_3148 (enumerator_2947.current_mCaseExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3148.hasCurrentObject ()) {
      GALGAS_string var_conditionLabel_3200 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 79)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 80)) ;
      callExtensionMethod_analyzeCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) enumerator_3148.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_3010, var_conditionLabel_3200, ioArgument_ioUsedRegisters, var_caseConstantMap_2445, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2664, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 81)) ;
      enumerator_3148.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_3649 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_3010 ;
    GALGAS_uint var_branchFinalBank_3732 = var_initialBankSetting_2783 ;
    {
    routine_analyzeInstructionList (enumerator_2947.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3732, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 98)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_continuesInSequence_2745 = GALGAS_bool (true) ;
        const GALGAS_pic_31__38_Instruction_5F_switch temp_4 = this ;
        ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), var_exitLabel_2502, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 122))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 122)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 123)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118)) ;
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2877.boolEnum () ;
      if (kBoolTrue == test_5) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2828.objectCompare (var_branchFinalBank_3732)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_branchFinalBank_3732.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = var_branchFinalBank_3732.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)) ;
            }
            GALGAS_string temp_9 ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_finalBankSetting_2828.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              temp_9 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_10) {
              temp_9 = var_finalBankSetting_2828.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)) ;
            }
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_2947.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 131)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)), fixItArray11  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_5) {
      var_finalBankSettingDefined_2877 = GALGAS_bool (true) ;
      var_finalBankSetting_2828 = var_branchFinalBank_3732 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 139)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3649 ;
    enumerator_2947.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_5281 = var_initialBankSetting_2783 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_12 = this ;
  routine_analyzeInstructionList (temp_12.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5281, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 144)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_5734 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5734.boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_14 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_14.readProperty_mInstructionLocation (), var_exitLabel_2502, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 168))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 168)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 169)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 173)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2828.objectCompare (var_branchFinalBank_5281)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_16 = this ;
      GALGAS_string temp_17 ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, var_branchFinalBank_5281.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_18) {
        temp_17 = var_branchFinalBank_5281.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)) ;
      }
      GALGAS_string temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, var_finalBankSetting_2828.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_20) {
        temp_19 = var_finalBankSetting_2828.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)) ;
      }
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mElseBranchStartLocation (), GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 178)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)), fixItArray21  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)) ;
    }
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_2828 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_continuesInSequence_2745.boolEnum () ;
    if (kBoolTrue == test_22) {
      ioArgument_ioBlockLabel = var_exitLabel_2502 ;
    }
  }
  if (kBoolFalse == test_22) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18-switch-instruction.galgas", 187)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::method_analyzeCaseItem (const GALGAS_registerTable constinArgument_inRegisterTable,
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
  GALGAS_sint_36__34_ var_result_8099 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mCaseExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_8099, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 225)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_8099.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_result_8099.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 227)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCaseExpressionLocation (), GALGAS_string ("case value is evaluated as ").add_operation (var_result_8099.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_8099.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (var_result_8099.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)) ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_8099.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), GALGAS_string ("the '").add_operation (var_result_8099.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_pic_31__38_SimpleConstantCaseItem temp_8 = this ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (var_result_8099.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), temp_8.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)) ;
    }
  }
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_9 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_8099, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 243)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_8099 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_10 = this ;
  GALGAS_lstring var_conditionFalseLabel_9050 = GALGAS_lstring::constructor_new (GALGAS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)), temp_10.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)) ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_11 = this ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_9230 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_11.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas", 252)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 254)), var_conditionFalseLabel_9050, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 256))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 250)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9230, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 263)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 266)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_9050 ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::method_analyzeCaseItem (const GALGAS_registerTable constinArgument_inRegisterTable,
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
  GALGAS_sint_36__34_ var_minBound_10336 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mMinExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10336, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 284)) ;
  GALGAS_sint_36__34_ var_maxBound_10437 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mMaxExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10437, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 285)) ;
  GALGAS_bool var_ok_10470 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_minBound_10336.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound_10336.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 288)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mCaseExpressionLocation (), GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_10336.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)) ;
      var_ok_10470 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictSup, var_maxBound_10437.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound_10437.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_10437.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)) ;
      var_ok_10470 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsInfOrEqual, var_maxBound_10437.objectCompare (var_minBound_10336)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound (").add_operation (var_maxBound_10437.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (var_minBound_10336.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)) ;
      var_ok_10470 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (kIsEqual, var_maxBound_10437.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_and (GALGAS_bool (kIsEqual, var_minBound_10336.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 299)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_IntervalCaseItem temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mCaseExpressionLocation (), GALGAS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 300)) ;
        var_ok_10470 = GALGAS_bool (false) ;
      }
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_ok_10470.boolEnum () ;
    if (kBoolTrue == test_14) {
      cEnumerator_range enumerator_11261 (GALGAS_range::constructor_new (var_minBound_10336.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), var_maxBound_10437.substract_operation (var_minBound_10336, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), kENUMERATION_UP) ;
      while (enumerator_11261.hasCurrentObject ()) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_pic_31__38_IntervalCaseItem temp_16 = this ;
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)) ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), GALGAS_string ("the '").add_operation (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)) ;
          }
        }
        if (kBoolFalse == test_15) {
          {
          const GALGAS_pic_31__38_IntervalCaseItem temp_19 = this ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), temp_19.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)) ;
          }
        }
        enumerator_11261.gotoNextObject () ;
      }
      const GALGAS_pic_31__38_IntervalCaseItem temp_20 = this ;
      GALGAS_lstring var_firstConditionAcceptedLabel_11709 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)), temp_20.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_21 = this ;
      GALGAS_lstring var_firstConditionRejectedLabel_11835 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)), temp_21.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_22 = this ;
      GALGAS_lstring var_intervalRejectedLabel_11955 = GALGAS_lstring::constructor_new (GALGAS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)), temp_22.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_23 = this ;
      GALGAS_ipic_31__38_SequentialInstruction var_secondTestInstruction_12141 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_23.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 320)), var_maxBound_10437.substract_operation (var_minBound_10336, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 318)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_24.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 326)), ioArgument_ioLastComparisonValue.add_operation (GALGAS_sint_36__34_ (int64_t (255LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).substract_operation (var_maxBound_10437, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 329)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_25 = this ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_12664 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_25.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 334)), var_firstConditionAcceptedLabel_11709, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 336)), var_firstConditionRejectedLabel_11835, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 338))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 332)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12664, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 346)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_26 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      temp_26.addAssign_operation (var_secondTestInstruction_12141, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_27 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 351)), var_firstConditionRejectedLabel_11835, temp_26, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_27.readProperty_mCaseExpressionLocation (), var_intervalRejectedLabel_11955, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 354))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 354)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 355)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_28 = this ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__13464 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_28.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 361)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 363)), var_intervalRejectedLabel_11955, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 365))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 359)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_29 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      temp_29.addAssign_operation (var_secondTestInstruction_12141, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 369)), var_firstConditionAcceptedLabel_11709, temp_29, var_t_32__13464, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 373)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368)) ;
      ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 377)) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11955 ;
      ioArgument_ioLastComparisonValue = var_minBound_10336 ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14311 (temp_0.readProperty_mCaseList (), kENUMERATION_UP) ;
  while (enumerator_14311.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_14311.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 391)) ;
    }
    enumerator_14311.gotoNextObject () ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 393)) ;
  }
}
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
  GALGAS_uint var_targetAddress_16490 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_16490, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)) ;
  GALGAS_sint var_displacement_16516 = var_targetAddress_16490.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_16516.objectCompare (GALGAS_sint (int32_t (127L)))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_16516.objectCompare (GALGAS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)) ;
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
  GALGAS_uint var_targetAddress_17010 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_17010, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)) ;
  GALGAS_sint var_displacement_17036 = var_targetAddress_17010.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_17036.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_17036.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)) ;
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
  GALGAS_uint var_targetAddress_17497 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_17497, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)) ;
  result_outDisplacement = var_targetAddress_17497.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)) ;
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
  GALGAS_sint var_displacement_18039 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_18039.objectCompare (GALGAS_sint (int32_t (127L)))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_18039.objectCompare (GALGAS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 521)) ;
    }
  }
  GALGAS_conditional_5F_branch var_conditionalBranch_18335 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inComplemented.boolEnum () ;
    if (kBoolTrue == test_2) {
      switch (constinArgument_inConditionalBranch.enumValue ()) {
      case GALGAS_conditional_5F_branch::kNotBuilt:
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bz:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 527)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnz:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bn:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnn:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bc:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 531)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnc:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 532)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bov:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 533)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnov:
        {
          var_conditionalBranch_18335 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 534)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    var_conditionalBranch_18335 = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode_18964 ;
  GALGAS_string var_mnemonic_18987 ;
  switch (var_conditionalBranch_18335.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (57344U)) ;
      var_mnemonic_18987 = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (57600U)) ;
      var_mnemonic_18987 = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (58880U)) ;
      var_mnemonic_18987 = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (59136U)) ;
      var_mnemonic_18987 = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (57856U)) ;
      var_mnemonic_18987 = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (58112U)) ;
      var_mnemonic_18987 = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (58368U)) ;
      var_mnemonic_18987 = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode_18964 = GALGAS_uint (uint32_t (58624U)) ;
      var_mnemonic_18987 = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic_18987, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)), GALGAS_uintlist::constructor_listWithValue (var_baseCode_18964.operator_or (var_displacement_18039.operator_and (GALGAS_sint (int32_t (255L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)) ;
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
  GALGAS_sint var_displacement_19832 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_19832.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_19832.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_19832.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (55296U)).operator_or (var_displacement_19832.operator_and (GALGAS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 569)) ;
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
  GALGAS_sint var_displacement_20566 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_20566.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_20566.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_20566.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (53248U)).operator_or (var_displacement_20566.operator_and (GALGAS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 586)) ;
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
  GALGAS_uintlist var_binaryCode_21250 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 597)) ;
  var_binaryCode_21250.addAssign_operation (GALGAS_uint (uint32_t (60416U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) ;
  var_binaryCode_21250.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 601)), var_binaryCode_21250  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 600)) ;
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
  GALGAS_uintlist var_binaryCode_21684 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 611)) ;
  var_binaryCode_21684.addAssign_operation (GALGAS_uint (uint32_t (61184U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) ;
  var_binaryCode_21684.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 615)), var_binaryCode_21684  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 614)) ;
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
  result_outCode = GALGAS_codeList::constructor_listWithValue (constinArgument_inTargetLabel.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 625)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 624)) ;
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

GALGAS_string cPtr_ipic_31__38_ReturnTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETURN") ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ReturnTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                      C_Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                       const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RETURN"), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (18U))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ReturnTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_RetfieTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETFIE") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_RetfieTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mFastReturn ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_RetfieTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                      C_Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                       const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GALGAS_string constinArgument_inNextBlockLabel,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_1 = this ;
  GALGAS_bigint temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mFastReturn ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_bigint ("17", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GALGAS_uintlist::constructor_listWithValue (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetfieTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_RetlwTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = this ;
  result_outResult = GALGAS_string ("RETLW ").add_operation (temp_0.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_RetlwTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                     C_Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                      const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                      const GALGAS_string constinArgument_inNextBlockLabel,
                                                                      GALGAS_codeList & outArgument_outCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_1 = this ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (3072U)).operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetlwTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                          C_Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_RetlwTerminator var_t_4553 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (NULL == var_t_4553.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_RetlwTerminator temp_1 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_1.readProperty_mLiteralValue ().objectCompare (var_t_4553.readProperty_mLiteralValue ())) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_JumpTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                    C_Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (0U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    switch (temp_2.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        result_outSize = GALGAS_uint (uint32_t (2U)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        result_outSize = GALGAS_uint (uint32_t (4U)) ;
      }
      break ;
    }
  }
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 185)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 185)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_5.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 186)) ;
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
//
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                        GALGAS_uint & ioArgument_ioConversionCount,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      switch (temp_3.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
        {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
            if (kBoolTrue == test_4) {
              ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_6 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_6.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_8 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_9 = this ;
              outArgument_outModifiedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mLabel (), GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 210))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 210)) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            const GALGAS_ipic_31__38_JumpTerminator temp_11 = this ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 213)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 213)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const GALGAS_ipic_31__38_JumpTerminator temp_12 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_13 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_14 = this ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_13.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)).add_operation (GALGAS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (temp_14.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)) ;
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
//
//Overriding extension getter '@ipic18JumpTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_JumpTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string var_name_7316 ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      var_name_7316 = GALGAS_string ("JUMP ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_name_7316 = GALGAS_string ("BRA ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_name_7316 = GALGAS_string ("GOTO ") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      result_outResult = GALGAS_string ("(").add_operation (var_name_7316, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
    result_outResult = var_name_7316.add_operation (temp_4.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 237)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                     GALGAS_codeList & outArgument_outCode,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_terminators.galgas", 249)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_targetAddress_8038 ;
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mLabel (), var_targetAddress_8038, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 251)) ;
    const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
    switch (temp_3.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8038, temp_4.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 254)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8038, temp_5.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 256)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_JumpTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                         C_Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_JumpTerminator var_t_8755 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (NULL == var_t_8755.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (var_t_8755.readProperty_mLabel ().readProperty_string ())).operator_and (GALGAS_bool (kIsEqual, temp_2.readProperty_mKind ().objectCompare (var_t_8755.readProperty_mKind ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 273)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_AbstractConditionTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 288)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                            GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 301)) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 308)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 326)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 336)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
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
  result_outResult.plusAssign_operation(GALGAS_string (" W ? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 345)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 347)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                     const GALGAS_string constinArgument_inBlockLabel,
                                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                     GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_11796 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_12099 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_12099, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 362)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12388 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12388, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 371)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_11796)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_12099.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_12099.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_12099.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_12099.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 385)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12388.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12388.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12388.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12388.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 386)) ;
      }
    }
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mComparison ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 383)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                  const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                  GALGAS_codeList & outArgument_outCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_13092 ;
  GALGAS_string var_assemblyCode_13119 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  switch (temp_0.readProperty_mComparison ().enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      var_binCode_13092 = GALGAS_uint (uint32_t (25088U)) ;
      var_assemblyCode_13119 = GALGAS_string ("    CPFSEQ") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      var_binCode_13092 = GALGAS_uint (uint32_t (25600U)) ;
      var_assemblyCode_13119 = GALGAS_string ("    CPFSGT") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      var_binCode_13092 = GALGAS_uint (uint32_t (24576U)) ;
      var_assemblyCode_13119 = GALGAS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  var_assemblyCode_13119.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  var_binCode_13092 = var_binCode_13092.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_3) {
      var_binCode_13092 = var_binCode_13092.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 416)) ;
      var_assemblyCode_13119.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_13119, GALGAS_uintlist::constructor_listWithValue (var_binCode_13092  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 421))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 419)) ;
  GALGAS_codeList var_falseTerminatorCode_13913 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_13913, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 423)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_13913, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 429)) ;
  GALGAS_codeList var_trueTerminatorCode_14198 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_14198, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 430)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_14198, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 436)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
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
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_14599.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 447)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_14599.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 449)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mComparison ().objectCompare (var_t_14599.readProperty_mComparison ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_14599.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 455)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 469)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString () ;
  result_outResult.plusAssign_operation(GALGAS_string (" Z ? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 480)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 482)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_16600 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16903 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16903, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 497)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_17192 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_17192, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 506)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_16600)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16903.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16903.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16903.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16903.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 520)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_17192.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_17192.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_17192.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_17192.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 521)) ;
      }
    }
    const GALGAS_pic_31__38_TestRegisterTerminator temp_7 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 518)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                            GALGAS_codeList & outArgument_outCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_17860 = GALGAS_uint (uint32_t (26112U)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  GALGAS_string var_assemblyCode_17896 = GALGAS_string ("    TSTFSZ ").add_operation (temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 534)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  var_binCode_17860 = var_binCode_17860.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_binCode_17860 = var_binCode_17860.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 537)) ;
      var_assemblyCode_17896.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_17896, GALGAS_uintlist::constructor_listWithValue (var_binCode_17860  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 542))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 540)) ;
  GALGAS_codeList var_falseTerminatorCode_18476 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_18476, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 544)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_18476, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 550)) ;
  GALGAS_codeList var_trueTerminatorCode_18761 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_5 = this ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18761, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 551)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_18761, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 557)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
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
      GALGAS_pic_31__38_TestRegisterTerminator var_t_19144 = temp_1 ;
      const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_19144.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 568)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_19144.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 570)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.readProperty_mRegisterDescription (), var_t_19144.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 573)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_BitTestTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (temp_1.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (GALGAS_string (" ? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 589)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_20693 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_20996 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_20996, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 604)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21285 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21285, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 613)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_20693)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_20996.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_20996.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_20996.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_20996.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 627)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21285.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21285.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21285.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21285.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 628)) ;
      }
    }
    const GALGAS_pic_31__38_BitTestTerminator temp_7 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 625)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                       const GALGAS_string constinArgument_inNextBlockLabel,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 642)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_binCode_22125 = GALGAS_uint (uint32_t (45056U)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
      GALGAS_string var_assemblyCode_22163 = GALGAS_string ("    BTFSC ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
      var_binCode_22125 = var_binCode_22125.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_5 = this ;
      var_binCode_22125 = var_binCode_22125.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_BitTestTerminator temp_7 = this ;
        test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_6) {
          var_binCode_22125 = var_binCode_22125.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
          var_assemblyCode_22163.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22163, GALGAS_uintlist::constructor_listWithValue (var_binCode_22125  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 654))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 652)) ;
      GALGAS_codeList var_falseTerminatorCode_22786 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 656)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22786, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_22786, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_binCode_22928 = GALGAS_uint (uint32_t (40960U)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_9 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_10 = this ;
    GALGAS_string var_assemblyCode_22966 = GALGAS_string ("    BTFSS ").add_operation (temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (temp_10.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_11 = this ;
    var_binCode_22928 = var_binCode_22928.operator_or (temp_11.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_12 = this ;
    var_binCode_22928 = var_binCode_22928.operator_or (temp_12.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_BitTestTerminator temp_14 = this ;
      test_13 = temp_14.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_13) {
        var_binCode_22928 = var_binCode_22928.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
        var_assemblyCode_22966.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22966, GALGAS_uintlist::constructor_listWithValue (var_binCode_22928  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 674))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 672)) ;
    GALGAS_codeList var_trueTerminatorCode_23573 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_15 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_23573, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 675)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_23573, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 681)) ;
    GALGAS_codeList var_falseTerminatorCode_23886 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_16 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_17 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23886, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 682)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_23886, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 688)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_BitTestTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
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
      GALGAS_pic_31__38_BitTestTerminator var_t_24265 = temp_1 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_24265.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 700)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_24265.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 702)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_BitTestTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mBitNumber ().objectCompare (var_t_24265.readProperty_mBitNumber ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_24265.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 708)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_IncDecRegisterTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult = GALGAS_string ("INCF ") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_string ("DECF ") ;
  }
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 727)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_3) {
    result_outResult.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 731)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" Z ? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 733)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 735)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_26075 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26378 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26378, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 750)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26667 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26667, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 759)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_26075)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26378.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26378.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26378.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26378.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 773)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26667.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26667.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26667.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26667.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 774)) ;
      }
    }
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 771)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 788)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      GALGAS_bigint temp_3 ;
      const enumGalgasBool test_4 = temp_2.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_bigint ("15360", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790)) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_bigint ("11264", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790)) ;
      }
      GALGAS_uint var_binCode_27553 = temp_3.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = temp_5.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("    INCFSZ") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string ("    DECFSZ") ;
      }
      GALGAS_string var_assemblyCode_27640 = temp_6 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
      var_assemblyCode_27640.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
      var_binCode_27553 = var_binCode_27553.operator_or (temp_9.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_10) {
          var_assemblyCode_27640.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
        }
      }
      if (kBoolFalse == test_10) {
        var_binCode_27553 = var_binCode_27553.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 797)) ;
        var_assemblyCode_27640.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 798)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_13 = this ;
        test_12 = temp_13.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_12) {
          var_binCode_27553 = var_binCode_27553.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
          var_assemblyCode_27640.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_27640, GALGAS_uintlist::constructor_listWithValue (var_binCode_27553  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 806))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 804)) ;
      GALGAS_codeList var_falseTerminatorCode_28402 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_14 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 808)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28402, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_28402, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_15 = this ;
    GALGAS_bigint temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_bigint ("18432", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816)) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_bigint ("19456", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816)) ;
    }
    GALGAS_uint var_binCode_28544 = temp_16.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_18 = this ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string ("    INFSNZ") ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string ("    DCFSNZ") ;
    }
    GALGAS_string var_assemblyCode_28631 = temp_19 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_21 = this ;
    var_assemblyCode_28631.plusAssign_operation(GALGAS_string (" ").add_operation (temp_21.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_22 = this ;
    var_binCode_28544 = var_binCode_28544.operator_or (temp_22.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_24 = this ;
      test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
      if (kBoolTrue == test_23) {
        var_assemblyCode_28631.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
      }
    }
    if (kBoolFalse == test_23) {
      var_binCode_28544 = var_binCode_28544.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 823)) ;
      var_assemblyCode_28631.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_26 = this ;
      test_25 = temp_26.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_25) {
        var_binCode_28544 = var_binCode_28544.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
        var_assemblyCode_28631.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_28631, GALGAS_uintlist::constructor_listWithValue (var_binCode_28544  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 832))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 830)) ;
    GALGAS_codeList var_trueTerminatorCode_29377 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_27 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_29377, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 833)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_29377, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 839)) ;
    GALGAS_codeList var_falseTerminatorCode_29690 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_28 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_29 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29690, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 840)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_29690, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 846)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
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
      GALGAS_ipic_31__38_IncDecRegisterTerminator var_t_30093 = temp_1 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_30093.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 858)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_30093.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 860)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mIncrement ().objectCompare (var_t_30093.readProperty_mIncrement ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_8.readProperty_m_5F_W_5F_isDestination ().objectCompare (var_t_30093.readProperty_m_5F_W_5F_isDestination ())) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.readProperty_mRegisterDescription (), var_t_30093.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 869)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mLiteralValues ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED RETLW") ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  cEnumerator_uintlist enumerator_31458 (temp_0.readProperty_mLiteralValues (), kENUMERATION_UP) ;
  while (enumerator_31458.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31458.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)) ;
    enumerator_31458.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 914)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 914)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 914)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 915)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)) ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_4 = this ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralValues (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 917)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
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
//
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                              const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_32_label_33249 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 944)) ;
  GALGAS_uint var_targetAddress_33344 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_33249, var_targetAddress_33344, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 945)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33344, var_goto_32_label_33249, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 947)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33344, var_goto_32_label_33249, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 949)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  cEnumerator_uintlist enumerator_33552 (temp_2.readProperty_mLiteralValues (), kENUMERATION_UP) ;
  while (enumerator_33552.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GALGAS_string ("    RETLW ").add_operation (enumerator_33552.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 953)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (3072U)).operator_or (enumerator_33552.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 952)) ;
    enumerator_33552.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
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
      GALGAS_ipic_31__38_ComputedRETLWTerminator var_t_34045 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mLiteralValues ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 966)).objectCompare (var_t_34045.readProperty_mLiteralValues ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 966)))) ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_3 = this ;
      cEnumerator_uintlist enumerator_34187 (temp_3.readProperty_mLiteralValues (), kENUMERATION_UP) ;
      cEnumerator_uintlist enumerator_34223 (var_t_34045.readProperty_mLiteralValues (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_34187.hasCurrentObject () && enumerator_34223.hasCurrentObject () && bool_4) {
        while (enumerator_34187.hasCurrentObject () && enumerator_34223.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_34187.current_mValue (HERE).objectCompare (enumerator_34223.current_mValue (HERE))) ;
          enumerator_34187.gotoNextObject () ;
          enumerator_34223.gotoNextObject () ;
          if (enumerator_34187.hasCurrentObject () && enumerator_34223.hasCurrentObject ()) {
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
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED GOTO ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 984)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult.plusAssign_operation(GALGAS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 986)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_34798 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_34798.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_34798.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)) ;
    enumerator_34798.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1018)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1018)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1018)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1019)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)).add_operation (GALGAS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)) ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_4 = this ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mTargetLabels (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1021)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                       const GALGAS_string constinArgument_inBlockLabel,
                                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
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
//
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                             GALGAS_codeList & outArgument_outCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_34_label_36899 = GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1048)) ;
  GALGAS_uint var_targetAddress_36994 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36899, var_targetAddress_36994, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1049)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36994, var_goto_34_label_36899, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36994, var_goto_34_label_36899, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1053)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_37202 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_37202.hasCurrentObject ()) {
    GALGAS_uint var_targetLabelAddress_37296 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_37202.current_mValue (HERE), var_targetLabelAddress_37296, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1056)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37296, enumerator_37202.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)) ;
    enumerator_37202.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
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
      GALGAS_ipic_31__38_ComputedGotoTerminator var_t_37724 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1069)).objectCompare (var_t_37724.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1069)))) ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_37863 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_37898 (var_t_37724.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37863.hasCurrentObject () && enumerator_37898.hasCurrentObject () && bool_4) {
        while (enumerator_37863.hasCurrentObject () && enumerator_37898.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_37863.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_37898.current_mValue (HERE).readProperty_string ())) ;
          enumerator_37863.gotoNextObject () ;
          enumerator_37898.gotoNextObject () ;
          if (enumerator_37863.hasCurrentObject () && enumerator_37898.hasCurrentObject ()) {
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
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED BRA") ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_38706 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_38706.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_38706.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)) ;
    enumerator_38706.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_39216 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_39216.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_39216.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1115)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1115)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_39216.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)).add_operation (GALGAS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (enumerator_39216.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1118)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)) ;
      }
    }
    enumerator_39216.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_4 = this ;
  outArgument_outModifiedTerminator = temp_4 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1123)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1123)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1123)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1124)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)) ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_8 = this ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_9 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabels (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1126)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_40327 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1141)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1141)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1141)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1142)) ;
        }
      }
      var_address_40327 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1144)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_address_40327 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1146)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
  cEnumerator_lstringlist enumerator_40598 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_40598.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40598.current_mValue (HERE), var_address_40327, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1149)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1149)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, enumerator_40598.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1150)) ;
      }
    }
    var_address_40327 = var_address_40327.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1152)) ;
    enumerator_40598.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                            GALGAS_codeList & outArgument_outCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_32_label_41106 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1163)) ;
  GALGAS_uint var_targetAddress_41201 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_41106, var_targetAddress_41201, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
  GALGAS_uint var_address_41222 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_41201, var_goto_32_label_41106, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1167)) ;
      var_address_41222 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1168)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_41201, var_goto_32_label_41106, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1170)) ;
    var_address_41222 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1171)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_41485 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_41485.hasCurrentObject ()) {
    GALGAS_uint var_labelAddress_41573 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41485.current_mValue (HERE), var_labelAddress_41573, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1174)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_41222, var_labelAddress_41573, enumerator_41485.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)) ;
    var_address_41222 = var_address_41222.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1176)) ;
    enumerator_41485.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
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
      GALGAS_ipic_31__38_ComputedBraTerminator var_t_42026 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1188)).objectCompare (var_t_42026.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1188)))) ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_42164 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_42199 (var_t_42026.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_42164.hasCurrentObject () && enumerator_42199.hasCurrentObject () && bool_4) {
        while (enumerator_42164.hasCurrentObject () && enumerator_42199.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_42164.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_42199.current_mValue (HERE).readProperty_string ())) ;
          enumerator_42164.gotoNextObject () ;
          enumerator_42199.gotoNextObject () ;
          if (enumerator_42164.hasCurrentObject () && enumerator_42199.hasCurrentObject ()) {
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
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mConditionalBranch ().enumValue ()) {
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
  result_outResult.plusAssign_operation(GALGAS_string (" ? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1300)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    result_outResult.plusAssign_operation(temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1304)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1306)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    result_outResult.plusAssign_operation(temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1310)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                   GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  GALGAS_conditionalBranchMode var_branchModeOnFalseLabel_48074 = temp_0.readProperty_mBranchModeOnFalseLabel () ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  GALGAS_conditionalBranchMode var_branchModeOnTrueLabel_48156 = temp_1.readProperty_mBranchModeOnTrueLabel () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      switch (temp_4.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1329)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_branchModeOnFalseLabel_48074 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1330)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1334)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_branchModeOnFalseLabel_48074 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1335)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)) ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_12 = this ;
      test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
        switch (temp_13.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1343)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1343)).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_branchModeOnTrueLabel_48156 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (temp_16.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1348)).boolEnum () ;
              if (kBoolTrue == test_17) {
                var_branchModeOnTrueLabel_48156 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1349)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (temp_19.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)) ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
      switch (temp_20.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
          switch (temp_21.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1359)).boolEnum () ;
                if (kBoolTrue == test_22) {
                  var_branchModeOnFalseLabel_48074 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1360)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (temp_24.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)) ;
                }
              }
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1363)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_branchModeOnTrueLabel_48156 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1364)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (temp_27.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)) ;
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
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
          switch (temp_28.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_29 = kBoolTrue ;
              if (kBoolTrue == test_29) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1372)).boolEnum () ;
                if (kBoolTrue == test_29) {
                  var_branchModeOnTrueLabel_48156 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1373)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (temp_31.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)) ;
                }
              }
              enumGalgasBool test_32 = kBoolTrue ;
              if (kBoolTrue == test_32) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1376)).boolEnum () ;
                if (kBoolTrue == test_32) {
                  var_branchModeOnFalseLabel_48074 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1377)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (temp_34.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1381)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_branchModeOnFalseLabel_48074 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1382)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (temp_37.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)) ;
                }
              }
              enumGalgasBool test_38 = kBoolTrue ;
              if (kBoolTrue == test_38) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1385)).boolEnum () ;
                if (kBoolTrue == test_38) {
                  var_branchModeOnTrueLabel_48156 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1386)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (temp_40.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1390)).boolEnum () ;
                if (kBoolTrue == test_41) {
                  var_branchModeOnFalseLabel_48074 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1391)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (temp_43.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
          switch (temp_44.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_45 = kBoolTrue ;
              if (kBoolTrue == test_45) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1398)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1398)).boolEnum () ;
                if (kBoolTrue == test_45) {
                  var_branchModeOnTrueLabel_48156 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1399)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (temp_47.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_48 = kBoolTrue ;
              if (kBoolTrue == test_48) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_49 = this ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1403)).boolEnum () ;
                if (kBoolTrue == test_48) {
                  var_branchModeOnTrueLabel_48156 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1404)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_50 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (temp_50.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)) ;
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
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_52 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_53 = this ;
    test_51 = GALGAS_bool (kIsEqual, var_branchModeOnFalseLabel_48074.objectCompare (temp_52.readProperty_mBranchModeOnFalseLabel ())).operator_and (GALGAS_bool (kIsEqual, var_branchModeOnTrueLabel_48156.objectCompare (temp_53.readProperty_mBranchModeOnTrueLabel ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1411)).boolEnum () ;
    if (kBoolTrue == test_51) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_54 = this ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (kBoolFalse == test_51) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_55 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_56 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_57 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_58 = this ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_55.readProperty_mInstructionLocation (), temp_56.readProperty_mConditionalBranch (), temp_57.readProperty_mTargetLabelWhenTrue (), var_branchModeOnTrueLabel_48156, temp_58.readProperty_mTargetLabelWhenFalse (), var_branchModeOnFalseLabel_48074  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1414)) ;
    ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1421)) ;
  }
}
